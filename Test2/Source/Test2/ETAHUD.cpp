// Fill out your copyright notice in the Description page of Project Settings.


#include "ETAHUD.h"

void UETAHUD::PlayDownload() {
	if (MapAnimation) {
		PlayAnimation(MapAnimation);
	}
}