/**
 * @file  PotatoBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CropBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PotatoBlock.
 *
 */
class PotatoBlock : public CropBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTATOBLOCK
public:
    class PotatoBlock& operator=(class PotatoBlock const &) = delete;
    PotatoBlock(class PotatoBlock const &) = delete;
    PotatoBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1336883468
     */
    virtual ~PotatoBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@PotatoBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -894493338
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -295155765
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -274838303
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -272991261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -272067740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -271144219
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -269297177
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -268373656
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -267450135
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -266526614
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -245285631
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -244362110
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -242515068
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -241591547
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -240668026
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -239744505
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -238820984
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -237897463
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -188027329
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  103
     * @symbol ?spawnResources@PotatoBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     * @hash   1638157832
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &, std::vector<class Item const *> *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1391306114
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1393153156
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1394076677
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  146
     * @symbol ?getVariant@PotatoBlock@@UEBAHAEBVBlock@@@Z
     * @hash   150549062
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1479964130
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  167
     * @hash   1459544802
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1460468323
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1461391844
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  194
     * @symbol ?getBaseSeed@PotatoBlock@@UEBA?BVItemInstance@@XZ
     * @hash   1386942726
     */
    virtual class ItemInstance const getBaseSeed() const;
    /**
     * @vftbl  195
     * @symbol ?getBaseCrop@PotatoBlock@@UEBA?BVItemInstance@@XZ
     * @hash   594820549
     */
    virtual class ItemInstance const getBaseCrop() const;
    /**
     * @vftbl  197
     * @symbol ?getCropNum@PotatoBlock@@UEBAHAEAVRandomize@@HH@Z
     * @hash   -737737644
     */
    virtual int getCropNum(class Randomize &, int, int) const;
    /**
     * @symbol ??0PotatoBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1013272300
     */
    MCAPI PotatoBlock(std::string const &, int);

};