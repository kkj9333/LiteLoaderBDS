/**
 * @file  MessagingCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MessagingCommand.
 *
 */
class MessagingCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MESSAGINGCOMMAND
public:
    class MessagingCommand& operator=(class MessagingCommand const &) = delete;
    MessagingCommand(class MessagingCommand const &) = delete;
    MessagingCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   198272881
     */
    virtual ~MessagingCommand();

//protected:
    /**
     * @symbol ??0MessagingCommand@@IEAA@_N0@Z
     * @hash   1725400467
     */
    MCAPI MessagingCommand(bool, bool);
    /**
     * @symbol ?checkChatPermissions@MessagingCommand@@IEBA_NAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   144750449
     */
    MCAPI bool checkChatPermissions(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?checkMutedAndSendToastIfMuted@MessagingCommand@@IEBAXAEBUCommandOriginIdentity@@AEBVLevel@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -1838183985
     */
    MCAPI void checkMutedAndSendToastIfMuted(struct CommandOriginIdentity const &, class Level const &, std::vector<std::string> const &) const;
    /**
     * @symbol ?checkMutedAndSendToastIfMuted@MessagingCommand@@IEBAXAEBVPlayer@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   243108349
     */
    MCAPI void checkMutedAndSendToastIfMuted(class Player const &, std::vector<std::string> const &) const;

protected:

};