/**
 * @file  ShowProfilePacket.hpp
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
 * @brief MC class ShowProfilePacket.
 *
 */
class ShowProfilePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOWPROFILEPACKET
public:
    class ShowProfilePacket& operator=(class ShowProfilePacket const &) = delete;
    ShowProfilePacket(class ShowProfilePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShowProfilePacket();
    /**
     * @hash   1411498074
     * @vftbl  1
     * @symbol  ?getId\@ShowProfilePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1016186105
     * @vftbl  2
     * @symbol  ?getName\@ShowProfilePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2025604704
     * @vftbl  3
     * @symbol  ?write\@ShowProfilePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1204033232
     * @vftbl  6
     * @symbol  ?_read\@ShowProfilePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -2027346432
     * @symbol  ??0ShowProfilePacket\@\@QEAA\@XZ
     */
    MCAPI ShowProfilePacket();

};