// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Int64Tag : public Tag {

#define AFTER_EXTRA
// Add Member There
public:
inline int64_t& value() {
    return dAccess<int64_t, 8>(this);
}
inline Int64Tag& operator=(int64_t val) {
    value() = val;
    return *this;
}
inline static Int64Tag* create(int64_t val = 0) {
    Int64Tag* tag = (Int64Tag*)Tag::createTag(Tag::Type::Int64);
    *tag = val;
    return tag;
}
inline bool set(int64_t val) {
    if (getTagType() != Tag::Type::Int64)
        return false;
    value() = val;
    return true;
}
inline int64_t get() {
    return value();
}

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INT64TAG
public:
    class Int64Tag& operator=(class Int64Tag const&) = delete;
    Int64Tag(class Int64Tag const&) = delete;
#endif

public:
    /*0*/ virtual ~Int64Tag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput&) const;
    /*3*/ virtual void load(class IDataInput&);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual int /*enum enum Tag::Type*/ getId() const;
    /*6*/ virtual bool equals(class Tag const&) const;
    /*7*/ virtual std::unique_ptr<class Tag> copy() const;
    /*8*/ virtual unsigned __int64 hash() const;
    MCAPI Int64Tag();
    MCAPI Int64Tag(__int64);

protected:

private:

};