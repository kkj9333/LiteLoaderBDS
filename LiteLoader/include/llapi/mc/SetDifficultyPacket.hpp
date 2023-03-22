/**
 * @file  SetDifficultyPacket.hpp
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
 * @brief MC class SetDifficultyPacket.
 *
 */
class SetDifficultyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDIFFICULTYPACKET
public:
    class SetDifficultyPacket& operator=(class SetDifficultyPacket const &) = delete;
    SetDifficultyPacket(class SetDifficultyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetDifficultyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@SetDifficultyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetDifficultyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@SetDifficultyPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETDIFFICULTYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetDifficultyPacket();
#endif
    /**
     * @symbol ??0SetDifficultyPacket\@\@QEAA\@W4Difficulty\@\@\@Z
     */
    MCAPI SetDifficultyPacket(enum class Difficulty);
    /**
     * @symbol ??0SetDifficultyPacket\@\@QEAA\@XZ
     */
    MCAPI SetDifficultyPacket();
    /**
     * @symbol ?getDifficulty\@SetDifficultyPacket\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getDifficulty() const;

};
