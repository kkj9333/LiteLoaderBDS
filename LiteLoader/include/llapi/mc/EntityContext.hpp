/**
 * @file  EntityContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
template <>
class WeakRefT<struct EntityRefTraits> {
    char filler[24];
};
#undef BEFORE_EXTRA

/**
 * @brief MC class EntityContext.
 *
 */
class EntityContext {

#define AFTER_EXTRA
// Add Member There
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXT
public:
    class EntityContext& operator=(class EntityContext const &) = delete;
    EntityContext(class EntityContext const &) = delete;
    EntityContext() = delete;
#endif

public:
    /**
     * @hash   -1683332594
     * @symbol  ??0EntityContext\@\@QEAA\@AEAVEntityRegistry\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContext(class EntityRegistry &, class EntityId);
    /**
     * @hash   -1342391177
     * @symbol  ?getWeakRef\@EntityContext\@\@QEBA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakRef() const;

//protected:
    /**
     * @hash   1817071764
     * @symbol  ?_registry\@EntityContext\@\@IEBAAEAVEntityRegistry\@\@XZ
     */
    MCAPI class EntityRegistry & _registry() const;

protected:

};