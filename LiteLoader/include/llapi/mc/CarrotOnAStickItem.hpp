/**
 * @file  CarrotOnAStickItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CarrotOnAStickItem.
 *
 */
class CarrotOnAStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARROTONASTICKITEM
public:
    class CarrotOnAStickItem& operator=(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CarrotOnAStickItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   298056444
     * @vftbl  49
     * @symbol  ?isHandEquipped\@CarrotOnAStickItem\@\@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @hash   -1667041080
     * @vftbl  59
     * @symbol  ?requiresInteract\@CarrotOnAStickItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   204920568
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@CarrotOnAStickItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   1936571893
     * @vftbl  63
     * @symbol  ?getEnchantValue\@CarrotOnAStickItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @hash   58172930
     * @vftbl  89
     * @symbol  ?hurtActor\@CarrotOnAStickItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1095743719
     * @vftbl  93
     * @symbol  ?mineBlock\@CarrotOnAStickItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -1660948654
     * @symbol  ??0CarrotOnAStickItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CarrotOnAStickItem(std::string const &, int);

};