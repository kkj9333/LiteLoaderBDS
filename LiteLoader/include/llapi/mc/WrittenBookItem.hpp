/**
 * @file  WrittenBookItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WrittenBookItem.
 *
 */
class WrittenBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITTENBOOKITEM
public:
    class WrittenBookItem& operator=(class WrittenBookItem const &) = delete;
    WrittenBookItem(class WrittenBookItem const &) = delete;
    WrittenBookItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1596304033
     */
    virtual ~WrittenBookItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  50
     * @symbol ?isGlint@WrittenBookItem@@MEBA_NAEBVItemStackBase@@@Z
     * @hash   1743095731
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  59
     * @symbol ?requiresInteract@WrittenBookItem@@UEBA_NXZ
     * @hash   1911395769
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@WrittenBookItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   892949756
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -158474657
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  84
     * @symbol ?use@WrittenBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   498813387
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   525702439
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  119
     * @symbol ?getInteractText@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     * @hash   757135982
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @symbol ??0WrittenBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -224892879
     */
    MCAPI WrittenBookItem(std::string const &, int);
    /**
     * @symbol ?MAX_GENERATION@WrittenBookItem@@2HB
     * @hash   -1143353331
     */
    MCAPI static int const MAX_GENERATION;
    /**
     * @symbol ?MAX_PAGES@WrittenBookItem@@2HB
     * @hash   1906174103
     */
    MCAPI static int const MAX_PAGES;
    /**
     * @symbol ?MAX_PAGE_LENGTH@WrittenBookItem@@2HB
     * @hash   1470970039
     */
    MCAPI static int const MAX_PAGE_LENGTH;
    /**
     * @symbol ?MAX_TITLE_LENGTH@WrittenBookItem@@2HB
     * @hash   356187371
     */
    MCAPI static int const MAX_TITLE_LENGTH;
    /**
     * @symbol ?TAG_AUTHOR@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   -1686533823
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_AUTHOR;
    /**
     * @symbol ?TAG_GENERATION@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   1783521057
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_GENERATION;
    /**
     * @symbol ?TAG_ID@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   313897009
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_ID;
    /**
     * @symbol ?TAG_PAGES@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   757610975
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGES;
    /**
     * @symbol ?TAG_PAGE_PHOTO_NAME@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   318905823
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_PHOTO_NAME;
    /**
     * @symbol ?TAG_PAGE_TEXT@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   -868732913
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_TEXT;
    /**
     * @symbol ?TAG_RESOLVED@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   1675703153
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_RESOLVED;
    /**
     * @symbol ?TAG_TITLE@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   -1426474449
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_TITLE;
    /**
     * @symbol ?TAG_XUID@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   -62335055
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_XUID;
    /**
     * @symbol ?canBeCopied@WrittenBookItem@@SA_NPEBVCompoundTag@@@Z
     * @hash   2113573142
     */
    MCAPI static bool canBeCopied(class CompoundTag const *);
    /**
     * @symbol ?getGeneration@WrittenBookItem@@SAHPEBVCompoundTag@@@Z
     * @hash   -1098846540
     */
    MCAPI static int getGeneration(class CompoundTag const *);
    /**
     * @symbol ?getPageCount@WrittenBookItem@@SAHAEBVItemStack@@@Z
     * @hash   -246093851
     */
    MCAPI static int getPageCount(class ItemStack const &);
    /**
     * @symbol ?getPages@WrittenBookItem@@SA?AV?$vector@UPageContent@@V?$allocator@UPageContent@@@std@@@std@@AEBVItemStack@@@Z
     * @hash   -47003211
     */
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const &);

};