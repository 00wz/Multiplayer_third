// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

bool UMyBlueprintFunctionLibrary::HasLocalNetOwner(AActor *actor)
{
	return actor->HasLocalNetOwner();
}

float UMyBlueprintFunctionLibrary::MaxFloat()
{
	return std::numeric_limits<float>::max();
}
