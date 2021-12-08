// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Tag;
class ItemActor;

#undef BEFORE_EXTRA

class ItemStack : public ItemStackBase {

#define AFTER_EXTRA
// Add new members to class
public:
	LIAPI static ItemStack* create();
    LIAPI static ItemStack* create(std::string type, int count);
    LIAPI static ItemStack* create(Tag* tag);
    LIAPI ItemStack* clone_s();

	LIAPI std::string getName();
	LIAPI std::string getCustomName();
	LIAPI std::string getTypeName();
	LIAPI int getAux();
	LIAPI int getCount();

	LIAPI bool setItem(ItemStack* newItem);
	LIAPI bool setLore(std::vector<std::string> lores);
#undef AFTER_EXTRA

public:
    /*0*/ virtual ~ItemStack();
    /*1*/ virtual void reinit(class Item const&, int, int);
    /*2*/ virtual void reinit(class BlockLegacy const&, int);
    /*3*/ virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /*4*/ virtual void setNull();
    /*5*/ virtual std::string toString() const;
    /*6*/ virtual std::string toDebugString() const;
    /*
    inline  ~ItemStack(){
         (ItemStack::*rv)();
        *((void**)&rv) = dlsym("??1ItemStack@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ItemStack(class ItemStack const&);
    MCAPI ItemStack(class Block const&, int, class CompoundTag const*);
    MCAPI ItemStack(class BlockLegacy const&, int);
    MCAPI ItemStack(class Item const&);
    MCAPI ItemStack(class Item const&, int);
    MCAPI ItemStack(class Item const&, int, int);
    MCAPI ItemStack(class Item const&, int, int, class CompoundTag const*);
    MCAPI ItemStack(class ItemInstance const&);
    MCAPI ItemStack(class RecipeIngredient const&);
    MCAPI ItemStack(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const*);
    MCAPI ItemStack();
    MCAPI void __autoclassinit2(unsigned __int64);
    MCAPI void _assignNetIdVariant(class ItemStack const&) const;
    MCAPI void clientInitLegacyRequestId(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&);
    MCAPI class ItemStack clone() const;
    MCAPI class ItemComponent const* getComponent(class HashedString const&) const;
    MCAPI float getDestroySpeed(class Block const&) const;
    MCAPI struct ItemStackNetIdVariant const& getItemStackNetIdVariant() const;
    MCAPI int getMaxUseDuration() const;
    MCAPI class ItemStack getStrippedNetworkItem() const;
    MCAPI bool hasItemStackNetId() const;
    MCAPI bool inventoryTick(class Level&, class Actor&, int, bool);
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const&) const;
    MCAPI bool matchesNetIdVariant(class ItemStack const&) const;
    MCAPI void mineBlock(class Block const&, int, int, int, class Mob*);
    MCAPI class ItemStack& operator=(class ItemStack const&);
    MCAPI void playSoundIncrementally(class Mob&) const;
    MCAPI void releaseUsing(class Player*, int);
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const&) const;
    MCAPI void serverInitNetId();
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetItemStackNetId() const;
    MCAPI class ItemStack& use(class Player&);
    MCAPI void useAsFuel();
    MCAPI bool useOn(class Actor&, int, int, int, unsigned char, float, float, float);
    MCAPI enum ItemUseMethod useTimeDepleted(class Level*, class Player*);
    MCAPI static class ItemStack const EMPTY_ITEM;
    MCAPI static class ItemStack fromDescriptor(class NetworkItemStackDescriptor const&, class BlockPalette&, bool);
    MCAPI static class ItemStack fromTag(class CompoundTag const&);
    MCAPI static class ItemStack fromTag(class CompoundTag const&, class Level&);

protected:

private:

};