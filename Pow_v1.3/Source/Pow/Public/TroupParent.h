// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TroupParent.generated.h"

USTRUCT(BlueprintType)
struct FTroupInfos
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString utility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int range;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int movement_ability;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> sp_abilities;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int life;

	//default constructor
	FTroupInfos()
	{
		name = FName(TEXT("Troup"));
		utility = FString(TEXT("Utility"));
		damage = 0;
		range = 0;
		movement_ability = 0;
		sp_abilities = TArray<FName>();
		life = 0;

	}
};



UCLASS()
class POW_API ATroupParent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATroupParent();
	UFUNCTION(BlueprintCallable, Category = "Actions")
	UPARAM(DisplayName = "is dead")
	bool attack(ATroupParent* troup_to_attack);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool is_dead() const;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true))
	FTroupInfos troup_infos;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
