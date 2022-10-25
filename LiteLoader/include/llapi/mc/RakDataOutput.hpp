/**
 * @file  RakDataOutput.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakDataOutput.
 *
 */
class RakDataOutput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKDATAOUTPUT
public:
    class RakDataOutput& operator=(class RakDataOutput const &) = delete;
    RakDataOutput(class RakDataOutput const &) = delete;
    RakDataOutput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1476750379
     */
    virtual ~RakDataOutput();
    /**
     * @vftbl  1
     * @symbol ?writeString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1182203149
     */
    virtual void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @vftbl  2
     * @symbol ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -428157305
     */
    virtual void writeLongString(class gsl::basic_string_span<char const, -1>);
    /**
     * @vftbl  3
     * @symbol ?writeFloat@BytesDataOutput@@UEAAXM@Z
     * @hash   -1764990491
     */
    virtual void writeFloat(float);
    /**
     * @vftbl  4
     * @symbol ?writeDouble@BytesDataOutput@@UEAAXN@Z
     * @hash   -646429443
     */
    virtual void writeDouble(double);
    /**
     * @vftbl  5
     * @symbol ?writeByte@BytesDataOutput@@UEAAXD@Z
     * @hash   820137761
     */
    virtual void writeByte(char);
    /**
     * @vftbl  6
     * @symbol ?writeShort@BytesDataOutput@@UEAAXF@Z
     * @hash   718467589
     */
    virtual void writeShort(short);
    /**
     * @vftbl  7
     * @symbol ?writeInt@BytesDataOutput@@UEAAXH@Z
     * @hash   -1076605857
     */
    virtual void writeInt(int);
    /**
     * @vftbl  8
     * @symbol ?writeLongLong@BytesDataOutput@@UEAAX_J@Z
     * @hash   -1495531598
     */
    virtual void writeLongLong(__int64);
    /**
     * @vftbl  9
     * @symbol ?writeBytes@RakDataOutput@@UEAAXPEBX_K@Z
     * @hash   -927721361
     */
    virtual void writeBytes(void const *, unsigned __int64);

};