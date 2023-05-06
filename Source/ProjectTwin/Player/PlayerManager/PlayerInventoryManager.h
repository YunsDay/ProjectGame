// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerInventoryManager.generated.h"

class UPTGameInstance;
/**
 * 
 */
UCLASS()
class PROJECTTWIN_API UPlayerInventoryManager : public UObject
{
	GENERATED_BODY()

public:
	UPlayerInventoryManager();
	virtual ~UPlayerInventoryManager();

	void Initialize(UPTGameInstance* pGameInstance);
	void Deinitialize();

private:
	UPTGameInstance* m_pGameInstance;
};
