/**
 * @file  BiomeSurfaceSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BiomeSurfaceSystem.
 *
 */
namespace BiomeSurfaceSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   738299223
     * @symbol  ?buildSurfaceAt\@BiomeSurfaceSystem\@\@YAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    MCAPI void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const &);
    /**
     * @hash   -995403243
     * @symbol  ?resolveBuilderImplementation\@BiomeSurfaceSystem\@\@YAXAEAVEntityRegistry\@\@AEBVSurfaceBuilderRegistry\@\@I\@Z
     */
    MCAPI void resolveBuilderImplementation(class EntityRegistry &, class SurfaceBuilderRegistry const &, unsigned int);

};