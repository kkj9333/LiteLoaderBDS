/**
 * @file  ContainerModel.hpp
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
 * @brief MC class ContainerModel.
 *
 */
class ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERMODEL
public:
    class ContainerModel& operator=(class ContainerModel const &) = delete;
    ContainerModel(class ContainerModel const &) = delete;
    ContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@ContainerModel@@UEAAXH@Z
     * @hash   -2023913692
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @hash   564126194
     */
    virtual ~ContainerModel();
    /**
     * @vftbl  2
     * @symbol ?postInit@ContainerModel@@UEAAXXZ
     * @hash   1604018383
     */
    virtual void postInit();
    /**
     * @vftbl  3
     * @symbol ?releaseResources@ContainerModel@@UEAAXXZ
     * @hash   508032445
     */
    virtual void releaseResources();
    /**
     * @vftbl  4
     * @symbol ?getContainerSize@ContainerModel@@UEBAHXZ
     * @hash   -394726897
     */
    virtual int getContainerSize() const;
    /**
     * @vftbl  5
     * @symbol ?getFilteredContainerSize@ContainerModel@@UEBAHXZ
     * @hash   669288520
     */
    virtual int getFilteredContainerSize() const;
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?getContainerWeakRef@ContainerModel@@UEBA?AVContainerWeakRef@@XZ
     * @hash   -436136963
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  8
     * @symbol ?getItemStack@ContainerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   1442830774
     */
    virtual class ItemStack const & getItemStack(int) const;
    /**
     * @vftbl  9
     * @symbol ?getItems@ContainerModel@@UEBAAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   712654595
     */
    virtual std::vector<class ItemStack> const & getItems() const;
    /**
     * @vftbl  10
     * @symbol ?getItemInstance@ContainerModel@@UEBAAEBVItemInstance@@H@Z
     * @hash   601411682
     */
    virtual class ItemInstance const & getItemInstance(int) const;
    /**
     * @vftbl  11
     * @symbol ?getItemStackBase@ContainerModel@@UEBAAEBVItemStackBase@@H@Z
     * @hash   -1567776330
     */
    virtual class ItemStackBase const & getItemStackBase(int) const;
    /**
     * @vftbl  12
     * @hash   -330249563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol ?setItem@ContainerModel@@UEAAXHAEBVItemStack@@@Z
     * @hash   216488473
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl  14
     * @symbol ?isValid@ContainerModel@@UEAA_NXZ
     * @hash   1531948243
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @hash   -327479000
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol ?getItemExpandStatus@ContainerModel@@UEBA?AW4ContainerExpandStatus@@H@Z
     * @hash   -2123563593
     */
    virtual enum class ContainerExpandStatus getItemExpandStatus(int) const;
    /**
     * @vftbl  18
     * @symbol ?getItemGroupName@ContainerModel@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -389832244
     */
    virtual std::string const & getItemGroupName(int) const;
    /**
     * @vftbl  19
     * @hash   -373756916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol ?_getContainer@ContainerModel@@MEBAPEAVContainer@@XZ
     * @hash   -1523938882
     */
    virtual class Container * _getContainer() const;
    /**
     * @vftbl  21
     * @symbol ?_getContainerOffset@ContainerModel@@MEBAHXZ
     * @hash   -1201523207
     */
    virtual int _getContainerOffset() const;
    /**
     * @vftbl  22
     * @symbol ?_onItemChanged@ContainerModel@@MEAAXHAEBVItemStack@@0@Z
     * @hash   -1321923164
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMODEL
    /**
     * @symbol ?isExpanableItemFiltered@ContainerModel@@UEBA_NH@Z
     * @hash   -807842535
     */
    MCVAPI bool isExpanableItemFiltered(int) const;
    /**
     * @symbol ?isItemFiltered@ContainerModel@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   -1095358371
     */
    MCVAPI bool isItemFiltered(class ItemStackBase const &) const;
    /**
     * @symbol ?isItemInstanceBased@ContainerModel@@UEBA_NXZ
     * @hash   -1822257199
     */
    MCVAPI bool isItemInstanceBased() const;
    /**
     * @symbol ?switchItemExpando@ContainerModel@@UEAAXH@Z
     * @hash   -582238878
     */
    MCVAPI void switchItemExpando(int);
    /**
     * @symbol ?tick@ContainerModel@@UEAAXH@Z
     * @hash   1384278579
     */
    MCVAPI void tick(int);
