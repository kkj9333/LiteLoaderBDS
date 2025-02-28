/**
 * @file  AllowList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AllowList.
 *
 */
class AllowList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLIST
public:
    class AllowList& operator=(class AllowList const &) = delete;
    AllowList(class AllowList const &) = delete;
    AllowList() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AllowList();
    /**
     * @hash   1876124043
     * @vftbl  1
     * @symbol  ?serialize\@AllowList\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value &);
    /**
     * @hash   -197035028
     * @vftbl  2
     * @symbol  ?deserialize\@AllowList\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void deserialize(class Json::Value &);
    /**
     * @hash   -51163402
     * @symbol  ??0AllowList\@\@QEAA\@V?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI AllowList(class std::function<void (void)>);
    /**
     * @hash   378653785
     * @symbol  ?addEntry\@AllowList\@\@QEAA_NAEBVAllowListEntry\@\@\@Z
     */
    MCAPI bool addEntry(class AllowListEntry const &);
    /**
     * @hash   -1680856084
     * @symbol  ?getEntries\@AllowList\@\@QEBAAEBV?$vector\@VAllowListEntry\@\@V?$allocator\@VAllowListEntry\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AllowListEntry> const & getEntries() const;
    /**
     * @hash   519531544
     * @symbol  ?isAllowed\@AllowList\@\@QEBA_NAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isAllowed(class mce::UUID const &, std::string const &) const;
    /**
     * @hash   -732018146
     * @symbol  ?isIgnoringPlayerLimit\@AllowList\@\@QEBA_NAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isIgnoringPlayerLimit(class mce::UUID const &, std::string const &) const;
    /**
     * @hash   -362589025
     * @symbol  ?removeByName\@AllowList\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool removeByName(std::string const &);
    /**
     * @hash   -455175824
     * @symbol  ?tryUpdateEntries\@AllowList\@\@QEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI void tryUpdateEntries(class mce::UUID const &, std::string const &, std::string const &);

};