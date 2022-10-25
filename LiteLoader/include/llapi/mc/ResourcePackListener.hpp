/**
 * @file  ResourcePackListener.hpp
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
 * @brief MC class ResourcePackListener.
 *
 */
class ResourcePackListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKLISTENER
public:
    class ResourcePackListener& operator=(class ResourcePackListener const &) = delete;
    ResourcePackListener(class ResourcePackListener const &) = delete;
    ResourcePackListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKLISTENER
    /**
     * @symbol ?onBaseGamePackDownloadComplete@ResourcePackListener@@UEAAXXZ
     * @hash   -2109592408
     */
    MCVAPI void onBaseGamePackDownloadComplete();
    /**
     * @symbol ?onFullPackStackInvalid@ResourcePackListener@@UEAAXXZ
     * @hash   -1190265726
     */
    MCVAPI void onFullPackStackInvalid();
    /**
     * @symbol ?onLanguageSubpacksChanged@ResourcePackListener@@UEAAXXZ
     * @hash   592810607
     */
    MCVAPI void onLanguageSubpacksChanged();
    /**
     * @symbol ?onResourceManagerDestroyed@ResourcePackListener@@UEAAXAEAVResourcePackManager@@@Z
     * @hash   -1210829471
     */
    MCVAPI void onResourceManagerDestroyed(class ResourcePackManager &);
#endif

};