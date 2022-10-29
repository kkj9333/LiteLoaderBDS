/**
 * @file  HC_WEBSOCKET.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure HC_WEBSOCKET.
 *
 */
struct HC_WEBSOCKET {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HC_WEBSOCKET
public:
    struct HC_WEBSOCKET& operator=(struct HC_WEBSOCKET const &) = delete;
    HC_WEBSOCKET(struct HC_WEBSOCKET const &) = delete;
    HC_WEBSOCKET() = delete;
#endif

public:
    /**
     * @symbol ?AddRef@HC_WEBSOCKET@@QEAAXXZ
     * @hash   -1597762603
     */
    MCAPI void AddRef();
    /**
     * @symbol ?Connect@HC_WEBSOCKET@@QEAAJPEBD0PEAUXAsyncBlock@@@Z
     * @hash   -1177287846
     */
    MCAPI long Connect(char const *, char const *, struct XAsyncBlock *);
    /**
     * @symbol ?DecRef@HC_WEBSOCKET@@QEAAXXZ
     * @hash   -578216123
     */
    MCAPI void DecRef();
    /**
     * @symbol ?Disconnect@HC_WEBSOCKET@@QEAAJXZ
     * @hash   925617723
     */
    MCAPI long Disconnect();
    /**
     * @symbol ?Headers@HC_WEBSOCKET@@QEBAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@Uhttp_header_compare@@V?$http_stl_allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@@std@@@@@std@@XZ
     * @hash   1044331281
     */
    MCAPI class std::map<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, struct http_header_compare, class http_stl_allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>>>> const & Headers() const;
    /**
     * @symbol ?ProxyDecryptsHttps@HC_WEBSOCKET@@QEBA?B_NXZ
     * @hash   1301866816
     */
    MCAPI bool const ProxyDecryptsHttps() const;
    /**
     * @symbol ?ProxyUri@HC_WEBSOCKET@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
     * @hash   1933209761
     */
    MCAPI class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const & ProxyUri() const;
    /**
     * @symbol ?Send@HC_WEBSOCKET@@QEAAJPEBDPEAUXAsyncBlock@@@Z
     * @hash   1270845801
     */
    MCAPI long Send(char const *, struct XAsyncBlock *);
    /**
     * @symbol ?Uri@HC_WEBSOCKET@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
     * @hash   -1022761729
     */
    MCAPI class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const & Uri() const;
    /**
     * @symbol ?BinaryMessageFunc@HC_WEBSOCKET@@SAXPEAU1@PEBEIPEAX@Z
     * @hash   -1539677532
     */
    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET *, unsigned char const *, unsigned int, void *);
    /**
     * @symbol ?CloseFunc@HC_WEBSOCKET@@SAXPEAU1@W4HCWebSocketCloseStatus@@PEAX@Z
     * @hash   441065392
     */
    MCAPI static void CloseFunc(struct HC_WEBSOCKET *, enum class HCWebSocketCloseStatus, void *);
    /**
     * @symbol ?MessageFunc@HC_WEBSOCKET@@SAXPEAU1@PEBDPEAX@Z
     * @hash   -1014750419
     */
    MCAPI static void MessageFunc(struct HC_WEBSOCKET *, char const *, void *);

};