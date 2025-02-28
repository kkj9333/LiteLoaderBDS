/**
 * @file  VolumeAreaCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeAreaCommand.
 *
 */
class VolumeAreaCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEAREACOMMAND
public:
    class VolumeAreaCommand& operator=(class VolumeAreaCommand const &) = delete;
    VolumeAreaCommand(class VolumeAreaCommand const &) = delete;
    VolumeAreaCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VolumeAreaCommand();
    /**
     * @hash   -898453857
     * @vftbl  1
     * @symbol  ?execute\@VolumeAreaCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   727264704
     * @symbol  ?setup\@VolumeAreaCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -1694358282
     * @symbol  ?_add\@VolumeAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBVDimension\@\@AEAVVolumeEntityManagerServer\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI void _add(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;
    /**
     * @hash   -1991457700
     * @symbol  ?_list\@VolumeAreaCommand\@\@AEBAXAEAVCommandOutput\@\@AEBVLevel\@\@AEBVDimension\@\@AEBVVolumeEntityManagerServer\@\@\@Z
     */
    MCAPI void _list(class CommandOutput &, class Level const &, class Dimension const &, class VolumeEntityManagerServer const &) const;
    /**
     * @hash   -1249144491
     * @symbol  ?_remove\@VolumeAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBVDimension\@\@AEAVVolumeEntityManagerServer\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI void _remove(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;
    /**
     * @hash   1837931994
     * @symbol  ?_removeAll\@VolumeAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBVDimension\@\@AEAVVolumeEntityManagerServer\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI void _removeAll(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;

private:

};