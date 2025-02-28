/**
 * @file  StonecutterContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StonecutterContainerManagerModel.
 *
 */
class StonecutterContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STONECUTTERCONTAINERMANAGERMODEL
public:
    class StonecutterContainerManagerModel& operator=(class StonecutterContainerManagerModel const &) = delete;
    StonecutterContainerManagerModel(class StonecutterContainerManagerModel const &) = delete;
    StonecutterContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StonecutterContainerManagerModel();
    /**
     * @hash   -1206036474
     * @vftbl  6
     * @symbol  ?getItemCopies\@StonecutterContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1961761335
     * @vftbl  7
     * @symbol  ?setSlot\@StonecutterContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   -1219882238
     * @vftbl  8
     * @symbol  ?getSlot\@StonecutterContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -386601510
     * @vftbl  9
     * @symbol  ?setData\@StonecutterContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   1572583056
     * @vftbl  10
     * @symbol  ?broadcastChanges\@StonecutterContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   1280216480
     * @vftbl  16
     * @symbol  ?isValid\@StonecutterContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1532589197
     * @vftbl  17
     * @symbol  ?_postInit\@StonecutterContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   796611196
     * @symbol  ??0StonecutterContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI StonecutterContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};