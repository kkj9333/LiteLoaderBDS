/**
 * @file  EmotePacket.hpp
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
 * @brief MC class EmotePacket.
 *
 */
class EmotePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMOTEPACKET
public:
    class EmotePacket& operator=(class EmotePacket const &) = delete;
    EmotePacket(class EmotePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   690688366
     */
    virtual ~EmotePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@EmotePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   992845470
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@EmotePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   191568203
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@EmotePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1196177244
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@EmotePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   982075212
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0EmotePacket@@QEAA@XZ
     * @hash   -1379195316
     */
    MCAPI EmotePacket();
    /**
     * @symbol ?isServerSide@EmotePacket@@QEBA_NXZ
     * @hash   -632225952
     */
    MCAPI bool isServerSide() const;
    /**
     * @symbol ?setServerSide@EmotePacket@@QEAAXXZ
     * @hash   -1355097571
     */
    MCAPI void setServerSide();

};