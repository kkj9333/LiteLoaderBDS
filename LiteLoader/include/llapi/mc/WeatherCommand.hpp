/**
 * @file  WeatherCommand.hpp
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
 * @brief MC class WeatherCommand.
 *
 */
class WeatherCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEATHERCOMMAND
public:
    class WeatherCommand& operator=(class WeatherCommand const &) = delete;
    WeatherCommand(class WeatherCommand const &) = delete;
    WeatherCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WeatherCommand();
    /**
     * @hash   1659426780
     * @vftbl  1
     * @symbol  ?execute\@WeatherCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1519064132
     * @symbol  ?setup\@WeatherCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};