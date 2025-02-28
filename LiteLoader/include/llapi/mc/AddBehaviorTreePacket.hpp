/**
 * @file  AddBehaviorTreePacket.hpp
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
 * @brief MC class AddBehaviorTreePacket.
 *
 */
class AddBehaviorTreePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDBEHAVIORTREEPACKET
public:
    class AddBehaviorTreePacket& operator=(class AddBehaviorTreePacket const &) = delete;
    AddBehaviorTreePacket(class AddBehaviorTreePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AddBehaviorTreePacket();
    /**
     * @hash   1080216581
     * @vftbl  1
     * @symbol  ?getId\@AddBehaviorTreePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -581228878
     * @vftbl  2
     * @symbol  ?getName\@AddBehaviorTreePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   482444773
     * @vftbl  3
     * @symbol  ?write\@AddBehaviorTreePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   529608789
     * @vftbl  6
     * @symbol  ?_read\@AddBehaviorTreePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1484001525
     * @symbol  ??0AddBehaviorTreePacket\@\@QEAA\@XZ
     */
    MCAPI AddBehaviorTreePacket();

};