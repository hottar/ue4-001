#ifndef PC_H
#define PC_H

#include "GameFrameWork/Actor.h"
#include "PlayableCharacter.generated.h"

UCLASS() class APlayableCharacter : public AActor {
public:
  APlayableCharacter();
  virtual void Tick(float DeltaSeconds) override;
  
private:
  virtual void BeginPlay() override;
}

#endif
