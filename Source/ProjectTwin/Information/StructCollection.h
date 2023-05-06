// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StructCollection.generated.h" 

USTRUCT()
struct PROJECTTWIN_API FPlayerInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		FString strNickName;
	UPROPERTY(EditAnywhere)
		FString strLoginID;
};

USTRUCT()
struct PROJECTTWIN_API FItemInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		FString strItemName;
	UPROPERTY(EditAnywhere)
		int32 nQuantity;
	UPROPERTY(EditAnywhere)
		int32 nMaxQuantity;
};