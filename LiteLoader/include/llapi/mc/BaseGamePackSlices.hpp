/**
 * @file  BaseGamePackSlices.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseGamePackSlices.
 *
 */
class BaseGamePackSlices {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEGAMEPACKSLICES
public:
    class BaseGamePackSlices& operator=(class BaseGamePackSlices const &) = delete;
    BaseGamePackSlices(class BaseGamePackSlices const &) = delete;
#endif

public:
    /**
     * @hash   771917177
     * @symbol  ??0BaseGamePackSlices\@\@QEAA\@XZ
     */
    MCAPI BaseGamePackSlices();
    /**
     * @hash   1181469360
     * @symbol  ?addFromVersions\@BaseGamePackSlices\@\@QEAAXAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@AEBVIResourcePackRepository\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI void addFromVersions(std::vector<class BaseGameVersion> const &, class IResourcePackRepository const &, class mce::UUID const &);
    /**
     * @hash   -455406642
     * @symbol  ?applyPackSlices\@BaseGamePackSlices\@\@QEBAXAEBVBaseGameVersion\@\@AEBVIResourcePackRepository\@\@AEAVResourcePackStack\@\@\@Z
     */
    MCAPI void applyPackSlices(class BaseGameVersion const &, class IResourcePackRepository const &, class ResourcePackStack &) const;
    /**
     * @hash   1650187127
     * @symbol  ??1BaseGamePackSlices\@\@QEAA\@XZ
     */
    MCAPI ~BaseGamePackSlices();

};