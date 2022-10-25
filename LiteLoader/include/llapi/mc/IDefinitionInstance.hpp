/**
 * @file  IDefinitionInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IDefinitionInstance.
 *
 */
class IDefinitionInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDEFINITIONINSTANCE
public:
    IDefinitionInstance(class IDefinitionInstance const &) = delete;
    IDefinitionInstance() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   185699871
     */
    virtual ~IDefinitionInstance();
    /**
     * @vftbl  1
     * @symbol ?getRuntimeTypeId@IDefinitionInstance@@UEBAGXZ
     * @hash   -1855599649
     */
    virtual unsigned short getRuntimeTypeId() const;
    /**
     * @symbol ??4IDefinitionInstance@@QEAAAEAV0@AEBV0@@Z
     * @hash   -1114912676
     */
    MCAPI class IDefinitionInstance & operator=(class IDefinitionInstance const &);

};