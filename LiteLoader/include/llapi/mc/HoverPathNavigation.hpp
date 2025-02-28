/**
 * @file  HoverPathNavigation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoverPathNavigation.
 *
 */
class HoverPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERPATHNAVIGATION
public:
    class HoverPathNavigation& operator=(class HoverPathNavigation const &) = delete;
    HoverPathNavigation(class HoverPathNavigation const &) = delete;
    HoverPathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HoverPathNavigation();
    /**
     * @hash   304110838
     * @vftbl  1
     * @symbol  ?initializeInternal\@HoverPathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @hash   957893761
     * @vftbl  2
     * @symbol  ?tick\@HoverPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @hash   1823887301
     * @vftbl  3
     * @symbol  ?getTempMobPos\@HoverPathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @hash   756128442
     * @vftbl  4
     * @symbol  ?createPath\@HoverPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @hash   -1322212081
     * @vftbl  5
     * @symbol  ?createPath\@HoverPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @hash   -1345403274
     * @vftbl  9
     * @symbol  ?stop\@HoverPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @hash   2047988717
     * @vftbl  11
     * @symbol  ?canUpdatePath\@HoverPathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @hash   1181057986
     * @vftbl  12
     * @symbol  ?updatePath\@HoverPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

};