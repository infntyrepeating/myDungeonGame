// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DungeonStructure.generated.h"

/**
 *
 */

USTRUCT(BlueprintType)
struct DBTY_API FDungeonStructure
{
	GENERATED_BODY()
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UWorld> Level;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector ExitLocation;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FRotator ExitRotation;

	FDungeonStructure();
	~FDungeonStructure();
};

