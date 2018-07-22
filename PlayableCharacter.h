#ifndef PC_H
#define PC_H

#include "GameFrameWork/Actor.h"
#include "PlayableCharacter.generated.h"

UCLASS() class APlayableCharacter : public AActor {
public:
  APlayableCharacter();
  virtual void Tick(float DeltaSeconds) override;
  
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Velocity")
  float Speed;
  
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Velocity")
    int Direction;
  
  // Transient: data niether saved nor loaded to disk. may be applied to variables dependent of the other.
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient, Category="Velocity")
    float Acceleration;
private:
  virtual void BeginPlay() override;
}

#endif
