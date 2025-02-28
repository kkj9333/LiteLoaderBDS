/**
 * @file  StructureAnimationAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureAnimationAction.
 *
 */
class StructureAnimationAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONACTION
public:
    class StructureAnimationAction& operator=(class StructureAnimationAction const &) = delete;
    StructureAnimationAction(class StructureAnimationAction const &) = delete;
    StructureAnimationAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureAnimationAction();
    /**
     * @hash   -1353174704
     * @vftbl  1
     * @symbol  ?execute\@StructureAnimationAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @hash   919284813
     * @vftbl  2
     * @symbol  ?serialize\@StructureAnimationAction\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag &);
    /**
     * @hash   -217074796
     * @vftbl  3
     * @symbol  ??8StructureAnimationAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @hash   -1239789139
     * @symbol  ??0StructureAnimationAction\@\@QEAA\@V?$unique_ptr\@VStructureAnimationData\@\@U?$default_delete\@VStructureAnimationData\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI StructureAnimationAction(std::unique_ptr<class StructureAnimationData>, class AutomaticID<class Dimension, int>);
    /**
     * @hash   2037582667
     * @symbol  ??0StructureAnimationAction\@\@QEAA\@AEBVStructureSettings\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI StructureAnimationAction(class StructureSettings const &, class AutomaticID<class Dimension, int>, class BlockPos const &, std::string const &);
    /**
     * @hash   826047761
     * @symbol  ?isValidTag\@StructureAnimationAction\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const &);
    /**
     * @hash   1191151416
     * @symbol  ?load\@StructureAnimationAction\@\@SA?AV?$unique_ptr\@VStructureAnimationAction\@\@U?$default_delete\@VStructureAnimationAction\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class StructureAnimationAction> load(class CompoundTag const &, std::string const &);

};