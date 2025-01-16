// Fill out your copyright notice in the Description page of Project Settings.


#include "Rock.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

// Called when the game starts or when spawned
void ARock::BeginPlay()
{
	Super::BeginPlay();
}

void ARock::Throw(const float ThrowForce)
{
	UActorComponent* CreatedComponent = AddComponentByClass(UProjectileMovementComponent::StaticClass(), false, GetTransform(), false);
    MovementComponent = Cast<UProjectileMovementComponent>(CreatedComponent);

    const FVector Force = GetActorForwardVector() * ThrowForce;
    MovementComponent->AddForce(Force);
	UE_LOG(LogTemp, Display, TEXT("Rock : %f ; %f ; %f"), Force.X, Force.Y, Force.Z);
}

