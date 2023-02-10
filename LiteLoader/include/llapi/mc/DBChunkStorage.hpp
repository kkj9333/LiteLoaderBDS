/**
 * @file  DBChunkStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ChunkSource.hpp"
#include "ConsoleChunkBlender.hpp"
#include "LevelChunk.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DBChunkStorage.
 *
 */
class DBChunkStorage : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBCHUNKSTORAGE
public:
    class DBChunkStorage& operator=(class DBChunkStorage const &) = delete;
    DBChunkStorage(class DBChunkStorage const &) = delete;
    DBChunkStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DBChunkStorage();
    /**
     * @hash   767631761
     * @vftbl  1
     * @symbol  ?shutdown\@DBChunkStorage\@\@UEAAXXZ
     */
    virtual void shutdown();
    /**
     * @hash   -846288193
     * @vftbl  2
     * @symbol  ?isShutdownDone\@DBChunkStorage\@\@UEAA_NXZ
     */
    virtual bool isShutdownDone();
    /**
     * @hash   -495542275
     * @vftbl  5
     * @symbol  ?isChunkKnown\@DBChunkStorage\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkKnown(class ChunkPos const &);
    /**
     * @hash   -1744427335
     * @vftbl  6
     * @symbol  ?isChunkSaved\@DBChunkStorage\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkSaved(class ChunkPos const &);
    /**
     * @hash   -132782653
     * @vftbl  9
     * @symbol  ?postProcess\@DBChunkStorage\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    virtual bool postProcess(class ChunkViewSource &);
    /**
     * @hash   -2085755169
     * @vftbl  10
     * @symbol  ?checkAndReplaceChunk\@DBChunkStorage\@\@UEAAXAEAVChunkViewSource\@\@AEAVLevelChunk\@\@\@Z
     */
    virtual void checkAndReplaceChunk(class ChunkViewSource &, class LevelChunk &);
    /**
     * @hash   -932379981
     * @vftbl  11
     * @symbol  ?loadChunk\@DBChunkStorage\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    virtual void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   989802042
     * @vftbl  13
     * @symbol  ?saveLiveChunk\@DBChunkStorage\@\@UEAA_NAEAVLevelChunk\@\@\@Z
     */
    virtual bool saveLiveChunk(class LevelChunk &);
    /**
     * @hash   729900074
     * @vftbl  14
     * @symbol  ?writeEntityChunkTransfer\@DBChunkStorage\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    virtual void writeEntityChunkTransfer(class LevelChunk &);
    /**
     * @hash   -1520503614
     * @vftbl  15
     * @symbol  ?writeEntityChunkTransfersToUnloadedChunk\@DBChunkStorage\@\@UEAAXAEBVChunkKey\@\@AEBV?$vector\@UActorUnloadedChunkTransferEntry\@\@V?$allocator\@UActorUnloadedChunkTransferEntry\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void writeEntityChunkTransfersToUnloadedChunk(class ChunkKey const &, std::vector<struct ActorUnloadedChunkTransferEntry> const &);
    /**
     * @hash   -1174665359
     * @vftbl  16
     * @symbol  ?hintDiscardBatchBegin\@DBChunkStorage\@\@UEAAXXZ
     */
    virtual void hintDiscardBatchBegin();
    /**
     * @hash   724977763
     * @vftbl  17
     * @symbol  ?hintDiscardBatchEnd\@DBChunkStorage\@\@UEAAXXZ
     */
    virtual void hintDiscardBatchEnd();
    /**
     * @hash   103660322
     * @vftbl  18
     * @symbol  ?acquireDiscarded\@DBChunkStorage\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @hash   726607954
     * @vftbl  20
     * @symbol  ?flushPendingDiscardedChunkWrites\@DBChunkStorage\@\@UEAAXXZ
     */
    virtual void flushPendingDiscardedChunkWrites();
    /**
     * @hash   -1704913785
     * @vftbl  21
     * @symbol  ?flushThreadBatch\@DBChunkStorage\@\@UEAAXXZ
     */
    virtual void flushThreadBatch();
    /**
     * @hash   -387165019
     * @vftbl  27
     * @symbol  ?tryGetBlendingDataProvider\@DBChunkStorage\@\@UEAA?AV?$unique_ptr\@VBlendingDataProvider\@\@U?$default_delete\@VBlendingDataProvider\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();
    /**
     * @hash   -1542988075
     * @vftbl  28
     * @symbol  ?loadLevelChunkMetaDataDictionary\@DBChunkStorage\@\@UEAA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    virtual class std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();
    /**
     * @hash   1918700218
     * @symbol  ??0DBChunkStorage\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@AEAVDBStorage\@\@AEAVScheduler\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI DBChunkStorage(std::unique_ptr<class ChunkSource>, class DBStorage &, class Scheduler &, class Experiments const &);
    /**
     * @hash   -1115135211
     * @symbol  ?freeCaches\@DBChunkStorage\@\@QEAAXXZ
     */
    MCAPI void freeCaches();
    /**
     * @hash   823599724
     * @symbol  ?_getBlenderMode\@DBChunkStorage\@\@SA?AW4BlenderMode\@ConsoleChunkBlender\@\@AEBVLevelChunk\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static enum class ConsoleChunkBlender::BlenderMode _getBlenderMode(class LevelChunk const &, class Experiments const &);
    /**
     * @hash   390761547
     * @symbol  ?deserializeActorStorageToString\@DBChunkStorage\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NAEBV23\@V?$function\@$$A6A_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@3\@\@Z
     */
    MCAPI static std::string deserializeActorStorageToString(bool, std::string const &, class std::function<bool (class gsl::basic_string_span<char const, -1>, std::string &)>);

