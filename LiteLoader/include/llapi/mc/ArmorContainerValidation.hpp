/**
 * @file  ArmorContainerValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorContainerValidation.
 *
 */
class ArmorContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORCONTAINERVALIDATION
public:
    class ArmorContainerValidation& operator=(class ArmorContainerValidation const &) = delete;
    ArmorContainerValidation(class ArmorContainerValidation const &) = delete;
    ArmorContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ArmorContainerValidation();
    /**
     * @hash   -12418689
     * @vftbl  1
     * @symbol  ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   -1839986329
     * @vftbl  2
     * @symbol  ?isItemAllowedInSlot\@ArmorContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   1143272196
     * @vftbl  3
     * @symbol  ?getAvailableSetCount\@ArmorContainerValidation\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @hash   1892294938
     * @vftbl  4
     * @symbol  ?isItemAllowedToAdd\@ArmorContainerValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @hash   1259281115
     * @vftbl  5
     * @symbol  ?isItemAllowedToRemove\@ArmorContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @hash   31761538
     * @vftbl  6
     * @symbol  ?canItemMoveToContainer\@ArmorContainerValidation\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   547401942
     * @vftbl  7
     * @symbol  ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -1877785099
     * @vftbl  9
     * @symbol  ?getContainerSize\@ArmorContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

};