// Fill out your copyright notice in the Description page of Project Settings.

#include "Console2GameInstance.h"
#include "Engine.h"
#include "Online.h"

FString UConsole2GameInstance::GetGamerTag()
{
	FString nickname;
	auto OnlineSub = IOnlineSubsystem::Get();

	if (OnlineSub != nullptr)
	{
		auto userIdentityPtr = OnlineSub->GetIdentityInterface();
		if (userIdentityPtr.IsValid())
		{
			nickname = OnlineSub->GetIdentityInterface()->GetPlayerNickname(0);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
				FString::Printf(TEXT("Gamertag: %s"), *nickname));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
				FString::Printf(TEXT("Invalid User Identity Pointer")));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
			FString::Printf(TEXT("Invalid Online Subsystem")));
	}
	return nickname;
}


