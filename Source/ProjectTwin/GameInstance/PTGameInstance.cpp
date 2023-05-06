// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameInstance.h"
#include "../ProjectTwin.h"
#include "../Player/PlayerManager/PlayerInventoryManager.h"

PROJECTTWIN_API UPTGameInstance* g_pGameInstance = nullptr;

UPTGameInstance::UPTGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	g_pGameInstance = this;
}

UPTGameInstance* UPTGameInstance::GetGameInstance(UObject* OutterOwner)
{
	UPTGameInstance* pGameInstance = Cast<UPTGameInstance>(OutterOwner->GetWorld()->GetGameInstance());
	if (pGameInstance == nullptr)
	{
		//UE_LOG(LogGamePlay, Error, TEXT("G3Instance == nullptr"));
		return g_pGameInstance;
	}

	return pGameInstance;
}

void UPTGameInstance::Init()
{
	UE_LOG(LogGamePlay, Display, TEXT("Initialize 'Project:One' GameInstance and GameManagers"));

	Super::Init();

	g_pGameInstance = this;

	m_pPlayerInventoryManager = NewObject<UPlayerInventoryManager>((UObject*)GetTransientPackage(), UPlayerInventoryManager::StaticClass());
	m_pPlayerInventoryManager->Initialize(this);
}

void UPTGameInstance::Shutdown()
{

	Super::Shutdown();
}
