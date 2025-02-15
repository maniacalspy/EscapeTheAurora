// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EscapeTheAuroraCharacter.h"
#include "EscapeTheAuroraProjectile.h"
#include "ETAHUD.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "UObject/ConstructorHelpers.h"
#include "Interactable.h"
#include "EditableTextWidget.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AEscapeTheAuroraCharacter

AEscapeTheAuroraCharacter::AEscapeTheAuroraCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	//Set up walking speed
	BaseMoveSpeed = 30.f;


	ConstructorHelpers::FClassFinder<UPauseHudWidget> MenuClassFinder(TEXT("/Game/FirstPerson/UItesting/UI"));

	PauseHudClass = MenuClassFinder.Class;

	ConstructorHelpers::FClassFinder<UHUDWidgetBase> StartMenuFinder(TEXT("/Game/FirstPerson/UItesting/MainMenu"));

	MainMenu = StartMenuFinder.Class;

	ConstructorHelpers::FClassFinder<UETAHUD> GameHUDClassFinder(TEXT("/Game/FirstPerson/UItesting/HUD"));

	GameHud = GameHUDClassFinder.Class;


	ConstructorHelpers::FClassFinder<UHUDWidgetBase> ControlsHUDFinder(TEXT("/Game/FirstPersonCPP/Blueprints/Controls_HUD"));

	ControlsHUD = ControlsHUDFinder.Class;

	TraceParams = FCollisionQueryParams(FName(TEXT("Trace")), true, this);
	
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	
	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
}

void AEscapeTheAuroraCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	//FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}

	APlayerController* mycontroller = GetWorld()->GetFirstPlayerController();

	if (mycontroller)
	{
		if (MainMenu)
		{
			MainMenuInstance = CreateWidget<UHUDWidgetBase>(mycontroller, MainMenu);
			MainMenuInstance->Setup();
			MainMenuInstance->OpenMenu();
			mycontroller->SetPause(true);
		}

		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("HUD Class = Null"));
		}


		

		if (PauseHudClass) {
			PauseHudInstance = CreateWidget<UPauseHudWidget>(mycontroller, PauseHudClass);
			PauseHudInstance->Setup();
		}

		if (GameHud) {
			GameHudInstance = CreateWidget<UETAHUD>(mycontroller, GameHud);
			GameHudInstance->Setup();
			GameHudInstance->AddToViewport();
		}
	}





}

void AEscapeTheAuroraCharacter::ShowControlsWidget() {
	APlayerController* mycontroller = GetWorld()->GetFirstPlayerController();

	if (ControlsHUD) {
		auto ControlsHUDInstance = CreateWidget<UHUDWidgetBase>(mycontroller, ControlsHUD);
		ControlsHUDInstance->AddToViewport();
	}
}


//////////////////////////////////////////////////////////////////////////
// Input

void AEscapeTheAuroraCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);



	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &AEscapeTheAuroraCharacter::TogglePause).bExecuteWhenPaused = true;

#if WITH_EDITOR
	PlayerInputComponent->BindKey(EKeys::P, IE_Pressed, this, &AEscapeTheAuroraCharacter::TogglePause).bExecuteWhenPaused = true;
#endif

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AEscapeTheAuroraCharacter::ResetLevel);
	PlayerInputComponent->BindAction("Quit", IE_Pressed, this, &AEscapeTheAuroraCharacter::QuitGame);
	PlayerInputComponent->BindAction("InterAct", IE_Pressed, this, &AEscapeTheAuroraCharacter::Interact);


	// Bind fire event
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AEscapeTheAuroraCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AEscapeTheAuroraCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AEscapeTheAuroraCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AEscapeTheAuroraCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AEscapeTheAuroraCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AEscapeTheAuroraCharacter::LookUpAtRate);
}

void AEscapeTheAuroraCharacter::QuitGame() {
	FGenericPlatformMisc::RequestExit(false);
}

