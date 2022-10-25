/**
 * @file  AppPlatform_win32.hpp
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
 * @brief MC class AppPlatform_win32.
 *
 */
class AppPlatform_win32 {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORM_WIN32
public:
    class AppPlatform_win32& operator=(class AppPlatform_win32 const &) = delete;
    AppPlatform_win32(class AppPlatform_win32 const &) = delete;
    AppPlatform_win32() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORM_WIN32
    /**
     * @symbol ?canLaunchUri@AppPlatform_win32@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1481511318
     */
    MCVAPI bool canLaunchUri(std::string const &);
    /**
     * @symbol ?copyImportFileToTempFolder@AppPlatform_win32@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     * @hash   -1626007469
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @symbol ?createWebview@AppPlatform_win32@@UEBA?AV?$shared_ptr@VWebviewInterface@@@std@@$$QEAVPlatformArguments@Webview@@@Z
     * @hash   731993599
     */
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    /**
     * @symbol ?getApplicationId@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1783913999
     */
    MCVAPI std::string getApplicationId() const;
    /**
     * @symbol ?getAssetFileFullPath@AppPlatform_win32@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     * @hash   -714629908
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    /**
     * @symbol ?getBuildPlatform@AppPlatform_win32@@UEBA?AW4BuildPlatform@@XZ
     * @hash   -2128224288
     */
    MCVAPI enum class BuildPlatform getBuildPlatform() const;
    /**
     * @symbol ?getDisplayHeight@AppPlatform_win32@@UEAAHXZ
     * @hash   156411615
     */
    MCVAPI int getDisplayHeight();
    /**
     * @symbol ?getDisplayWidth@AppPlatform_win32@@UEAAHXZ
     * @hash   -1892116874
     */
    MCVAPI int getDisplayWidth();
    /**
     * @symbol ?getEdition@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -620678382
     */
    MCVAPI std::string getEdition() const;
    /**
     * @symbol ?getFreeMemory@AppPlatform_win32@@UEBA_KXZ
     * @hash   -115953517
     */
    MCVAPI unsigned __int64 getFreeMemory() const;
    /**
     * @symbol ?getLoggingPath@AppPlatform_win32@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   236643580
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    /**
     * @symbol ?getMemoryLimit@AppPlatform_win32@@UEBA_KXZ
     * @hash   -509365292
     */
    MCVAPI unsigned __int64 getMemoryLimit() const;
    /**
     * @symbol ?getModelName@AppPlatform_win32@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1511496039
     */
    MCVAPI std::string getModelName();
    /**
     * @symbol ?getOSVersion@AppPlatform_win32@@UEBA?AW4OsVersion@@XZ
     * @hash   1681704416
     */
    MCVAPI enum class OsVersion getOSVersion() const;
    /**
     * @symbol ?getPackageFamilyName@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -219840311
     */
    MCVAPI std::string getPackageFamilyName() const;
    /**
     * @symbol ?getPackagePath@AppPlatform_win32@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   2024351523
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagePath() const;
    /**
     * @symbol ?getPixelsPerMillimeter@AppPlatform_win32@@UEAAMXZ
     * @hash   727180933
     */
    MCVAPI float getPixelsPerMillimeter();
    /**
     * @symbol ?getPlatformString@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1587544708
     */
    MCVAPI std::string getPlatformString() const;
    /**
     * @symbol ?getPlatformTTSEnabled@AppPlatform_win32@@UEBA_NXZ
     * @hash   -318628257
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @symbol ?getPlatformType@AppPlatform_win32@@UEBA?AW4PlatformType@@XZ
     * @hash   -292068282
     */
    MCVAPI enum class PlatformType getPlatformType() const;
    /**
     * @symbol ?getPlatformUIScalingRules@AppPlatform_win32@@EEBA?AW4UIScalingRules@@XZ
     * @hash   1986888715
     */
    MCVAPI enum class UIScalingRules getPlatformUIScalingRules() const;
    /**
     * @symbol ?getRenderSurfaceParameters@AppPlatform_win32@@UEBA?AV?$variant@PEAUHWND__@@Umonostate@std@@@std@@XZ
     * @hash   -1352561782
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    /**
     * @symbol ?getScreenHeight@AppPlatform_win32@@UEBAHXZ
     * @hash   -977732236
     */
    MCVAPI int getScreenHeight() const;
    /**
     * @symbol ?getScreenWidth@AppPlatform_win32@@UEBAHXZ
     * @hash   -1344561809
     */
    MCVAPI int getScreenWidth() const;
    /**
     * @symbol ?getSecureStorage@AppPlatform_win32@@UEAA?AV?$unique_ptr@VSecureStorage@@U?$default_delete@VSecureStorage@@@std@@@std@@XZ
     * @hash   -996449938
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    /**
     * @symbol ?getSecureStorageKey@AppPlatform_win32@@UEAA?AVSecureStorageKey@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -130827770
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    /**
     * @symbol ?getSubPlatformString@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1196939512
     */
    MCVAPI std::string getSubPlatformString() const;
    /**
     * @symbol ?getTotalPhysicalMemory@AppPlatform_win32@@UEBA_KXZ
     * @hash   1812700166
     */
    MCVAPI unsigned __int64 getTotalPhysicalMemory() const;
    /**
     * @symbol ?getUsedMemory@AppPlatform_win32@@UEAA_KXZ
     * @hash   1828000773
     */
    MCVAPI unsigned __int64 getUsedMemory();
    /**
     * @symbol ?hasBuyButtonWhenInvalidLicense@AppPlatform_win32@@UEAA_NXZ
     * @hash   1395521403
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    /**
     * @symbol ?hasFastAlphaTest@AppPlatform_win32@@UEBA_NXZ
     * @hash   855931826
     */
    MCVAPI bool hasFastAlphaTest() const;
    /**
     * @symbol ?isCentennial@AppPlatform_win32@@UEBA_NXZ
     * @hash   -840433063
     */
    MCVAPI bool isCentennial() const;
    /**
     * @symbol ?isOnWifiConnectionTelemetryValue@AppPlatform_win32@@UEAA?AV?$optional@_N@std@@XZ
     * @hash   -68095775
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    /**
     * @symbol ?isWebviewSupported@AppPlatform_win32@@UEBA_NXZ
     * @hash   1125953447
     */
    MCVAPI bool isWebviewSupported() const;
    /**
     * @symbol ?launchUri@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   32115324
     */
    MCVAPI void launchUri(std::string const &);
    /**
     * @symbol ?listAssetFilesIn@AppPlatform_win32@@UEBA?AV?$set@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@U?$less@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@@std@@AEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   -1940960957
     */
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    /**
     * @symbol ?readAssetFile@AppPlatform_win32@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
     * @hash   -1674240092
     */
    MCVAPI std::string readAssetFile(class Core::Path const &);
    /**
     * @symbol ?setFullscreenMode@AppPlatform_win32@@UEAAXW4FullscreenMode@@@Z
     * @hash   1274126335
     */
    MCVAPI void setFullscreenMode(enum class FullscreenMode);
    /**
     * @symbol ?setScreenSize@AppPlatform_win32@@UEAAXHH@Z
     * @hash   -208966138
     */
    MCVAPI void setScreenSize(int, int);
    /**
     * @symbol ?setSecureStorageKey@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSecureStorageKey@@@Z
     * @hash   -266133714
     */
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    /**
     * @symbol ?setWindowSize@AppPlatform_win32@@UEAAXHH@Z
     * @hash   2023956314
     */
    MCVAPI void setWindowSize(int, int);
    /**
     * @symbol ?setWindowText@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1699915146
     */
    MCVAPI void setWindowText(std::string const &);
    /**
     * @symbol ?supportsFliteTTS@AppPlatform_win32@@UEBA_NXZ
     * @hash   388780187
     */
    MCVAPI bool supportsFliteTTS() const;
    /**
     * @symbol ?supportsVibration@AppPlatform_win32@@UEBA_NXZ
     * @hash   -156196026
     */
    MCVAPI bool supportsVibration() const;
    /**
     * @symbol ?updateTextBoxText@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   472062291
     */
    MCVAPI void updateTextBoxText(std::string const &);
    /**
     * @symbol ??1AppPlatform_win32@@UEAA@XZ
     * @hash   -1544629816
     */
    MCVAPI ~AppPlatform_win32();
#endif
    /**
     * @symbol ??0AppPlatform_win32@@QEAA@PEAUHWND__@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1V?$basic_string_span@$$CBD$0?0@gsl@@V?$shared_ptr@VHIDController@@@3@HH@Z
     * @hash   -267334385
     */
    MCAPI AppPlatform_win32(struct HWND__*, std::string const &, std::string const &, class gsl::basic_string_span<char const, -1>, class std::shared_ptr<class HIDController>, int, int);
    /**
     * @symbol ?setupWorkingDirectory@AppPlatform_win32@@SAXXZ
     * @hash   663375541
     */
    MCAPI static void setupWorkingDirectory();

//private:
    /**
     * @symbol ?_fetchOSInformation@AppPlatform_win32@@AEBA?AUOSInformation@@XZ
     * @hash   -498475652
     */
    MCAPI struct OSInformation _fetchOSInformation() const;

private:

};