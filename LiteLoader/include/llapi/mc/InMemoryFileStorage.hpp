/**
 * @file  InMemoryFileStorage.hpp
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
 * @brief MC class InMemoryFileStorage.
 *
 */
class InMemoryFileStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYFILESTORAGE
public:
    class InMemoryFileStorage& operator=(class InMemoryFileStorage const &) = delete;
    InMemoryFileStorage(class InMemoryFileStorage const &) = delete;
    InMemoryFileStorage() = delete;
#endif

public:
    /**
     * @hash   385611751
     * @symbol  ??0InMemoryFileStorage\@\@QEAA\@PEAVEnv\@leveldb\@\@\@Z
     */
    MCAPI InMemoryFileStorage(class leveldb::Env *);
    /**
     * @hash   -213331894
     * @symbol  ?createFile\@InMemoryFileStorage\@\@QEAA?AV?$shared_ptr\@VInMemoryFile\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class std::shared_ptr<class InMemoryFile> createFile(class Core::Path const &);
    /**
     * @hash   173500601
     * @symbol  ?deleteFile\@InMemoryFileStorage\@\@QEAA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool deleteFile(class Core::Path const &);
    /**
     * @hash   571175119
     * @symbol  ?findFile\@InMemoryFileStorage\@\@QEAA_NAEBVPath\@Core\@\@AEAV?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI bool findFile(class Core::Path const &, class std::shared_ptr<class InMemoryFile> &);
    /**
     * @hash   -1718803251
     * @symbol  ?flushToDisk\@InMemoryFileStorage\@\@QEAAXXZ
     */
    MCAPI void flushToDisk();
    /**
     * @hash   1405199571
     * @symbol  ?populateFileList\@InMemoryFileStorage\@\@QEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void populateFileList(std::vector<std::string> &);
    /**
     * @hash   739255749
     * @symbol  ??1InMemoryFileStorage\@\@QEAA\@XZ
     */
    MCAPI ~InMemoryFileStorage();

};