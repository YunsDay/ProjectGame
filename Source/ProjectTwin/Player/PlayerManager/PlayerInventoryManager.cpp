// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInventoryManager.h"

UPlayerInventoryManager::UPlayerInventoryManager():
	m_pGameInstance{}
{
}

UPlayerInventoryManager::~UPlayerInventoryManager()
{
}

void UPlayerInventoryManager::Initialize(UPTGameInstance* pGameInstance)
{
	m_pGameInstance = pGameInstance;
}

void UPlayerInventoryManager::Deinitialize()
{
}
