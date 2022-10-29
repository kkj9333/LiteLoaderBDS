/**
 * @file  PassengerJumpPacket.hpp
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
 * @brief MC class PassengerJumpPacket.
 *
 */
class PassengerJumpPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERJUMPPACKET
public:
    class PassengerJumpPacket& operator=(class PassengerJumpPacket const &) = delete;
    PassengerJumpPacket(class PassengerJumpPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -909155874
     */
    virtual ~PassengerJumpPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PassengerJumpPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -2004499890
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PassengerJumpPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -146707509
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PassengerJumpPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1419437916
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PassengerJumpPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1352118508
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PassengerJumpPacket@@QEAA@XZ
     * @hash   1593778268
     */
    MCAPI PassengerJumpPacket();
    /**
     * @symbol ??0PassengerJumpPacket@@QEAA@H@Z
     * @hash   -1386427601
     */
    MCAPI PassengerJumpPacket(int);

};