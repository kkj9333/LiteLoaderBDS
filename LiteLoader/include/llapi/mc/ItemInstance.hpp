/**
 * @file  ItemInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemInstance.
 *
 */
class ItemInstance : public ItemStackBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @hash   -538113262
     */
    virtual ~ItemInstance();
    /**
     * @vftbl  1
     * @symbol ?reinit@ItemInstance@@UEAAXAEBVItem@@HH@Z
     * @hash   -396843620
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @vftbl  2
     * @symbol ?reinit@ItemInstance@@UEAAXAEBVBlockLegacy@@H@Z
     * @hash   1083802702
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @vftbl  3
     * @symbol ?reinit@ItemInstance@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z
     * @hash   -1991436559
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol ??0ItemInstance@@QEAA@XZ
     * @hash   1365214228
     */
    MCAPI ItemInstance();
    /**
     * @symbol ??0ItemInstance@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HHPEBVCompoundTag@@@Z
     * @hash   -506219241
     */
    MCAPI ItemInstance(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
     * @hash   -1915575031
     */
    MCAPI ItemInstance(class Item const &, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVBlockLegacy@@H@Z
     * @hash   1999628302
     */
    MCAPI ItemInstance(class BlockLegacy const &, int);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
     * @hash   1099753360
     */
    MCAPI ItemInstance(class Block const &, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBV0@@Z
     * @hash   -1320236383
     */
    MCAPI ItemInstance(class ItemInstance const &);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVItemStackBase@@@Z
     * @hash   1715745909
     */
    MCAPI ItemInstance(class ItemStackBase const &);
    /**
     * @symbol ?clone@ItemInstance@@QEBA?AV1@XZ
     * @hash   -1586075497
     */
    MCAPI class ItemInstance clone() const;
    /**
     * @symbol ??4ItemInstance@@QEAAAEAV0@AEBV0@@Z
     * @hash   1082894692
     */
    MCAPI class ItemInstance & operator=(class ItemInstance const &);
    /**
     * @symbol ?EMPTY_ITEM@ItemInstance@@2V1@B
     * @hash   165184762
     */
    MCAPI static class ItemInstance const EMPTY_ITEM;
    /**
     * @symbol ?fromTag@ItemInstance@@SA?AV1@AEBVCompoundTag@@@Z
     * @hash   -1514751996
     */
    MCAPI static class ItemInstance fromTag(class CompoundTag const &);

};