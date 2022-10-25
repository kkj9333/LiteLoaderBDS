/**
 * @file  ItemDescriptorCount.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ItemDescriptor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ItemDescriptor.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemDescriptorCount.
 *
 */
class ItemDescriptorCount : public ItemDescriptor {

#define AFTER_EXTRA
// Add Member There
    unsigned short mCount;
    char mfiller[6];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMDESCRIPTORCOUNT
public:
    class ItemDescriptorCount& operator=(class ItemDescriptorCount const &) = delete;
    ItemDescriptorCount(class ItemDescriptorCount const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1680154597
     */
    virtual ~ItemDescriptorCount();
    /**
     * @vftbl  2
     * @symbol ?serialize@ItemDescriptorCount@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -590625000
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@XZ
     * @hash   -1391628711
     */
    MCAPI ItemDescriptorCount();
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HG@Z
     * @hash   -1881835447
     */
    MCAPI ItemDescriptorCount(class gsl::basic_string_span<char const, -1>, int, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@AEBVItemDescriptor@@G@Z
     * @hash   -1745958584
     */
    MCAPI ItemDescriptorCount(class ItemDescriptor const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@AEBVItem@@HG@Z
     * @hash   -1165815385
     */
    MCAPI ItemDescriptorCount(class Item const &, int, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@AEBVBlockLegacy@@G@Z
     * @hash   1619130354
     */
    MCAPI ItemDescriptorCount(class BlockLegacy const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@AEBVBlock@@G@Z
     * @hash   432179872
     */
    MCAPI ItemDescriptorCount(class Block const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@AEBUItemTag@@G@Z
     * @hash   -1059345390
     */
    MCAPI ItemDescriptorCount(struct ItemTag const &, unsigned short);
    /**
     * @symbol ??0ItemDescriptorCount@@QEAA@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1200031226
     */
    MCAPI ItemDescriptorCount(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?getStackSize@ItemDescriptorCount@@QEBAFXZ
     * @hash   -28557151
     */
    MCAPI short getStackSize() const;
    /**
     * @symbol ?setStackSize@ItemDescriptorCount@@QEAAXF@Z
     * @hash   508046207
     */
    MCAPI void setStackSize(short);

};