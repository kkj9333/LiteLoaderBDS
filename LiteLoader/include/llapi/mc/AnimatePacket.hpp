/**
 * @file  AnimatePacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimatePacket.
 *
 */
class AnimatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    enum class Action
    {
        NoAction = 0,
        Swing = 1,
        WakeUp = 3,
        CriticalHit = 4,
        // MagicCriticalHit=5,
        RowRight = 128,
        RowLeft = 129,
    };
    ActorRuntimeID mRuntimeId;
    Action mAction;
    float mData;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEPACKET
public:
    class AnimatePacket& operator=(class AnimatePacket const &) = delete;
    AnimatePacket(class AnimatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -492014825
     */
    virtual ~AnimatePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AnimatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   277629717
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AnimatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1201625662
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@AnimatePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -459733403
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@AnimatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   489016565
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0AnimatePacket@@QEAA@XZ
     * @hash   -1653923963
     */
    MCAPI AnimatePacket();
    /**
     * @symbol ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@M@Z
     * @hash   1492559697
     */
    MCAPI AnimatePacket(enum class AnimatePacket::Action, class ActorRuntimeID, float);
    /**
     * @symbol ??0AnimatePacket@@QEAA@W4Action@0@VActorRuntimeID@@@Z
     * @hash   1269741264
     */
    MCAPI AnimatePacket(enum class AnimatePacket::Action, class ActorRuntimeID);
    /**
     * @symbol ??0AnimatePacket@@QEAA@W4Action@0@AEAVActor@@@Z
     * @hash   1783084586
     */
    MCAPI AnimatePacket(enum class AnimatePacket::Action, class Actor &);

};