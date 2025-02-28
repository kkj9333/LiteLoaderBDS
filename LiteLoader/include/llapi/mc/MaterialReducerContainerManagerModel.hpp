/**
 * @file  MaterialReducerContainerManagerModel.hpp
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
 * @brief MC class MaterialReducerContainerManagerModel.
 *
 */
class MaterialReducerContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCERCONTAINERMANAGERMODEL
public:
    class MaterialReducerContainerManagerModel& operator=(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MaterialReducerContainerManagerModel();
    /**
     * @hash   1703280903
     * @vftbl  6
     * @symbol  ?getItemCopies\@MaterialReducerContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1286587080
     * @vftbl  7
     * @symbol  ?setSlot\@MaterialReducerContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   1862551153
     * @vftbl  8
     * @symbol  ?getSlot\@MaterialReducerContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -1191528485
     * @vftbl  9
     * @symbol  ?setData\@MaterialReducerContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   -2097492783
     * @vftbl  10
     * @symbol  ?broadcastChanges\@MaterialReducerContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   -978763505
     * @vftbl  16
     * @symbol  ?isValid\@MaterialReducerContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1813827150
     * @vftbl  17
     * @symbol  ?_postInit\@MaterialReducerContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -414637379
     * @symbol  ??0MaterialReducerContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MaterialReducerContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};