/**
 * @file  Trade1Ingredient1ContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class Trade1Ingredient1ContainerValidation.
 *
 */
class Trade1Ingredient1ContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE1INGREDIENT1CONTAINERVALIDATION
public:
    class Trade1Ingredient1ContainerValidation& operator=(class Trade1Ingredient1ContainerValidation const &) = delete;
    Trade1Ingredient1ContainerValidation(class Trade1Ingredient1ContainerValidation const &) = delete;
    Trade1Ingredient1ContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1632022193
     */
    virtual ~Trade1Ingredient1ContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   1879221611
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@Trade1Ingredient1ContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   -1344705525
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   -673717048
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1359102411
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   -269804946
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   948557762
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol ?getContainerOffset@Trade1Ingredient1ContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   -1573830133
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   -1454289399
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /**
     * @symbol ??0Trade1Ingredient1ContainerValidation@@QEAA@_N@Z
     * @hash   565461148
     */
    MCAPI Trade1Ingredient1ContainerValidation(bool);

};