//private:
    /**
     * @hash   -1287520226
     * @symbol  ?_cacheSeamlessChunkBlendingData\@DBChunkStorage\@\@AEAA?AU?$pair\@_NV?$shared_ptr\@VBlendingData\@\@\@std\@\@\@std\@\@VChunkPos\@\@_NV?$shared_ptr\@VBlendingData\@\@\@3\@\@Z
     */
    MCAPI struct std::pair<bool, class std::shared_ptr<class BlendingData>> _cacheSeamlessChunkBlendingData(class ChunkPos, bool, class std::shared_ptr<class BlendingData>);
    /**
     * @hash   -1197818279
     * @symbol  ?_checkSubChunksUseAbsoluteIndices\@DBChunkStorage\@\@AEBA_NVDBChunkStorageKey\@\@AEBVLevelChunk\@\@AEA_N\@Z
     */
    MCAPI bool _checkSubChunksUseAbsoluteIndices(class DBChunkStorageKey, class LevelChunk const &, bool &) const;
    /**
     * @hash   -1087071191
     * @symbol  ?_deserializeIndependentActorStorage\@DBChunkStorage\@\@AEAAXAEAVLevelChunk\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _deserializeIndependentActorStorage(class LevelChunk &, std::string const &);
    /**
     * @hash   1723174104
     * @symbol  ?_getChunkNeighbors\@DBChunkStorage\@\@AEAA?AVNeighbors\@LevelChunk\@\@VChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class LevelChunk::Neighbors _getChunkNeighbors(class ChunkPos, class AutomaticID<class Dimension, int>);
    /**
     * @hash   -329563316
     * @symbol  ?_getLevelChunkFormat\@DBChunkStorage\@\@AEAA?AV?$optional\@W4LevelChunkFormat\@\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<enum class LevelChunkFormat> _getLevelChunkFormat(class gsl::basic_string_span<char const, -1>, std::string &);
    /**
     * @hash   521926346
     * @symbol  ?_hasChunk\@DBChunkStorage\@\@AEAA_NAEBVDBChunkStorageKey\@\@\@Z
     */
    MCAPI bool _hasChunk(class DBChunkStorageKey const &);
    /**
     * @hash   -1667452593
     * @symbol  ?_hasChunkUncached\@DBChunkStorage\@\@AEAA_NAEBVDBChunkStorageKey\@\@\@Z
     */
    MCAPI bool _hasChunkUncached(class DBChunkStorageKey const &);
    /**
     * @hash   -529764973
     * @symbol  ?_levelChunkCanBeUsedForBlending\@DBChunkStorage\@\@AEAA?AU?$pair\@_NV?$unique_ptr\@UPersistentBlendData\@\@U?$default_delete\@UPersistentBlendData\@\@\@std\@\@\@std\@\@\@std\@\@AEBVDBChunkStorageKey\@\@\@Z
     */
    MCAPI struct std::pair<bool, std::unique_ptr<struct PersistentBlendData>> _levelChunkCanBeUsedForBlending(class DBChunkStorageKey const &);
    /**
     * @hash   1158521717
     * @symbol  ?_loadChunkFromDB\@DBChunkStorage\@\@AEAA_NAEAVLevelChunk\@\@0AEAVChunkViewSource\@\@\@Z
     */
    MCAPI bool _loadChunkFromDB(class LevelChunk &, class LevelChunk &, class ChunkViewSource &);
    /**
     * @hash   -373420488
     * @symbol  ?_saveBlendData\@DBChunkStorage\@\@AEBAXAEAVLevelStorageWriteBatch\@\@AEBV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UPersistentBlendData\@\@\@Z
     */
    MCAPI void _saveBlendData(class LevelStorageWriteBatch &, class gsl::basic_string_span<char const, -1> const &, std::string &, struct PersistentBlendData) const;
    /**
     * @hash   1867069905
     * @symbol  ?_serializeChunk\@DBChunkStorage\@\@AEAAXAEAVLevelChunk\@\@AEAVLevelStorageWriteBatch\@\@_N\@Z
     */
    MCAPI void _serializeChunk(class LevelChunk &, class LevelStorageWriteBatch &, bool);
    /**
     * @hash   -2031851986
     * @symbol  ?_serializeEntities\@DBChunkStorage\@\@AEAAXAEAVLevelChunk\@\@AEAVLevelStorageWriteBatch\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void _serializeEntities(class LevelChunk &, class LevelStorageWriteBatch &, std::string &, bool);
    /**
     * @hash   1595933888
     * @symbol  ?_tryGetBlendingDataForChunk\@DBChunkStorage\@\@AEAA?AU?$pair\@_NV?$shared_ptr\@VBlendingData\@\@\@std\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI struct std::pair<bool, class std::shared_ptr<class BlendingData>> _tryGetBlendingDataForChunk(class ChunkPos const &);
    /**
     * @hash   1976073634
     * @symbol  ?_upgradeActorStorage\@DBChunkStorage\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VChunkKey\@\@AEAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI std::string _upgradeActorStorage(class ChunkKey, class gsl::basic_string_span<char const, -1> &);
    /**
     * @hash   93298886
     * @symbol  ?_writeActorDigest\@DBChunkStorage\@\@AEAAXAEAVLevelStorageWriteBatch\@\@AEBVChunkKey\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _writeActorDigest(class LevelStorageWriteBatch &, class ChunkKey const &, std::string const &);
    /**
     * @hash   343254293
     * @symbol  ?_writeActorDigestFormatVersion\@DBChunkStorage\@\@AEAAXAEAVLevelStorageWriteBatch\@\@AEBVChunkKey\@\@W4ActorDigestFormat\@\@\@Z
     */
    MCAPI void _writeActorDigestFormatVersion(class LevelStorageWriteBatch &, class ChunkKey const &, enum class ActorDigestFormat);
    /**
     * @hash   -1001508410
     * @symbol  ?_writeDiscardChunksBatch\@DBChunkStorage\@\@AEAAXXZ
     */
    MCAPI void _writeDiscardChunksBatch();
    /**
     * @hash   1518474999
     * @symbol  ?_deserializeChunkActorStorageKeys\@DBChunkStorage\@\@CA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVIDataInput\@\@\@Z
     */
    MCAPI static std::vector<std::string> _deserializeChunkActorStorageKeys(class IDataInput &);

private:
    /**
     * @hash   260192701
     * @symbol  ?threadBatch\@DBChunkStorage\@\@0V?$ThreadLocalObject\@VLevelStorageWriteBatch\@\@V?$allocator\@VLevelStorageWriteBatch\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class LevelStorageWriteBatch, class std::allocator<class LevelStorageWriteBatch>> threadBatch;
    /**
     * @hash   889224683
     * @symbol  ?threadBuffer\@DBChunkStorage\@\@0V?$ThreadLocalObject\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::string, class std::allocator<std::string>> threadBuffer;

};