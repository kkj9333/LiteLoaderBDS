/**
 * @file  CompositePackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompositePackSource.
 *
 */
class CompositePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEPACKSOURCE
public:
    class CompositePackSource& operator=(class CompositePackSource const &) = delete;
    CompositePackSource(class CompositePackSource const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CompositePackSource();
    /**
     * @hash   -1592272238
     * @vftbl  1
     * @symbol  ?forEachPackConst\@CompositePackSource\@\@UEBAXV?$function\@$$A6AXAEBVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPackConst(class std::function<void (class Pack const &)>) const;
    /**
     * @hash   1317773875
     * @vftbl  2
     * @symbol  ?forEachPack\@CompositePackSource\@\@UEAAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -1329187320
     * @vftbl  5
     * @symbol  ?load\@CompositePackSource\@\@UEAA?AVPackSourceReport\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @hash   2057605783
     * @symbol  ??0CompositePackSource\@\@QEAA\@XZ
     */
    MCAPI CompositePackSource();
    /**
     * @hash   660885064
     * @symbol  ??0CompositePackSource\@\@QEAA\@$$QEAV?$vector\@PEAVPackSource\@\@V?$allocator\@PEAVPackSource\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CompositePackSource(std::vector<class PackSource *> &&);
    /**
     * @hash   1290276101
     * @symbol  ?addPackSource\@CompositePackSource\@\@QEAAXPEAVPackSource\@\@\@Z
     */
    MCAPI void addPackSource(class PackSource *);
    /**
     * @hash   435701775
     * @symbol  ?clear\@CompositePackSource\@\@QEAAXXZ
     */
    MCAPI void clear();

};