/**
 * @file  DispatcherUpdateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure DispatcherUpdateSystem.
 *
 */
struct DispatcherUpdateSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPATCHERUPDATESYSTEM
public:
    struct DispatcherUpdateSystem& operator=(struct DispatcherUpdateSystem const &) = delete;
    DispatcherUpdateSystem(struct DispatcherUpdateSystem const &) = delete;
    DispatcherUpdateSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DispatcherUpdateSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -231333233
     * @vftbl  2
     * @symbol  ?tick\@DispatcherUpdateSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};