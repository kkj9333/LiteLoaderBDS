/**
 * @file  EditorNetworkPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EditorNetworkPacket.
 *
 */
class EditorNetworkPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORNETWORKPACKET
public:
    class EditorNetworkPacket& operator=(class EditorNetworkPacket const &) = delete;
    EditorNetworkPacket(class EditorNetworkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EditorNetworkPacket();
    /**
     * @hash   -1380244235
     * @vftbl  1
     * @symbol  ?getId\@EditorNetworkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -994377822
     * @vftbl  2
     * @symbol  ?getName\@EditorNetworkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1660317317
     * @vftbl  3
     * @symbol  ?write\@EditorNetworkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1732055787
     * @vftbl  6
     * @symbol  ?_read\@EditorNetworkPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   266043285
     * @symbol  ??0EditorNetworkPacket\@\@QEAA\@XZ
     */
    MCAPI EditorNetworkPacket();

};