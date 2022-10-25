/**
 * @file  WorldSessionEndPoint.hpp
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
 * @brief MC class WorldSessionEndPoint.
 *
 */
class WorldSessionEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDSESSIONENDPOINT
public:
    class WorldSessionEndPoint& operator=(class WorldSessionEndPoint const &) = delete;
    WorldSessionEndPoint(class WorldSessionEndPoint const &) = delete;
    WorldSessionEndPoint() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDSESSIONENDPOINT
    /**
     * @symbol ?flush@WorldSessionEndPoint@@UEAAXXZ
     * @hash   1013238322
     */
    MCVAPI void flush();
    /**
     * @symbol ?isEnabled@WorldSessionEndPoint@@UEBA_NXZ
     * @hash   370703478
     */
    MCVAPI bool isEnabled() const;
    /**
     * @symbol ?log@WorldSessionEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
     * @hash   484185218
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const *);
    /**
     * @symbol ?logOnlyOnce@WorldSessionEndPoint@@UEBA_NXZ
     * @hash   1909333024
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @symbol ?setEnabled@WorldSessionEndPoint@@UEAAX_N@Z
     * @hash   1327711103
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @symbol ??0WorldSessionEndPoint@@QEAA@AEAVIMinecraftEventing@@@Z
     * @hash   846878180
     */
    MCAPI WorldSessionEndPoint(class IMinecraftEventing &);

};