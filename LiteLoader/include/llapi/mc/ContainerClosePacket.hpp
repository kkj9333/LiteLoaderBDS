/**
 * @file  ContainerClosePacket.hpp
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
 * @brief MC class ContainerClosePacket.
 *
 */
class ContainerClosePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCLOSEPACKET
public:
    class ContainerClosePacket& operator=(class ContainerClosePacket const &) = delete;
    ContainerClosePacket(class ContainerClosePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ContainerClosePacket();
    /**
     * @hash   -168378161
     * @vftbl  1
     * @symbol  ?getId\@ContainerClosePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1050619772
     * @vftbl  2
     * @symbol  ?getName\@ContainerClosePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1899133579
     * @vftbl  3
     * @symbol  ?write\@ContainerClosePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1926812373
     * @vftbl  6
     * @symbol  ?_read\@ContainerClosePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   167143643
     * @symbol  ??0ContainerClosePacket\@\@QEAA\@XZ
     */
    MCAPI ContainerClosePacket();
    /**
     * @hash   -1488071947
     * @symbol  ??0ContainerClosePacket\@\@QEAA\@W4ContainerID\@\@_N\@Z
     */
    MCAPI ContainerClosePacket(enum class ContainerID, bool);

};