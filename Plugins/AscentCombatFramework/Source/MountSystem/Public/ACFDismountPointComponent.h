// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2021. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include <Components/SceneComponent.h>
#include <GameplayTagContainer.h>
#include "ACFDismountPointComponent.generated.h"


UCLASS(ClassGroup = (ACF), Blueprintable, meta = (BlueprintSpawnableComponent))
class MOUNTSYSTEM_API UACFDismountPointComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UACFDismountPointComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = ACF)
	FName PointTag;

public:	

	UFUNCTION(BlueprintPure, Category = ACF)
	FORCEINLINE FName GetPointTag() const {
		return PointTag;
	}
		
};
