/**
 * @file  PeekComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PeekComponent.
 *
 */
class PeekComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PEEKCOMPONENT
public:
    class PeekComponent& operator=(class PeekComponent const &) = delete;
    PeekComponent(class PeekComponent const &) = delete;
    PeekComponent() = delete;
#endif

public:
    /**
     * @hash   -1177418881
     * @symbol  ?getDuration\@PeekComponent\@\@QEAAAEAHXZ
     */
    MCAPI int & getDuration();
    /**
     * @hash   -125460004
     * @symbol  ?getHadTarget\@PeekComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHadTarget() const;
    /**
     * @hash   807161824
     * @symbol  ?setHadTarget\@PeekComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHadTarget(bool);

};