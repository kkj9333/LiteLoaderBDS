/**
 * @file  MolangSerializer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace MolangSerializer.
 *
 */
namespace MolangSerializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?deserializeScriptArg@MolangSerializer@@YA?AV?$unique_ptr@UMolangScriptArg@@U?$default_delete@UMolangScriptArg@@@std@@@std@@AEBVValue@Json@@@Z
     * @hash   -2131795918
     */
    MCAPI std::unique_ptr<struct MolangScriptArg> deserializeScriptArg(class Json::Value const &);
    /**
     * @symbol ?deserializeVariable@MolangSerializer@@YA?AV?$unique_ptr@VMolangVariable@@U?$default_delete@VMolangVariable@@@std@@@std@@AEBVValue@Json@@@Z
     * @hash   -300823846
     */
    MCAPI std::unique_ptr<class MolangVariable> deserializeVariable(class Json::Value const &);
    /**
     * @symbol ?deserializeVariableMap@MolangSerializer@@YA?AV?$unique_ptr@VMolangVariableMap@@U?$default_delete@VMolangVariableMap@@@std@@@std@@AEBVValue@Json@@@Z
     * @hash   -1913464340
     */
    MCAPI std::unique_ptr<class MolangVariableMap> deserializeVariableMap(class Json::Value const &);
    /**
     * @symbol ?serializeScriptArg@MolangSerializer@@YA?AVValue@Json@@AEBUMolangScriptArg@@@Z
     * @hash   -331787494
     */
    MCAPI class Json::Value serializeScriptArg(struct MolangScriptArg const &);

};