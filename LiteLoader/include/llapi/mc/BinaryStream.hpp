/**
 * @file  BinaryStream.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ReadOnlyBinaryStream.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Vec3.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class BinaryStream.
 *
 */
class BinaryStream : public ReadOnlyBinaryStream {

#define AFTER_EXTRA
// Add Member There
public:
    std::string writeBuf, *pwBuf;

    LIAPI void reserve(size_t size);
    LIAPI std::string& getRaw();
    template <typename T>
    inline void writeType(T const&) = delete;
    template <>
    MCAPI void writeType(struct CommandOriginData const&);
    template <>
    MCAPI void writeType(std::vector<std::unique_ptr<class DataItem>> const&);
    template <>
    MCAPI void writeType(class NetworkItemStackDescriptor const&);
    template <>
    MCAPI void writeType(class MoveActorAbsoluteData const&);
    template <>
    inline void writeType(class mce::UUID const& uuid)
    {
        for (const unsigned char b : dAccess<unsigned char[16]>(&uuid, 0))
        {
            writeByte(b);
        }
    }
    template <>
    MCAPI void writeType(class NetworkItemInstanceDescriptor const&);
    template <>
    MCAPI void writeType(struct ItemStackRequestSlotInfo const&);
    template <>
    MCAPI void writeType(class RecipeIngredient const&);
    template <>
    inline void writeType(class Vec3 const& vec3)
    {
        writeFloat(vec3.x);
        writeFloat(vec3.y);
        writeFloat(vec3.z);
    }
    LIAPI void writeCompoundTag(class CompoundTag const& tag);


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYSTREAM
public:
    class BinaryStream& operator=(class BinaryStream const &) = delete;
    BinaryStream(class BinaryStream const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BinaryStream();
    /**
     * @hash   993368557
     * @symbol  ??0BinaryStream\@\@QEAA\@XZ
     */
    MCAPI BinaryStream();
    /**
     * @hash   -711589789
     * @symbol  ??0BinaryStream\@\@QEAA\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI BinaryStream(std::string &, bool);
    /**
     * @hash   -723751060
     * @symbol  ?getAndReleaseData\@BinaryStream\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAndReleaseData();
    /**
     * @hash   1767122483
     * @symbol  ?reset\@BinaryStream\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   -653914516
     * @symbol  ?writeBool\@BinaryStream\@\@QEAAX_N\@Z
     */
    MCAPI void writeBool(bool);
    /**
     * @hash   -1203327831
     * @symbol  ?writeByte\@BinaryStream\@\@QEAAXE\@Z
     */
    MCAPI void writeByte(unsigned char);
    /**
     * @hash   1461731008
     * @symbol  ?writeDouble\@BinaryStream\@\@QEAAXN\@Z
     */
    MCAPI void writeDouble(double);
    /**
     * @hash   -218485372
     * @symbol  ?writeFloat\@BinaryStream\@\@QEAAXM\@Z
     */
    MCAPI void writeFloat(float);
    /**
     * @hash   -1780643544
     * @symbol  ?writeSignedBigEndianInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeSignedBigEndianInt(int);
    /**
     * @hash   254702006
     * @symbol  ?writeSignedInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeSignedInt(int);
    /**
     * @hash   -939332547
     * @symbol  ?writeSignedInt64\@BinaryStream\@\@QEAAX_J\@Z
     */
    MCAPI void writeSignedInt64(__int64);
    /**
     * @hash   92403323
     * @symbol  ?writeSignedShort\@BinaryStream\@\@QEAAXF\@Z
     */
    MCAPI void writeSignedShort(short);
    /**
     * @hash   -283167642
     * @symbol  ?writeString\@BinaryStream\@\@QEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   286636169
     * @symbol  ?writeUnsignedChar\@BinaryStream\@\@QEAAXE\@Z
     */
    MCAPI void writeUnsignedChar(unsigned char);
    /**
     * @hash   -2049692032
     * @symbol  ?writeUnsignedInt\@BinaryStream\@\@QEAAXI\@Z
     */
    MCAPI void writeUnsignedInt(unsigned int);
    /**
     * @hash   -942283047
     * @symbol  ?writeUnsignedInt64\@BinaryStream\@\@QEAAX_K\@Z
     */
    MCAPI void writeUnsignedInt64(unsigned __int64);
    /**
     * @hash   1744258181
     * @symbol  ?writeUnsignedShort\@BinaryStream\@\@QEAAXG\@Z
     */
    MCAPI void writeUnsignedShort(unsigned short);
    /**
     * @hash   -266171566
     * @symbol  ?writeUnsignedVarInt\@BinaryStream\@\@QEAAXI\@Z
     */
    MCAPI void writeUnsignedVarInt(unsigned int);
    /**
     * @hash   -383815003
     * @symbol  ?writeUnsignedVarInt64\@BinaryStream\@\@QEAAX_K\@Z
     */
    MCAPI void writeUnsignedVarInt64(unsigned __int64);
    /**
     * @hash   -1209634184
     * @symbol  ?writeVarInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeVarInt(int);
    /**
     * @hash   1256771269
     * @symbol  ?writeVarInt64\@BinaryStream\@\@QEAAX_J\@Z
     */
    MCAPI void writeVarInt64(__int64);

//private:
    /**
     * @hash   190649149
     * @symbol  ?write\@BinaryStream\@\@AEAAXPEBX_K\@Z
     */
    MCAPI void write(void const *, unsigned __int64);

private:

};