#endif
    /**
     * @symbol ??0ContainerModel@@QEAA@W4ContainerEnumName@@HW4ContainerCategory@@_N@Z
     * @hash   -1270749594
     */
    MCAPI ContainerModel(enum class ContainerEnumName, int, enum class ContainerCategory, bool);
    /**
     * @symbol ?_useLegacyTransactions@ContainerModel@@QEBA_NXZ
     * @hash   -2027431542
     */
    MCAPI bool _useLegacyTransactions() const;
    /**
     * @symbol ?getContainerEnumName@ContainerModel@@QEBA?AW4ContainerEnumName@@XZ
     * @hash   -136886512
     */
    MCAPI enum class ContainerEnumName getContainerEnumName() const;
    /**
     * @symbol ?getContainerSlot@ContainerModel@@QEBAHH@Z
     * @hash   -652369279
     */
    MCAPI int getContainerSlot(int) const;
    /**
     * @symbol ?getContainerStringName@ContainerModel@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2117874466
     */
    MCAPI std::string const & getContainerStringName() const;
    /**
     * @symbol ?getModelSlot@ContainerModel@@QEBAHH@Z
     * @hash   -36122175
     */
    MCAPI int getModelSlot(int) const;
    /**
     * @symbol ?initContainerRuntimeId@ContainerModel@@QEAAXXZ
     * @hash   -349847739
     */
    MCAPI void initContainerRuntimeId();
    /**
     * @symbol ?isContainerSlotInRange@ContainerModel@@QEBA_NH@Z
     * @hash   -987365515
     */
    MCAPI bool isContainerSlotInRange(int) const;
    /**
     * @symbol ?isIntermediaryCategory@ContainerModel@@QEBA_NXZ
     * @hash   -1558625268
     */
    MCAPI bool isIntermediaryCategory() const;
    /**
     * @symbol ?networkUpdateItem@ContainerModel@@QEAAXHAEBVItemStack@@0@Z
     * @hash   1208763909
     */
    MCAPI void networkUpdateItem(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol ?registerOnContainerChangedCallback@ContainerModel@@QEAAXV?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
     * @hash   790999372
     */
    MCAPI void registerOnContainerChangedCallback(class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @symbol ?registerPlayerNotificationCallback@ContainerModel@@QEAAXV?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
     * @hash   -1353662132
     */
    MCAPI void registerPlayerNotificationCallback(class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @symbol ?serverInitItemStackIds@ContainerModel@@QEAAXXZ
     * @hash   686344581
     */
    MCAPI void serverInitItemStackIds();
    /**
     * @symbol ?setClientUIContainer@ContainerModel@@QEAAXPEAVSparseContainerClient@@@Z
     * @hash   1465471225
     */
    MCAPI void setClientUIContainer(class SparseContainerClient *);
    /**
     * @symbol ?setItemSource@ContainerModel@@QEAAXHAEBUSlotData@@@Z
     * @hash   -1596101315
     */
    MCAPI void setItemSource(int, struct SlotData const &);

//protected:
    /**
     * @symbol ?_init@ContainerModel@@IEAAXXZ
     * @hash   742903386
     */
    MCAPI void _init();
    /**
     * @symbol ?_notifyPlayer@ContainerModel@@IEAAXHAEBVItemStack@@0@Z
     * @hash   1789659163
     */
    MCAPI void _notifyPlayer(int, class ItemStack const &, class ItemStack const &);

//private:
    /**
     * @symbol ?_onClientUIItemNetworkChanged@ContainerModel@@AEAAXHAEBVItemStack@@0@Z
     * @hash   -7497931
     */
    MCAPI void _onClientUIItemNetworkChanged(int, class ItemStack const &, class ItemStack const &);

protected:

private:

};