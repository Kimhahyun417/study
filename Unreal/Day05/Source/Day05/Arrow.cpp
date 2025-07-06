// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
// Sets default values
AArrow::AArrow()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(FName("DefaultSceneRoot"));
	}

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("/Script/Engine.StaticMesh'/Game/ParagonSparrow/FX/Meshes/Heroes/Sparrow/Abilities/SM_Sparrow_Arrow.SM_Sparrow_Arrow'"));
	if (SM.Succeeded())
	{
		Mesh->SetStaticMesh(SM.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> AM(TEXT("/Script/Engine.Material'/Game/ParagonSparrow/Characters/Heroes/Sparrow/Materials/M_Sparrow_Arrow.M_Sparrow_Arrow'"));
	if (AM.Succeeded())
	{
		Mesh->SetMaterial(0, AM.Object);
	}


	Mesh->SetRelativeLocationAndRotation(FVector(100.f, 0.f, 0.f), FRotator(90.f, 0.f, 0.f));
	Mesh->SetupAttachment(RootComponent);
	Mesh->SetCollisionProfileName(TEXT("NoCollision"));

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetRelativeLocation(FVector(0.f, 0.f, -55.f));
	CollisionBox->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AArrow::OnOverlapBegin);

	ProjectileMovemone = CreateDefaultSubobject<UProjectileMovementComponent>(FName("Projectile Movement"));
	ProjectileMovemone->SetUpdatedComponent(RootComponent);
	ProjectileMovemone->InitialSpeed = 3000.f;
	ProjectileMovemone->MaxSpeed = 3000.f;
	ProjectileMovemone->bRotationFollowsVelocity = true;
}


// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArrow::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("OnOverlapBegin: %s"), *OtherActor->GetName());

	ProjectileMovemone->StopMovementImmediately();
	ProjectileMovemone->ProjectileGravityScale = 0.f;
}

