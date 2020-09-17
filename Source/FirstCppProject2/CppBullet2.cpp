// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBullet2.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ACppBullet2::ACppBullet2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>("BulletMesh");
	SetRootComponent(BulletMesh);

	BulletMove = CreateDefaultSubobject<UProjectileMovementComponent>("BulletMove");
	BulletMove->InitialSpeed = 500.f;
	BulletMove->MaxSpeed = 500.f;
}

// Called when the game starts or when spawned
void ACppBullet2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppBullet2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

