/**
 * @file  CodeBuilderSourcePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CodeBuilderSourcePacket.
 *
 */
class CodeBuilderSourcePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERSOURCEPACKET
public:
    class CodeBuilderSourcePacket& operator=(class CodeBuilderSourcePacket const &) = delete;
    CodeBuilderSourcePacket(class CodeBuilderSourcePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CodeBuilderSourcePacket();
    /**
     * @hash   -409225971
     * @vftbl  1
     * @symbol  ?getId\@CodeBuilderSourcePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -828928070
     * @vftbl  2
     * @symbol  ?getName\@CodeBuilderSourcePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -676022547
     * @vftbl  3
     * @symbol  ?write\@CodeBuilderSourcePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1572351805
     * @vftbl  6
     * @symbol  ?_read\@CodeBuilderSourcePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -242567747
     * @symbol  ??0CodeBuilderSourcePacket\@\@QEAA\@XZ
     */
    MCAPI CodeBuilderSourcePacket();

};