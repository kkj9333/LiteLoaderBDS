/**
 * @file  DimensionBrightnessRamp.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionBrightnessRamp.
 *
 */
class DimensionBrightnessRamp {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONBRIGHTNESSRAMP
public:
    class DimensionBrightnessRamp& operator=(class DimensionBrightnessRamp const &) = delete;
    DimensionBrightnessRamp(class DimensionBrightnessRamp const &) = delete;
    DimensionBrightnessRamp() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DimensionBrightnessRamp();
    /**
     * @hash   -1806931297
     * @vftbl  1
     * @symbol  ?buildBrightnessRamp\@DimensionBrightnessRamp\@\@UEAAXXZ
     */
    virtual void buildBrightnessRamp();
    /**
     * @hash   -371846315
     * @vftbl  2
     * @symbol  ?getBaseAmbientValue\@DimensionBrightnessRamp\@\@UEBAMXZ
     */
    virtual float getBaseAmbientValue() const;
    /**
     * @hash   317324741
     * @symbol  ?getBrightnessRampValue\@DimensionBrightnessRamp\@\@QEBAMH\@Z
     */
    MCAPI float getBrightnessRampValue(int) const;

};