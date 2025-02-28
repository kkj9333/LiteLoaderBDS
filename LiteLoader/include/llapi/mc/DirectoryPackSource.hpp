/**
 * @file  DirectoryPackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackSource.
 *
 */
class DirectoryPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKSOURCE
public:
    class DirectoryPackSource& operator=(class DirectoryPackSource const &) = delete;
    DirectoryPackSource(class DirectoryPackSource const &) = delete;
    DirectoryPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DirectoryPackSource();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   919671477
     * @vftbl  3
     * @symbol  ?getPackOrigin\@DirectoryPackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   1122581109
     * @vftbl  4
     * @symbol  ?getPackType\@DirectoryPackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    virtual enum class PackType getPackType() const;
    /**
     * @hash   1995409218
     * @vftbl  5
     * @symbol  ?load\@DirectoryPackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTORYPACKSOURCE
    /**
     * @hash   1207086681
     * @symbol  ?forEachPack\@DirectoryPackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @hash   -1703574472
     * @symbol  ?forEachPackConst\@DirectoryPackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @hash   -98438135
     * @symbol  ??0DirectoryPackSource\@\@QEAA\@AEBVPath\@Core\@\@W4PackType\@\@W4PackOrigin\@\@_N\@Z
     */
    MCAPI DirectoryPackSource(class Core::Path const &, enum class PackType, enum class PackOrigin, bool);
    /**
     * @hash   -47148401
     * @symbol  ?getPath\@DirectoryPackSource\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const & getPath() const;
    /**
     * @hash   1814639721
     * @symbol  ?removePack\@DirectoryPackSource\@\@QEAA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool removePack(class Core::Path const &);
    /**
     * @hash   -1905121962
     * @symbol  ?checkAndRemoveIncompletePacks\@DirectoryPackSource\@\@SAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const &);

};