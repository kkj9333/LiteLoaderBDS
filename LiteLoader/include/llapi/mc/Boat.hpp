/**
 * @file  Boat.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Boat.
 *
 */
class Boat : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOAT
public:
    class Boat& operator=(class Boat const &) = delete;
    Boat(class Boat const &) = delete;
    Boat() = delete;
#endif

public:
    /**
     * @hash   -1923960275
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -670529224
     * @vftbl  11
     * @symbol  ?reloadHardcodedClient\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Boat();
    /**
     * @hash   227818939
     * @vftbl  19
     * @symbol  ?remove\@Boat\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   765715163
     * @vftbl  49
     * @symbol  ?normalTick\@Boat\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  56
     * @symbol  ?getExitTip\@Boat\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4InputMode\@\@W4NewInteractionModel\@\@\@Z
     */
    virtual std::string getExitTip(std::string const &, enum class InputMode, enum class NewInteractionModel) const;
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   -98008960
     * @vftbl  80
     * @symbol  ?getShadowHeightOffs\@Boat\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   1105154614
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Boat\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   1187420533
     * @vftbl  91
     * @symbol  ?onAboveBubbleColumn\@Boat\@\@UEAAX_N\@Z
     */
    virtual void onAboveBubbleColumn(bool);
    /**
     * @hash   -183822130
     * @vftbl  96
     * @symbol  ?isPickable\@Boat\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -522673266
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@Boat\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   1641682951
     * @vftbl  181
     * @symbol  ?getControllingPlayer\@Boat\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   -655348844
     * @vftbl  189
     * @symbol  ?canAddPassenger\@Boat\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool canAddPassenger(class Actor &) const;
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @hash   1522884881
     * @vftbl  222
     * @symbol  ?getPassengerYRotation\@Boat\@\@UEBAMAEBVActor\@\@\@Z
     */
    virtual float getPassengerYRotation(class Actor const &) const;
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -555167591
     * @vftbl  263
     * @symbol  ?_hurt\@Boat\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -1154982446
     * @vftbl  278
     * @symbol  ?destroy\@Boat\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void destroy(class Actor *);
    /**
     * @hash   926160060
     * @symbol  ??0Boat\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Boat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   952114819
     * @symbol  ?getRowingTime\@Boat\@\@QEBAMW4Side\@\@\@Z
     */
    MCAPI float getRowingTime(enum class Side) const;
    /**
     * @hash   836415111
     * @symbol  ?getWoodID\@Boat\@\@QEBAEXZ
     */
    MCAPI unsigned char getWoodID() const;
    /**
     * @hash   -1071018027
     * @symbol  ?postNormalTick\@Boat\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   333133020
     * @symbol  ?setPaddleState\@Boat\@\@QEAA_NW4Side\@\@_N\@Z
     */
    MCAPI bool setPaddleState(enum class Side, bool);
    /**
     * @hash   217803031
     * @symbol  ?setRowingTime\@Boat\@\@QEAAXW4Side\@\@M\@Z
     */
    MCAPI void setRowingTime(enum class Side, float);

//private:
    /**
     * @hash   -1391286710
     * @symbol  ?_control\@Boat\@\@AEAAXXZ
     */
    MCAPI void _control();
    /**
     * @hash   -1375527524
     * @symbol  ?_move\@Boat\@\@AEAAXXZ
     */
    MCAPI void _move();
    /**
     * @hash   397379093
     * @symbol  ?_paddleControl\@Boat\@\@AEAAXW4Side\@\@AEAVVec3\@\@1\@Z
     */
    MCAPI void _paddleControl(enum class Side, class Vec3 &, class Vec3 &);

private:

};