// Fill out your copyright notice in the Description page of Project Settings.


#include "TroupParent.h"

// Sets default values
ATroupParent::ATroupParent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	troup_infos = FTroupInfos();

}

bool ATroupParent::attack(ATroupParent* troup_to_attack)
{
	troup_to_attack->troup_infos.life -= troup_infos.damage;
	return troup_to_attack->is_dead();
}

// Called when the game starts or when spawned
void ATroupParent::BeginPlay()
{
	Super::BeginPlay();
	
}

bool ATroupParent::is_dead() const
{
	return troup_infos.life<=0;
}

// Called every frame
void ATroupParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATroupParent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

