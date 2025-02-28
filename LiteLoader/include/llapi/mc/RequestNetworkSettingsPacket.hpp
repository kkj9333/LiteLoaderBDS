/**
 * @file  RequestNetworkSettingsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestNetworkSettingsPacket.
 *
 */
class RequestNetworkSettingsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTNETWORKSETTINGSPACKET
public:
    class RequestNetworkSettingsPacket& operator=(class RequestNetworkSettingsPacket const &) = delete;
    RequestNetworkSettingsPacket(class RequestNetworkSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RequestNetworkSettingsPacket();
    /**
     * @hash   -1773925660
     * @vftbl  1
     * @symbol  ?getId\@RequestNetworkSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1090099601
     * @vftbl  2
     * @symbol  ?getName\@RequestNetworkSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1967325354
     * @vftbl  3
     * @symbol  ?write\@RequestNetworkSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   389664630
     * @vftbl  6
     * @symbol  ?_read\@RequestNetworkSettingsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   731856294
     * @symbol  ??0RequestNetworkSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI RequestNetworkSettingsPacket();

};