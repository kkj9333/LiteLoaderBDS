/**
 * @file  InsomniaSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsomniaSystem.
 *
 */
class InsomniaSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIASYSTEM
public:
    class InsomniaSystem& operator=(class InsomniaSystem const &) = delete;
    InsomniaSystem(class InsomniaSystem const &) = delete;
    InsomniaSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InsomniaSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   736454969
     * @vftbl  2
     * @symbol  ?tick\@InsomniaSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};