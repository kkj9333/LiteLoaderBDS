/**
 * @file  WorldTemplatePackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldTemplatePackSource.
 *
 */
class WorldTemplatePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEPACKSOURCE
public:
    class WorldTemplatePackSource& operator=(class WorldTemplatePackSource const &) = delete;
    WorldTemplatePackSource(class WorldTemplatePackSource const &) = delete;
    WorldTemplatePackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -814531282
     */
    virtual ~WorldTemplatePackSource();
    /**
     * @vftbl  1
     * @hash   915168689
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   915969202
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   350482419
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   351405940
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?load@WorldTemplatePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   -1350326781
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @symbol ??0WorldTemplatePackSource@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@$$CBVWorldTemplateManager@@@Bedrock@@@gsl@@AEBVUUID@mce@@W4PackType@@W4PackOrigin@@@Z
     * @hash   -1424622108
     */
    MCAPI WorldTemplatePackSource(class gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const &, class mce::UUID const &, enum class PackType, enum class PackOrigin);
    /**
     * @symbol ?getWorldTemplateId@WorldTemplatePackSource@@QEBAAEBVUUID@mce@@XZ
     * @hash   -362230856
     */
    MCAPI class mce::UUID const & getWorldTemplateId() const;

};