/**
 * @file  BlockSourceListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSourceListener.
 *
 */
class BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCELISTENER
public:
    class BlockSourceListener& operator=(class BlockSourceListener const &) = delete;
    BlockSourceListener(class BlockSourceListener const &) = delete;
    BlockSourceListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1999088938
     */
    virtual ~BlockSourceListener();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?onSourceDestroyed@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z
     * @hash   140701978
     */
    virtual void onSourceDestroyed(class BlockSource &);
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1402786588
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?onBrightnessChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   147465493
     */
    virtual void onBrightnessChanged(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?onBlockEntityAboutToBeRemoved@BlockSourceListener@@UEAAXAEAVBlockSource@@V?$shared_ptr@VBlockActor@@@std@@@Z
     * @hash   568311495
     */
    virtual void onBlockEntityAboutToBeRemoved(class BlockSource &, class std::shared_ptr<class BlockActor>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCELISTENER
    /**
     * @symbol ?onAreaChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -524297495
     */
    MCVAPI void onAreaChanged(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?onBlockChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
     * @hash   -1363815611
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum class BlockChangedEventTarget, class Actor *);
    /**
     * @symbol ?onBlockEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVBlockActor@@@Z
     * @hash   -2141300730
     */
    MCVAPI void onBlockEntityChanged(class BlockSource &, class BlockActor &);
    /**
     * @symbol ?onBlockEvent@BlockSourceListener@@UEAAXAEAVBlockSource@@HHHHH@Z
     * @hash   1553622050
     */
    MCVAPI void onBlockEvent(class BlockSource &, int, int, int, int, int);
    /**
     * @symbol ?onEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVActor@@@Z
     * @hash   -1637142960
     */
    MCVAPI void onEntityChanged(class BlockSource &, class Actor &);
    /**
     * @symbol ?onSourceCreated@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z
     * @hash   1175835147
     */
    MCVAPI void onSourceCreated(class BlockSource &);
#endif

};