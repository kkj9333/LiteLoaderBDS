/**
 * @file  ItemComponent.hpp
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
 * @brief MC class ItemComponent.
 *
 */
class ItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENT
public:
    class ItemComponent& operator=(class ItemComponent const &) = delete;
    ItemComponent(class ItemComponent const &) = delete;
    ItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -992288008
     */
    virtual ~ItemComponent();
    /**
     * @vftbl  1
     * @hash   -1362796495
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?writeSettings@ItemComponent@@UEAAXXZ
     * @hash   -389169633
     */
    virtual void writeSettings();
    /**
     * @vftbl  3
     * @hash   -1353738109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1352814588
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@ItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -1579437175
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMCOMPONENT
    /**
     * @symbol ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
     * @hash   1639346840
     */
    MCVAPI bool checkComponentDataForContentErrors() const;
    /**
     * @symbol ?initializeFromNetwork@ItemComponent@@UEAA_NAEBVCompoundTag@@@Z
     * @hash   1980504359
     */
    MCVAPI bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?isNetworkComponent@ItemComponent@@UEBA_NXZ
     * @hash   1383328967
     */
    MCVAPI bool isNetworkComponent() const;
    /**
     * @symbol ?useOn@ItemComponent@@UEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
     * @hash   -735704743
     */
    MCVAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
#endif
    /**
     * @symbol ??0ItemComponent@@QEAA@PEAVComponentItem@@@Z
     * @hash   -710214256
     */
    MCAPI ItemComponent(class ComponentItem *);
    /**
     * @symbol ?bindItemComponentType@ItemComponent@@SAXXZ
     * @hash   -413161471
     */
    MCAPI static void bindItemComponentType();
    /**
     * @symbol ?registerVersionUpgrades@ItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -600001380
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};