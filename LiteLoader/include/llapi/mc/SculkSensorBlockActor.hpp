/**
 * @file  SculkSensorBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkSensorBlockActor.
 *
 */
class SculkSensorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSENSORBLOCKACTOR
public:
    class SculkSensorBlockActor& operator=(class SculkSensorBlockActor const &) = delete;
    SculkSensorBlockActor(class SculkSensorBlockActor const &) = delete;
    SculkSensorBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SculkSensorBlockActor();
    /**
     * @hash   -1653666707
     * @vftbl  1
     * @symbol  ?load\@SculkSensorBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1718450780
     * @vftbl  2
     * @symbol  ?save\@SculkSensorBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -473737226
     * @vftbl  7
     * @symbol  ?tick\@SculkSensorBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   1548226658
     * @vftbl  13
     * @symbol  ?onRemoved\@SculkSensorBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @hash   -423321543
     * @symbol  ??0SculkSensorBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SculkSensorBlockActor(class BlockPos const &);
    /**
     * @hash   889626392
     * @symbol  ?getLatestReceivedVibrationFrequency\@SculkSensorBlockActor\@\@QEBAHXZ
     */
    MCAPI int getLatestReceivedVibrationFrequency() const;
    /**
     * @hash   23453285
     * @symbol  ?onStepOn\@SculkSensorBlockActor\@\@QEAAXAEAVBlockSource\@\@AEAVActor\@\@\@Z
     */
    MCAPI void onStepOn(class BlockSource &, class Actor &);
    /**
     * @hash   -728508121
     * @symbol  ?TypeId\@SculkSensorBlockActor\@\@2W4BlockActorType\@\@B
     */
    MCAPI static enum class BlockActorType const TypeId;
    /**
     * @hash   946312649
     * @symbol  ?TypeString\@SculkSensorBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TypeString;
    /**
     * @hash   -1221645128
     * @symbol  ?tryGet\@SculkSensorBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class SculkSensorBlockActor * tryGet(class BlockSource &, class BlockPos const &);

};