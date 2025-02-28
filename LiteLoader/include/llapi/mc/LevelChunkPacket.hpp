/**
 * @file  LevelChunkPacket.hpp
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
 * @brief MC class LevelChunkPacket.
 *
 */
class LevelChunkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKPACKET
public:
    class LevelChunkPacket& operator=(class LevelChunkPacket const &) = delete;
    LevelChunkPacket(class LevelChunkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelChunkPacket();
    /**
     * @hash   -1438419987
     * @vftbl  1
     * @symbol  ?getId\@LevelChunkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   25797274
     * @vftbl  2
     * @symbol  ?getName\@LevelChunkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   514669645
     * @vftbl  3
     * @symbol  ?write\@LevelChunkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   605115837
     * @vftbl  6
     * @symbol  ?_read\@LevelChunkPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   146966349
     * @symbol  ??0LevelChunkPacket\@\@QEAA\@XZ
     */
    MCAPI LevelChunkPacket();
    /**
     * @hash   -1451019377
     * @symbol  ?pushSubChunkMetadata\@LevelChunkPacket\@\@QEAAX_K\@Z
     */
    MCAPI void pushSubChunkMetadata(unsigned __int64);

};