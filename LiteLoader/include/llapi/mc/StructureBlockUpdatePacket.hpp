/**
 * @file  StructureBlockUpdatePacket.hpp
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
 * @brief MC class StructureBlockUpdatePacket.
 *
 */
class StructureBlockUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKUPDATEPACKET
public:
    class StructureBlockUpdatePacket& operator=(class StructureBlockUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1793839371
     */
    virtual ~StructureBlockUpdatePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@StructureBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1959316957
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@StructureBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1748459312
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@StructureBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1198509447
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@StructureBlockUpdatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   794230615
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0StructureBlockUpdatePacket@@QEAA@XZ
     * @hash   -847684553
     */
    MCAPI StructureBlockUpdatePacket();
    /**
     * @symbol ??0StructureBlockUpdatePacket@@QEAA@AEBV0@@Z
     * @hash   -1100763471
     */
    MCAPI StructureBlockUpdatePacket(class StructureBlockUpdatePacket const &);

};