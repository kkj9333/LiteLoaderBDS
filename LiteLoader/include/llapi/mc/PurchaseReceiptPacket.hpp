/**
 * @file  PurchaseReceiptPacket.hpp
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
 * @brief MC class PurchaseReceiptPacket.
 *
 */
class PurchaseReceiptPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PURCHASERECEIPTPACKET
public:
    class PurchaseReceiptPacket& operator=(class PurchaseReceiptPacket const &) = delete;
    PurchaseReceiptPacket(class PurchaseReceiptPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PurchaseReceiptPacket();
    /**
     * @hash   -334280049
     * @vftbl  1
     * @symbol  ?getId\@PurchaseReceiptPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1825053380
     * @vftbl  2
     * @symbol  ?getName\@PurchaseReceiptPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1263673163
     * @vftbl  3
     * @symbol  ?write\@PurchaseReceiptPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1741209195
     * @vftbl  6
     * @symbol  ?_read\@PurchaseReceiptPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   49219067
     * @symbol  ??0PurchaseReceiptPacket\@\@QEAA\@XZ
     */
    MCAPI PurchaseReceiptPacket();
    /**
     * @hash   1600278590
     * @symbol  ?sMaxReceiptsPerPacket\@PurchaseReceiptPacket\@\@2_KB
     */
    MCAPI static unsigned __int64 const sMaxReceiptsPerPacket;

};