// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Console2GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CONSOLE2_API UConsole2GameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	//virtual void BeginPlay();
	
	UFUNCTION(BlueprintCallable, Category = "XboxGamerTag")
		FString GetGamerTag();
	
};
