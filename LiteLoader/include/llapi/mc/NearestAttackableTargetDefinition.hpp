/**
 * @file  NearestAttackableTargetDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NearestAttackableTargetDefinition.
 *
 */
class NearestAttackableTargetDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETDEFINITION
public:
    class NearestAttackableTargetDefinition& operator=(class NearestAttackableTargetDefinition const &) = delete;
    NearestAttackableTargetDefinition(class NearestAttackableTargetDefinition const &) = delete;
    NearestAttackableTargetDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1398509138
     */
    virtual ~NearestAttackableTargetDefinition();
    /**
     * @vftbl  1
     * @hash   -1362796495
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?validate@NearestAttackableTargetDefinition@@UEAA_NAEAVMob@@@Z
     * @hash   566934529
     */
    virtual bool validate(class Mob &);
    /**
     * @symbol ?initialize@NearestAttackableTargetDefinition@@QEAAXAEAVEntityContext@@AEAVNearestAttackableTargetGoal@@@Z
     * @hash   -570213541
     */
    MCAPI void initialize(class EntityContext &, class NearestAttackableTargetGoal &);
    /**
     * @symbol ?buildSchema@NearestAttackableTargetDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VNearestAttackableTargetDefinition@@@JsonUtil@@@3@@Z
     * @hash   -2012287995
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NearestAttackableTargetDefinition>> &);

};