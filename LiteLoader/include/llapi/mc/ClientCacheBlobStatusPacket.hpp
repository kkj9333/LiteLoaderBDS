/**
 * @file  ClientCacheBlobStatusPacket.hpp
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
 * @brief MC class ClientCacheBlobStatusPacket.
 *
 */
class ClientCacheBlobStatusPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTCACHEBLOBSTATUSPACKET
public:
    class ClientCacheBlobStatusPacket& operator=(class ClientCacheBlobStatusPacket const &) = delete;
    ClientCacheBlobStatusPacket(class ClientCacheBlobStatusPacket const &) = delete;
    ClientCacheBlobStatusPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ClientCacheBlobStatusPacket();
    /**
     * @hash   -780548304
     * @vftbl  1
     * @symbol  ?getId\@ClientCacheBlobStatusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   201228765
     * @vftbl  2
     * @symbol  ?getName\@ClientCacheBlobStatusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1734607018
     * @vftbl  3
     * @symbol  ?write\@ClientCacheBlobStatusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -850055222
     * @vftbl  6
     * @symbol  ?_read\@ClientCacheBlobStatusPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};