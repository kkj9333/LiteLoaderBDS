/**
 * @file  MultiplayerSettingsPacket.hpp
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
 * @brief MC class MultiplayerSettingsPacket.
 *
 */
class MultiplayerSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLAYERSETTINGSPACKET
public:
    class MultiplayerSettingsPacket& operator=(class MultiplayerSettingsPacket const &) = delete;
    MultiplayerSettingsPacket(class MultiplayerSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MultiplayerSettingsPacket();
    /**
     * @hash   1376038985
     * @vftbl  1
     * @symbol  ?getId\@MultiplayerSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1678412534
     * @vftbl  2
     * @symbol  ?getName\@MultiplayerSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1012469007
     * @vftbl  3
     * @symbol  ?write\@MultiplayerSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2052756031
     * @vftbl  6
     * @symbol  ?_read\@MultiplayerSettingsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1687906305
     * @symbol  ??0MultiplayerSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI MultiplayerSettingsPacket();
    /**
     * @hash   -646143636
     * @symbol  ??0MultiplayerSettingsPacket\@\@QEAA\@W4MultiplayerSettingsPacketType\@\@\@Z
     */
    MCAPI MultiplayerSettingsPacket(enum class MultiplayerSettingsPacketType);

};