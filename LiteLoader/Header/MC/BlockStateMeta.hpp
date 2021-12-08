// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockStateMeta {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEMETA
public:
    class BlockStateMeta& operator=(class BlockStateMeta const&) = delete;
    BlockStateMeta(class BlockStateMeta const&) = delete;
    BlockStateMeta() = delete;
#endif

public:
    MCAPI BlockStateMeta(class ItemState const&, struct BlockStateDefinition const&);
    MCAPI bool const getBool(int) const;
    MCAPI unsigned __int64 getID() const;
    MCAPI int const getInt(int) const;
    MCAPI std::string const& getString(int) const;
    MCAPI enum Tag::Type const getType() const;

protected:

private:

};