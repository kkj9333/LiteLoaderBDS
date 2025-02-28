/**
 * @file  PlayerSkinPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerSkinPacket.
 *
 */
class PlayerSkinPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSKINPACKET
public:
    class PlayerSkinPacket& operator=(class PlayerSkinPacket const &) = delete;
    PlayerSkinPacket(class PlayerSkinPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerSkinPacket();
    /**
     * @hash   1889998760
     * @vftbl  1
     * @symbol  ?getId\@PlayerSkinPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   64104021
     * @vftbl  2
     * @symbol  ?getName\@PlayerSkinPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1417701950
     * @vftbl  3
     * @symbol  ?write\@PlayerSkinPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -979002313
     * @vftbl  4
     * @symbol  ?readExtended\@PlayerSkinPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   -775396318
     * @vftbl  6
     * @symbol  ?_read\@PlayerSkinPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1381772050
     * @symbol  ??0PlayerSkinPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerSkinPacket();

};