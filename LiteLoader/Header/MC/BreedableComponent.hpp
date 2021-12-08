// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BreedableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLECOMPONENT
public:
    class BreedableComponent& operator=(class BreedableComponent const&) = delete;
    BreedableComponent(class BreedableComponent const&) = delete;
#endif

public:
    MCAPI BreedableComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI bool canMate(class Actor const&, class Actor const&) const;
    MCAPI void decrementBreedCooldown();
    MCAPI void decrementLoveTimer();
    MCAPI int getBreedCooldown() const;
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI int getLoveTimer() const;
    MCAPI void mate(class Actor&, class Actor&);
    MCAPI bool meetsSittingRequirements(class Actor const&) const;
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void resetLove(class Actor&);
    MCAPI void setLoveTimer(int);

protected:

private:
    MCAPI void _handleMate(class Actor&, class Actor&);
    MCAPI void _handlePregnancy(class Actor&, class Actor&);

};