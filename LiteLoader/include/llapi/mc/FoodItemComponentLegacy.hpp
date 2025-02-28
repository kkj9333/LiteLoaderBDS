/**
 * @file  FoodItemComponentLegacy.hpp
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
 * @brief MC class FoodItemComponentLegacy.
 *
 */
class FoodItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODITEMCOMPONENTLEGACY
public:
    class FoodItemComponentLegacy& operator=(class FoodItemComponentLegacy const &) = delete;
    FoodItemComponentLegacy(class FoodItemComponentLegacy const &) = delete;
    FoodItemComponentLegacy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FoodItemComponentLegacy();
    /**
     * @hash   -640122152
     * @vftbl  1
     * @symbol  ?getNutrition\@FoodItemComponentLegacy\@\@UEBAHXZ
     */
    virtual int getNutrition() const;
    /**
     * @hash   823538568
     * @vftbl  2
     * @symbol  ?getSaturationModifier\@FoodItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float getSaturationModifier() const;
    /**
     * @hash   -1383300452
     * @vftbl  3
     * @symbol  ?canAlwaysEat\@FoodItemComponentLegacy\@\@UEBA_NXZ
     */
    virtual bool canAlwaysEat() const;
    /**
     * @hash   251082811
     * @vftbl  4
     * @symbol  ?eatItem\@FoodItemComponentLegacy\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    virtual class Item const * eatItem(class ItemStack &, class Actor &, class Level &);
    /**
     * @hash   -70643929
     * @vftbl  5
     * @symbol  ?use\@FoodItemComponentLegacy\@\@UEAA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    virtual bool use(class ItemStack &, class Player &);
    /**
     * @hash   -863431221
     * @vftbl  6
     * @symbol  ?useTimeDepleted\@FoodItemComponentLegacy\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVPlayer\@\@AEAVLevel\@\@\@Z
     */
    virtual class Item const * useTimeDepleted(class ItemStack &, class Player &, class Level &);
    /**
     * @hash   -1027485182
     * @symbol  ??0FoodItemComponentLegacy\@\@QEAA\@AEAVItem\@\@\@Z
     */
    MCAPI FoodItemComponentLegacy(class Item &);
    /**
     * @hash   1537311688
     * @symbol  ?buildNetworkTag\@FoodItemComponentLegacy\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   283106306
     * @symbol  ?init\@FoodItemComponentLegacy\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool init(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -36528477
     * @symbol  ?initializeFromNetwork\@FoodItemComponentLegacy\@\@SA?AVValue\@Json\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class Json::Value initializeFromNetwork(class CompoundTag const &);

//private:
    /**
     * @hash   1748541589
     * @symbol  ?_applyEatEffects\@FoodItemComponentLegacy\@\@AEAAXAEBVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void _applyEatEffects(class ItemStack const &, class Actor &, class Level &);
    /**
     * @hash   -462465265
     * @symbol  ?_loadEffects\@FoodItemComponentLegacy\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _loadEffects(class Json::Value &);
    /**
     * @hash   -693175517
     * @symbol  ?_loadRemoveEffects\@FoodItemComponentLegacy\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _loadRemoveEffects(class Json::Value &);

private:

};