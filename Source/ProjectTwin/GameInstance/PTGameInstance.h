// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PTGameInstance.generated.h"

class UPlayerInventoryManager;

/**
 * 
 */
UCLASS()
class PROJECTTWIN_API UPTGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPTGameInstance(const FObjectInitializer& ObjectInitializer);

	static class UPTGameInstance* GetGameInstance(class UObject* OutterOwner);
	void Init() override;
	void Shutdown() override;

public:
	FORCEINLINE UPlayerInventoryManager* GetPlayerInventoryManager() { return m_pPlayerInventoryManager; };

private:
	UPlayerInventoryManager* m_pPlayerInventoryManager = nullptr;

};
