/**
 * @file  WarpedFungusOnAStickItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WarpedFungusOnAStickItem.
 *
 */
class WarpedFungusOnAStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARPEDFUNGUSONASTICKITEM
public:
    class WarpedFungusOnAStickItem& operator=(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1574803976
     */
    virtual ~WarpedFungusOnAStickItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  49
     * @symbol ?isHandEquipped@WarpedFungusOnAStickItem@@UEBA_NXZ
     * @hash   1007528786
     */
    virtual bool isHandEquipped() const;
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  59
     * @symbol ?requiresInteract@WarpedFungusOnAStickItem@@UEBA_NXZ
     * @hash   -417085154
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl  62
     * @symbol ?getEnchantSlot@WarpedFungusOnAStickItem@@UEBAHXZ
     * @hash   -1761518306
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantValue@WarpedFungusOnAStickItem@@UEBAHXZ
     * @hash   1907885515
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -158474657
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  93
     * @symbol ?mineBlock@WarpedFungusOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   546582717
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @symbol ??0WarpedFungusOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   2139871372
     */
    MCAPI WarpedFungusOnAStickItem(std::string const &, int);

};