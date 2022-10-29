/**
 * @file  InventoryMenu.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryMenu.
 *
 */
class InventoryMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYMENU
public:
    class InventoryMenu& operator=(class InventoryMenu const &) = delete;
    InventoryMenu(class InventoryMenu const &) = delete;
    InventoryMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYMENU
    /**
     * @symbol ?_getContainer@InventoryMenu@@MEBAPEAVContainer@@XZ
     * @hash   252983403
     */
    MCVAPI class Container * _getContainer() const;
    /**
     * @symbol ?getItemCopies@InventoryMenu@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   1479507316
     */
    MCVAPI std::vector<class ItemStack> getItemCopies() const;
    /**
     * @symbol ?getSlot@InventoryMenu@@UEBAAEBVItemStack@@H@Z
     * @hash   -588631996
     */
    MCVAPI class ItemStack const & getSlot(int) const;
    /**
     * @symbol ?removeSlot@InventoryMenu@@UEAAXHH@Z
     * @hash   -2119191666
     */
    MCVAPI void removeSlot(int, int);
    /**
     * @symbol ?serverInitItemStackIds@InventoryMenu@@UEAAXXZ
     * @hash   -82218238
     */
    MCVAPI void serverInitItemStackIds();
    /**
     * @symbol ?setSlot@InventoryMenu@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -2014659669
     */
    MCVAPI void setSlot(int, class ItemStack const &, bool);
    /**
     * @symbol ??1InventoryMenu@@UEAA@XZ
     * @hash   -910015000
     */
    MCVAPI ~InventoryMenu();
#endif
    /**
     * @symbol ??0InventoryMenu@@QEAA@AEAVPlayer@@PEAVContainer@@@Z
     * @hash   1040737568
     */
    MCAPI InventoryMenu(class Player &, class Container *);

};