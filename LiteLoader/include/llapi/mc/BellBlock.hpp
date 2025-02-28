/**
 * @file  BellBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BellBlock.
 *
 */
class BellBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BELLBLOCK
public:
    class BellBlock& operator=(class BellBlock const &) = delete;
    BellBlock(class BellBlock const &) = delete;
    BellBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BellBlock();
    /**
     * @hash   -442241558
     * @vftbl  10
     * @symbol  ?getAABB\@BellBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   -1991680939
     * @vftbl  15
     * @symbol  ?onProjectileHit\@BellBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   1717130161
     * @vftbl  25
     * @symbol  ?canConnect\@BellBlock\@\@UEBA_NAEBVBlock\@\@E0\@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
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
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol  __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol  __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol  __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol  __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol  __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol  __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol  __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol  __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol  __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol  __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   1206515838
     * @vftbl  62
     * @symbol  ?canContainLiquid\@BellBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   650120163
     * @vftbl  64
     * @symbol  ?shouldConnectToRedstone\@BellBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @hash   443351221
     * @vftbl  76
     * @symbol  ?movedByPiston\@BellBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1374445826
     * @vftbl  79
     * @symbol  ?setupRedstoneComponent\@BellBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @hash   -2124540052
     * @vftbl  99
     * @symbol  ?neighborChanged\@BellBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @hash   1683043593
     * @vftbl  106
     * @symbol  ?getPlacementBlock\@BellBlock\@\@UEBAAEBVBlock\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   1156265140
     * @vftbl  113
     * @symbol  ?entityInside\@BellBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  123
     * @symbol  __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @symbol  __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @symbol  __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @hash   -641919340
     * @vftbl  143
     * @symbol  ?getVisualShape\@BellBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol  __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl  166
     * @symbol  __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @symbol  __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @hash   -1161053446
     * @vftbl  168
     * @symbol  ?onPlace\@BellBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -390531088
     * @vftbl  171
     * @symbol  ?tick\@BellBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @hash   -966014417
     * @vftbl  177
     * @symbol  ?use\@BellBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1633407926
     * @vftbl  178
     * @symbol  ?canSurvive\@BellBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @hash   -1281860847
     * @vftbl  189
     * @symbol  ?getSilkTouchItemInstance\@BellBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BELLBLOCK
    /**
     * @hash   896494451
     * @symbol  ?isInteractiveBlock\@BellBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   -190767416
     * @symbol  ??0BellBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI BellBlock(std::string const &, int);
    /**
     * @hash   -1694563641
     * @symbol  ?hasValidAttachment\@BellBlock\@\@QEBA_NAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool hasValidAttachment(class Block const &, class BlockSource &, class BlockPos const &) const;

//private:
    /**
     * @hash   2023194402
     * @symbol  ?_determineAttachment\@BellBlock\@\@AEBAAEBVBlock\@\@AEAVActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI class Block const & _determineAttachment(class Actor &, class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   381745000
     * @symbol  ?_getItemId\@BellBlock\@\@AEBAFAEBVBlockSource\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI short _getItemId(class BlockSource const &, class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   156009994
     * @symbol  ?_getShape\@BellBlock\@\@AEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    MCAPI class AABB const & _getShape(class Block const &, class AABB &) const;
    /**
     * @hash   1538796493
     * @symbol  ?_sendBellUsedEventToClient\@BellBlock\@\@AEBAXAEBVBlockSource\@\@AEBVActor\@\@\@Z
     */
    MCAPI void _sendBellUsedEventToClient(class BlockSource const &, class Actor const &) const;

private:

};