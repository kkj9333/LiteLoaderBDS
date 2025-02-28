/**
 * @file  BreakDoorAnnotationSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakDoorAnnotationSystem.
 *
 */
class BreakDoorAnnotationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONSYSTEM
public:
    class BreakDoorAnnotationSystem& operator=(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BreakDoorAnnotationSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -809472501
     * @vftbl  2
     * @symbol  ?tick\@BreakDoorAnnotationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};