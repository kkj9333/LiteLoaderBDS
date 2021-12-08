// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AutomationClientConnectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONCLIENTCONNECTPACKET
public:
    class AutomationClientConnectPacket& operator=(class AutomationClientConnectPacket const&) = delete;
    AutomationClientConnectPacket(class AutomationClientConnectPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~AutomationClientConnectPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~AutomationClientConnectPacket(){
         (AutomationClientConnectPacket::*rv)();
        *((void**)&rv) = dlsym("??1AutomationClientConnectPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI AutomationClientConnectPacket(struct WebSocketPacketData);
    MCAPI AutomationClientConnectPacket();

protected:

private:

};