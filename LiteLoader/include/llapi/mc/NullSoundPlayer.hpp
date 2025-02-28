/**
 * @file  NullSoundPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NullSoundPlayer.
 *
 */
class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const &) = delete;
    NullSoundPlayer(class NullSoundPlayer const &) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NullSoundPlayer();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   653717413
     * @vftbl  15
     * @symbol  ?getCurrentlyPlayingMusicName\@NullSoundPlayer\@\@UEAA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -593633375
     * @vftbl  17
     * @symbol  ?registerLoop\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXAEAULoopingSoundState\@\@\@Z\@3\@MM\@Z
     */
    virtual unsigned __int64 registerLoop(std::string const &, class std::function<void (struct LoopingSoundState &)>, float, float);
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol  __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @symbol  __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @hash   1705378637
     * @vftbl  22
     * @symbol  ?tryGetPlayingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@UPlayingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64) const;
    /**
     * @hash   1925153165
     * @vftbl  23
     * @symbol  ?tryGetLoopingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@ULoopingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @hash   131044254
     * @symbol  ?fadeOut\@NullSoundPlayer\@\@UEAAX_KM\@Z
     */
    MCVAPI void fadeOut(unsigned __int64, float);
    /**
     * @hash   -787588072
     * @symbol  ?fadeToStopMusic\@NullSoundPlayer\@\@UEAAXM\@Z
     */
    MCVAPI void fadeToStopMusic(float);
    /**
     * @hash   -2126602553
     * @symbol  ?getItem\@NullSoundPlayer\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@AEAVSoundItem\@\@\@Z
     */
    MCVAPI bool getItem(std::string const &, class Core::Path const &, class SoundItem &) const;
    /**
     * @hash   426584770
     * @symbol  ?isLoadingMusic\@NullSoundPlayer\@\@UEBA_NXZ
     */
    MCVAPI bool isLoadingMusic() const;
    /**
     * @hash   127140355
     * @symbol  ?isPlayingMusic\@NullSoundPlayer\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCVAPI bool isPlayingMusic(class Core::Path const &) const;
    /**
     * @hash   1165490114
     * @symbol  ?isPlayingMusicEvent\@NullSoundPlayer\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool isPlayingMusicEvent(std::string const &) const;
    /**
     * @hash   1778616712
     * @symbol  ?isPlayingSound\@NullSoundPlayer\@\@UEBA_N_K\@Z
     */
    MCVAPI bool isPlayingSound(unsigned __int64) const;
    /**
     * @hash   1794034162
     * @symbol  ?play\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI unsigned __int64 play(std::string const &, class Vec3 const &, float, float);
    /**
     * @hash   317282298
     * @symbol  ?playAttached\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAUSoundInstanceProperties\@\@\@Z\@3\@\@Z
     */
    MCVAPI unsigned __int64 playAttached(std::string const &, class std::function<void (struct SoundInstanceProperties &)> &&);
    /**
     * @hash   -7642573
     * @symbol  ?playMusic\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MAEAI\@Z
     */
    MCVAPI void playMusic(std::string const &, float, unsigned int &);
    /**
     * @hash   855359589
     * @symbol  ?playMusic\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCVAPI void playMusic(std::string const &, float);
    /**
     * @hash   1548520236
     * @symbol  ?playUI\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MM\@Z
     */
    MCVAPI unsigned __int64 playUI(std::string const &, float, float);
    /**
     * @hash   734768838
     * @symbol  ?setMusicVolumeMultiplier\@NullSoundPlayer\@\@UEAAXM\@Z
     */
    MCVAPI void setMusicVolumeMultiplier(float);
    /**
     * @hash   -1225615860
     * @symbol  ?stop\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void stop(std::string const &);
    /**
     * @hash   645246804
     * @symbol  ?stop\@NullSoundPlayer\@\@UEAAX_K\@Z
     */
    MCVAPI void stop(unsigned __int64);
    /**
     * @hash   112368143
     * @symbol  ?stopAllDelayedSoundActions\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopAllDelayedSoundActions();
    /**
     * @hash   -1255296959
     * @symbol  ?stopAllSounds\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopAllSounds();
    /**
     * @hash   -798245087
     * @symbol  ?stopMusic\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopMusic();
    /**
     * @hash   -2058515114
     * @symbol  ?unregisterLoop\@NullSoundPlayer\@\@UEAAX_K_N\@Z
     */
    MCVAPI void unregisterLoop(unsigned __int64, bool);
#endif

};