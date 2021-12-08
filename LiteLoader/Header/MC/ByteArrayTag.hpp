// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

class ByteArrayTag : public Tag {

#define AFTER_EXTRA
// Add Member There
public:
inline TagMemoryChunk& value() {
    return dAccess<TagMemoryChunk, 8>(this);
}
inline ByteArrayTag& operator=(TagMemoryChunk const& val) {
    value() = val;
    return *this;
}

inline static ByteArrayTag* create() {
    ByteArrayTag* tag = (ByteArrayTag*)Tag::createTag(Tag::Type::ByteArray);
    return tag;
}

inline static ByteArrayTag* create(TagMemoryChunk const& val) {
    ByteArrayTag* tag = (ByteArrayTag*)Tag::createTag(Tag::Type::ByteArray);
    *tag = val;
    return tag;
}

inline bool set(TagMemoryChunk const& val) {
    if (getTagType() != Tag::Type::ByteArray)
        return false;
    value() = val;
    return true;
}
inline TagMemoryChunk get() {
    return value();
}

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BYTEARRAYTAG
public:
    class ByteArrayTag& operator=(class ByteArrayTag const&) = delete;
    ByteArrayTag(class ByteArrayTag const&) = delete;
#endif

public:
    /*0*/ virtual ~ByteArrayTag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput&) const;
    /*3*/ virtual void load(class IDataInput&);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual int /*enum enum Tag::Type*/ getId() const;
    /*6*/ virtual bool equals(class Tag const&) const;
    /*7*/ virtual std::unique_ptr<class Tag> copy() const;
    /*8*/ virtual unsigned __int64 hash() const;
    MCAPI ByteArrayTag(struct TagMemoryChunk);
    MCAPI ByteArrayTag();

protected:

private:

};