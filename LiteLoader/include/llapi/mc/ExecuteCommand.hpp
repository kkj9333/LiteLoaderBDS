/**
 * @file  ExecuteCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExecuteCommand.
 *
 */
class ExecuteCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXECUTECOMMAND
public:
    class ExecuteCommand& operator=(class ExecuteCommand const &) = delete;
    ExecuteCommand(class ExecuteCommand const &) = delete;
    ExecuteCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExecuteCommand();
    /**
     * @hash   1232207597
     * @vftbl  1
     * @symbol  ?execute\@ExecuteCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   163953832
     * @symbol  ?setup\@ExecuteCommand\@\@SAXAEAVCommandRegistry\@\@_NH\@Z
     */
    MCAPI static void setup(class CommandRegistry &, bool, int);

};