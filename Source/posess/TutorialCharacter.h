// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TutorialCharacter.generated.h"

UCLASS()
class POSESS_API ATutorialCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATutorialCharacter();

	// Unreal functions need to be tagged with UFUNCTION. BlueprintCallable allows us to call from a blueprint. Category allows us to organize things
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		// function
		void SpawnActor();

	// Unreal variables need tag UPROPERTY and EditAnywhere allows us to call the variable from blueprints. AActor is an existing class in unreal
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> actorBPToSpawn;

	UPROPERTY(EditAnywhere)
		FTransform spawnPos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
