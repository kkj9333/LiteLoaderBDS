/**
 * @file  RandomizableBlockActorFillingContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomizableBlockActorFillingContainer.
 *
 */
class RandomizableBlockActorFillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORFILLINGCONTAINER
public:
    class RandomizableBlockActorFillingContainer& operator=(class RandomizableBlockActorFillingContainer const &) = delete;
    RandomizableBlockActorFillingContainer(class RandomizableBlockActorFillingContainer const &) = delete;
    RandomizableBlockActorFillingContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORFILLINGCONTAINER
    /**
     * @hash   797514646
     * @symbol  ?dropContents\@RandomizableBlockActorFillingContainer\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCVAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @hash   -1106989254
     * @symbol  ?initializeContainerContents\@RandomizableBlockActorFillingContainer\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource &);
    /**
     * @hash   1670451115
     * @symbol  ?setContainerChanged\@RandomizableBlockActorFillingContainer\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   1980793144
     * @symbol  ?startOpen\@RandomizableBlockActorFillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   488456692
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~RandomizableBlockActorFillingContainer();
#endif
    /**
     * @hash   -318119461
     * @symbol  ??0RandomizableBlockActorFillingContainer\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@HW4ContainerType\@\@\@Z
     */
    MCAPI RandomizableBlockActorFillingContainer(enum class BlockActorType, std::string const &, class BlockPos const &, int, enum class ContainerType);

};