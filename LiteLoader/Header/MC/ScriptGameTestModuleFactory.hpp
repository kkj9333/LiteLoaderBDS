// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptGameTestModuleFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTGAMETESTMODULEFACTORY
public:
    class ScriptGameTestModuleFactory& operator=(class ScriptGameTestModuleFactory const&) = delete;
    ScriptGameTestModuleFactory(class ScriptGameTestModuleFactory const&) = delete;
    ScriptGameTestModuleFactory() = delete;
#endif

public:
    /*0*/ virtual ~ScriptGameTestModuleFactory();
    MCAPI static std::string getModuleUUIDAsString();

protected:

private:
    MCAPI void _addV1();
    MCAPI static char const* ModuleName;
    MCAPI static class mce::UUID ModuleUUID;

};