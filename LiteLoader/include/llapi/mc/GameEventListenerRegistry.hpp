/**
 * @file  GameEventListenerRegistry.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventListenerRegistry.
 *
 */
class GameEventListenerRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTLISTENERREGISTRY
public:
    class GameEventListenerRegistry& operator=(class GameEventListenerRegistry const &) = delete;
    GameEventListenerRegistry(class GameEventListenerRegistry const &) = delete;
    GameEventListenerRegistry() = delete;
#endif

public:
    /**
     * @symbol ?getListeners@GameEventListenerRegistry@@QEBA?AV?$vector@V?$reference_wrapper@VGameEventListener@@@std@@V?$allocator@V?$reference_wrapper@VGameEventListener@@@std@@@2@@std@@XZ
     * @hash   -23436821
     */
    MCAPI std::vector<class std::reference_wrapper<class GameEventListener>> getListeners() const;
    /**
     * @symbol ?registerListener@GameEventListenerRegistry@@QEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@AEAVGameEventListener@@@Z
     * @hash   -1208230514
     */
    MCAPI class gsl::final_action<class std::function<void (void)>> registerListener(class GameEventListener &);

};