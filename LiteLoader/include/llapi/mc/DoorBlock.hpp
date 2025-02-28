/**
 * @file  DoorBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Direction.hpp"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoorBlock.
 *
 */
class DoorBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORBLOCK
public:
    class DoorBlock& operator=(class DoorBlock const &) = delete;
    DoorBlock(class DoorBlock const &) = delete;
    DoorBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DoorBlock();
    /**
     * @hash   -510430965
     * @vftbl  3
     * @symbol  ?getNextBlockPermutation\@DoorBlock\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /**
     * @hash   -1011577457
     * @vftbl  10
     * @symbol  ?getAABB\@DoorBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   1583791719
     * @vftbl  14
     * @symbol  ?getLiquidClipVolume\@DoorBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVAABB\@\@\@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
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
     * @hash   -797233123
     * @vftbl  56
     * @symbol  ?canFillAtPos\@DoorBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -866113902
     * @vftbl  58
     * @symbol  ?onFillBlock\@DoorBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @hash   -26241357
     * @vftbl  69
     * @symbol  ?checkIsPathable\@DoorBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1650276122
     * @vftbl  73
     * @symbol  ?onRedstoneUpdate\@DoorBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @hash   -256061063
     * @vftbl  79
     * @symbol  ?setupRedstoneComponent\@DoorBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @hash   -506116239
     * @vftbl  92
     * @symbol  ?mayPlace\@DoorBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -23812159
     * @vftbl  99
     * @symbol  ?neighborChanged\@DoorBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1641814884
     * @vftbl  100
     * @symbol  ?getSecondPart\@DoorBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   -519810757
     * @vftbl  103
     * @symbol  ?asItemInstance\@DoorBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  113
     * @symbol  ?entityInside\@DoorBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
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
     * @hash   1263712945
     * @vftbl  142
     * @symbol  ?getVisualShapeInWorld\@DoorBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   2004862863
     * @vftbl  146
     * @symbol  ?getVariant\@DoorBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
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
     * @hash   -2074703931
     * @vftbl  168
     * @symbol  ?onPlace\@DoorBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -894906939
     * @vftbl  171
     * @symbol  ?tick\@DoorBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @hash   -1175911148
     * @vftbl  177
     * @symbol  ?use\@DoorBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -90796639
     * @vftbl  178
     * @symbol  ?canSurvive\@DoorBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @hash   -387851923
     * @vftbl  187
     * @symbol  ?getResourceItem\@DoorBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1044079701
     * @vftbl  188
     * @symbol  ?getResourceCount\@DoorBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1073042070
     * @vftbl  189
     * @symbol  ?getSilkTouchItemInstance\@DoorBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOORBLOCK
    /**
     * @hash   341734824
     * @symbol  ?canBeSilkTouched\@DoorBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   1793689246
     * @symbol  ?isDoorBlock\@DoorBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isDoorBlock() const;
    /**
     * @hash   1824988926
     * @symbol  ?isInteractiveBlock\@DoorBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   -1568061906
     * @symbol  ??0DoorBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@W4DoorType\@0\@\@Z
     */
    MCAPI DoorBlock(std::string const &, int, class Material const &, enum class DoorBlock::DoorType);
    /**
     * @hash   -1992990858
     * @symbol  ?getBlockedDirection\@DoorBlock\@\@QEBA?AW4Type\@Direction\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI enum class Direction::Type getBlockedDirection(class IConstBlockSource const &, class BlockPos const &) const;
    /**
     * @hash   -15701506
     * @symbol  ?getDir\@DoorBlock\@\@QEBAHAEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int getDir(class IConstBlockSource const &, class BlockPos const &) const;
    /**
     * @hash   889685200
     * @symbol  ?getDoorBlocks\@DoorBlock\@\@QEBAXAEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAPEBVBlock\@\@2\@Z
     */
    MCAPI void getDoorBlocks(class IConstBlockSource const &, class BlockPos const &, class Block const *&, class Block const *&) const;
    /**
     * @hash   -27389132
     * @symbol  ?getDoorThickness\@DoorBlock\@\@QEBAMXZ
     */
    MCAPI float getDoorThickness() const;
    /**
     * @hash   1651274714
     * @symbol  ?isToggled\@DoorBlock\@\@QEBA_NAEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isToggled(class IConstBlockSource const &, class BlockPos const &) const;
    /**
     * @hash   26117016
     * @symbol  ?setToggled\@DoorBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@_N\@Z
     */
    MCAPI void setToggled(class BlockSource &, class BlockPos const &, class Actor *, bool) const;
    /**
     * @hash   -579725910
     * @symbol  ?getDoorFacing\@DoorBlock\@\@SAEH\@Z
     */
    MCAPI static unsigned char getDoorFacing(int);

};