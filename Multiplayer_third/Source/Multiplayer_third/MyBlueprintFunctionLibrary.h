// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYER_THIRD_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintPure, Category = "Network")
    	static bool HasLocalNetOwner(AActor *actor);
	
		UFUNCTION(BlueprintPure, Category = "Float")
    	static float MaxFloat();
	
		UFUNCTION(BlueprintPure, Category = "Int")
    	static int MaxInt();
};