void AEscapeTheAuroraCharacter::ResetLevel() {
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void AEscapeTheAuroraCharacter::TogglePause() {
	APlayerController* mycontroller = GetWorld()->GetFirstPlayerController();
	
	if (mycontroller) {
		bool isPaused = mycontroller->IsPaused();
		if (!isPaused) {
			if (PauseHudClass) {
				if (!PauseHudInstance) {
						PauseHudInstance = CreateWidget<UPauseHudWidget>(mycontroller, PauseHudClass);
						PauseHudInstance->Setup();
						PauseHudInstance->OpenPauseMenu();
				}
				else if (!(PauseHudInstance->IsInViewport())) {
					PauseHudInstance->OpenPauseMenu();
				}
			}
		}
		else {
			if (MainMenuInstance->IsVisible()) MainMenuInstance->CloseMenu();
			if(PauseHudInstance) PauseHudInstance->CloseMenu();
		}
		mycontroller->SetPause(!isPaused);
	}
}

void AEscapeTheAuroraCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AEscapeTheAuroraCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		//OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AEscapeTheAuroraCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void AEscapeTheAuroraCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value * BaseMoveSpeed * GetWorld()->GetDeltaSeconds());
	}
}

void AEscapeTheAuroraCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value * BaseMoveSpeed * GetWorld()->GetDeltaSeconds());
		//Collision
	}
}

void AEscapeTheAuroraCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if (!(FMath::IsNearlyZero((double)Rate, .1))) AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AEscapeTheAuroraCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if (!(FMath::IsNearlyZero((double)Rate, .1))) AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AEscapeTheAuroraCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AEscapeTheAuroraCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AEscapeTheAuroraCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AEscapeTheAuroraCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

void AEscapeTheAuroraCharacter::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
	HandleFocus();
}

#pragma region Interaction

bool AEscapeTheAuroraCharacter::SetInteractionPromptText(FString Intext) {
	if (InteractionPromptInstance) {
		return (InteractionPromptInstance->SetText(Intext));
	}
	return true;
}


void AEscapeTheAuroraCharacter::Interact() {
	if (FocusedInteractable) {
		IInteractable* interactinterface = Cast<IInteractable>(FocusedInteractable);
		if (interactinterface == NULL) {
			return;
		}
		interactinterface->Execute_OnInteract(FocusedInteractable, this);
	}
}

AActor* AEscapeTheAuroraCharacter::FindActorInLOS() {
	if (!Controller)
	{
		return nullptr;
	}

	FVector Loc;
	FRotator Rot;
	FHitResult Hit(ForceInit);
	GetController()->GetPlayerViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * InteractionDistance);

	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	return Hit.GetActor();
}

void AEscapeTheAuroraCharacter::HandleFocus() {
	AActor* interactable = FindActorInLOS();

	if (interactable)
	{
		if (interactable != FocusedInteractable)
		{
			if (FocusedInteractable)
			{
				IInteractable* interface = Cast<IInteractable> (FocusedInteractable);
				if (interface)
				{
					interface->Execute_EndFocus(FocusedInteractable);
					if (InteractionPromptInstance) InteractionPromptInstance->RemoveFromViewport();
				}
			}
			IInteractable* interface = Cast<IInteractable>(interactable);
			if (interface)
			{
				if (InteractionPromptClass != nullptr && InteractionPromptInstance == nullptr) {
					InteractionPromptInstance = CreateWidget<UEditableTextWidget>(GetWorld()->GetFirstPlayerController(), InteractionPromptClass);
				}
				if ((interface->Execute_StartFocus(interactable, this))) {
					InteractionPromptInstance->AddToViewport();
				}
			}
			FocusedInteractable = interactable;
		}
	}
	else
	{
		if (FocusedInteractable)
		{
			IInteractable* interface = Cast<IInteractable>(FocusedInteractable);
			if (interface)
			{
				interface->Execute_EndFocus(FocusedInteractable);
				if (InteractionPromptInstance != nullptr) InteractionPromptInstance->RemoveFromViewport();
			}
		}
		FocusedInteractable = nullptr;
	}

}

#pragma endregion