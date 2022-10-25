/**
 * @file  SubChunkPacket.hpp
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
 * @brief MC class SubChunkPacket.
 *
 */
class SubChunkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    struct SubChunkPacketData;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET
public:
    class SubChunkPacket& operator=(class SubChunkPacket const &) = delete;
    SubChunkPacket(class SubChunkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   423256895
     */
    virtual ~SubChunkPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SubChunkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -474924279
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SubChunkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   672098742
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SubChunkPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1821799473
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SubChunkPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   959750545
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SubChunkPacket@@QEAA@XZ
     * @hash   -1675794223
     */
    MCAPI SubChunkPacket();
    /**
     * @symbol ??0SubChunkPacket@@QEAA@AEBV?$AutomaticID@VDimension@@H@@AEBVSubChunkPos@@_N@Z
     * @hash   -62046344
     */
    MCAPI SubChunkPacket(class AutomaticID<class Dimension, int> const &, class SubChunkPos const &, bool);

};