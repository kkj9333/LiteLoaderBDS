/**
 * @file  SubClientLoginPacket.hpp
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
 * @brief MC class SubClientLoginPacket.
 *
 */
class SubClientLoginPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCLIENTLOGINPACKET
public:
    class SubClientLoginPacket& operator=(class SubClientLoginPacket const &) = delete;
    SubClientLoginPacket(class SubClientLoginPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SubClientLoginPacket();
    /**
     * @hash   544346888
     * @vftbl  1
     * @symbol  ?getId\@SubClientLoginPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -2050481739
     * @vftbl  2
     * @symbol  ?getName\@SubClientLoginPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1740158222
     * @vftbl  3
     * @symbol  ?write\@SubClientLoginPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1139243899
     * @vftbl  5
     * @symbol  ?disallowBatching\@SubClientLoginPacket\@\@UEBA_NXZ
     */
    virtual bool disallowBatching() const;
    /**
     * @hash   -1700587934
     * @vftbl  6
     * @symbol  ?_read\@SubClientLoginPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -257670622
     * @symbol  ??0SubClientLoginPacket\@\@QEAA\@XZ
     */
    MCAPI SubClientLoginPacket();

};