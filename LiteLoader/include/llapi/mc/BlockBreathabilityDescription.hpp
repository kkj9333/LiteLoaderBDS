/**
 * @file  BlockBreathabilityDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockBreathabilityDescription.
 *
 */
struct BlockBreathabilityDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREATHABILITYDESCRIPTION
public:
    struct BlockBreathabilityDescription& operator=(struct BlockBreathabilityDescription const &) = delete;
    BlockBreathabilityDescription(struct BlockBreathabilityDescription const &) = delete;
    BlockBreathabilityDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockBreathabilityDescription();
    /**
     * @hash   1042157146
     * @vftbl  1
     * @symbol  ?getName\@BlockBreathabilityDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -935864286
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockBreathabilityDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -2095490060
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockBreathabilityDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   266676830
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockBreathabilityDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1554944871
     * @symbol  ?NameID\@BlockBreathabilityDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1201806113
     * @symbol  ?bindType\@BlockBreathabilityDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -845321338
     * @symbol  ?registerVersionUpgrades\@BlockBreathabilityDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};