/**
 * @file  VinesFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VinesFeature.
 *
 */
class VinesFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VINESFEATURE
public:
    class VinesFeature& operator=(class VinesFeature const &) = delete;
    VinesFeature(class VinesFeature const &) = delete;
    VinesFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -662238089
     */
    virtual ~VinesFeature();
    /**
     * @vftbl  3
     * @symbol ?place@VinesFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1315199129
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};