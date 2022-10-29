/**
 * @file  SporeBlossomBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SporeBlossomBlockActor.
 *
 */
class SporeBlossomBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPOREBLOSSOMBLOCKACTOR
public:
    class SporeBlossomBlockActor& operator=(class SporeBlossomBlockActor const &) = delete;
    SporeBlossomBlockActor(class SporeBlossomBlockActor const &) = delete;
    SporeBlossomBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -863328816
     */
    virtual ~SporeBlossomBlockActor();
    /**
     * @vftbl  7
     * @symbol ?tick@SporeBlossomBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1097897670
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -380221563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @hash   -376527479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  28
     * @hash   -346051286
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -308978789
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -288661327
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -322963261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -322039740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -321116219
     */
    virtual void __unk_vfn_34();
    /**
     * @symbol ??0SporeBlossomBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -458116807
     */
    MCAPI SporeBlossomBlockActor(class BlockPos const &);

};