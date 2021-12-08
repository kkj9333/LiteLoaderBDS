// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Dimension {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSION
public:
    class Dimension& operator=(class Dimension const&) = delete;
    Dimension(class Dimension const&) = delete;
    Dimension() = delete;
#endif

public:
    /*
    inline bool forceCheckAllNeighChunkSavedStat() const{
        bool (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isValidSpawn(int a0, int a1) const{
        bool (Dimension::*rv)(int, int) const;
        *((void**)&rv) = dlsym("?isValidSpawn@Dimension@@UEBA_NHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline bool hasBedrockFog(){
        bool (Dimension::*rv)();
        *((void**)&rv) = dlsym("?hasBedrockFog@Dimension@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool isFoggyAt(int a0, int a1) const{
        bool (Dimension::*rv)(int, int) const;
        *((void**)&rv) = dlsym("?isFoggyAt@Dimension@@UEBA_NHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline int getDefaultBiome() const{
        int (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?getDefaultBiome@Dimension@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getSpawnYPosition() const{
        int (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?getSpawnYPosition@Dimension@@UEBAHXZ");
        return (this->*rv)();
    }
    inline bool mayRespawnViaBed() const{
        bool (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?mayRespawnViaBed@Dimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasGround() const{
        bool (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?hasGround@Dimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isNaturalDimension() const{
        bool (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?isNaturalDimension@Dimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool showSky() const{
        bool (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?showSky@Dimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline short getCloudHeight() const{
        short (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?getCloudHeight@Dimension@@UEBAFXZ");
        return (this->*rv)();
    }
    inline class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const{
        class BaseLightTextureImageBuilder* (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ");
        return (this->*rv)();
    }
    inline class BlockPos getSpawnPos() const{
        class BlockPos (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ");
        return (this->*rv)();
    }
    inline  ~Dimension(){
         (Dimension::*rv)();
        *((void**)&rv) = dlsym("??1Dimension@@UEAA@XZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy(){
        std::unique_ptr<class ChunkBuildOrderPolicyBase> (Dimension::*rv)();
        *((void**)&rv) = dlsym("?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline void deserialize(class CompoundTag const& a0){
        void (Dimension::*rv)(class CompoundTag const&);
        *((void**)&rv) = dlsym("?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0));
    }
    inline class mce::Color getBrightnessDependentFogColor(class mce::Color const& a0, float a1) const{
        class mce::Color (Dimension::*rv)(class mce::Color const&, float) const;
        *((void**)&rv) = dlsym("?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z");
        return (this->*rv)(std::forward<class mce::Color const&>(a0), std::forward<float>(a1));
    }
    inline class DimensionBrightnessRamp const& getBrightnessRamp() const{
        class DimensionBrightnessRamp const& (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ");
        return (this->*rv)();
    }
    inline float getClearColorScale(){
        float (Dimension::*rv)();
        *((void**)&rv) = dlsym("?getClearColorScale@Dimension@@UEAAMXZ");
        return (this->*rv)();
    }
    inline float getSunIntensity(float a0, class Vec3 const& a1, float a2) const{
        float (Dimension::*rv)(float, class Vec3 const&, float) const;
        *((void**)&rv) = dlsym("?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z");
        return (this->*rv)(std::forward<float>(a0), std::forward<class Vec3 const&>(a1), std::forward<float>(a2));
    }
    inline float getTimeOfDay(int a0, float a1) const{
        float (Dimension::*rv)(int, float) const;
        *((void**)&rv) = dlsym("?getTimeOfDay@Dimension@@MEBAMHM@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<float>(a1));
    }
    inline void init(){
        void (Dimension::*rv)();
        *((void**)&rv) = dlsym("?init@Dimension@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool is2DPositionRelevantForPlayer(class BlockPos const& a0, class Player& a1) const{
        bool (Dimension::*rv)(class BlockPos const&, class Player&) const;
        *((void**)&rv) = dlsym("?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Player&>(a1));
    }
    inline bool isActorRelevantForPlayer(class Player& a0, class Actor const& a1) const{
        bool (Dimension::*rv)(class Player&, class Actor const&) const;
        *((void**)&rv) = dlsym("?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<class Actor const&>(a1));
    }
    inline bool isDay() const{
        bool (Dimension::*rv)() const;
        *((void**)&rv) = dlsym("?isDay@Dimension@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void onBlockChanged(class BlockSource& a0, class BlockPos const& a1, unsigned int a2, class Block const& a3, class Block const& a4, int a5, struct ActorBlockSyncMessage const* a6, int \/*enum enum BlockChangedEventTarget*\/ a7){
        void (Dimension::*rv)(class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, int \/*enum enum BlockChangedEventTarget*\/);
        *((void**)&rv) = dlsym("?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned int>(a2), std::forward<class Block const&>(a3), std::forward<class Block const&>(a4), std::forward<int>(a5), std::forward<struct ActorBlockSyncMessage const*>(a6), std::forward<int \/*enum enum BlockChangedEventTarget*\/>(a7));
    }
    inline void onBlockEvent(class BlockSource& a0, int a1, int a2, int a3, int a4, int a5){
        void (Dimension::*rv)(class BlockSource&, int, int, int, int, int);
        *((void**)&rv) = dlsym("?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<int>(a3), std::forward<int>(a4), std::forward<int>(a5));
    }
    inline void onChunkLoaded(class ChunkSource& a0, class LevelChunk& a1){
        void (Dimension::*rv)(class ChunkSource&, class LevelChunk&);
        *((void**)&rv) = dlsym("?onChunkLoaded@Dimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class ChunkSource&>(a0), std::forward<class LevelChunk&>(a1));
    }
    inline void onLevelDestruction(std::string const& a0){
        void (Dimension::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    inline void sendBroadcast(class Packet const& a0, class Player* a1){
        void (Dimension::*rv)(class Packet const&, class Player*);
        *((void**)&rv) = dlsym("?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Packet const&>(a0), std::forward<class Player*>(a1));
    }
    inline void serialize(class CompoundTag& a0) const{
        void (Dimension::*rv)(class CompoundTag&) const;
        *((void**)&rv) = dlsym("?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline void startLeaveGame(){
        void (Dimension::*rv)();
        *((void**)&rv) = dlsym("?startLeaveGame@Dimension@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (Dimension::*rv)();
        *((void**)&rv) = dlsym("?tick@Dimension@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tickRedstone(){
        void (Dimension::*rv)();
        *((void**)&rv) = dlsym("?tickRedstone@Dimension@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI Dimension(class ILevel&, class AutomaticID<class Dimension, int>, class DimensionHeightRange, class Scheduler&, std::string);
    MCAPI void _onNewTickingEntity(class Actor&);
    MCAPI void addWither(struct ActorUniqueID const&);
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
    MCAPI class Actor* fetchEntity(struct ActorUniqueID, bool);
    MCAPI class Player* fetchNearestAttackablePlayer(class Actor&, float);
    MCAPI class Player* fetchNearestAttackablePlayer(class BlockPos, float, class Actor*);
    MCAPI class Player* fetchNearestPlayer(class Actor&, float);
    MCAPI class Player* fetchNearestPlayer(float, float, float, float, bool);
    MCAPI class Player* findPlayer(class std::function<bool (class Player const& )>) const;
    MCAPI void flagEntityforChunkMove(class Actor&);
    MCAPI void flushLevelChunkGarbageCollector();
    MCAPI void flushRunTimeLighting();
    MCAPI void forEachPlayer(class std::function<bool (class Player& )>) const;
    MCAPI void forceSaveVillageManager();
    MCAPI class BlockEventDispatcher& getBlockEventDispatcher();
    MCAPI class BlockSource& getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD() const;
    MCAPI class ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy();
    MCAPI class gsl::not_null<class ChunkLoadActionList* > getChunkLoadActionList();
    MCAPI class ChunkSource& getChunkSource() const;
    MCAPI class CircuitSystem& getCircuitSystem();
    MCAPI class gsl::not_null<class DelayActionList* > getDelayActionList();
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    MCAPI class std::unordered_map<struct ActorUniqueID, class WeakEntityRef, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef> > >& getEntityIdMap();
    MCAPI class std::unordered_map<struct ActorUniqueID, class WeakEntityRef, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef> > > const& getEntityIdMapConst() const;
    MCAPI class FeatureTerrainAdjustments& getFeatureTerrainAdjustments();
    MCAPI short getHeight() const;
    MCAPI class DimensionHeightRange const& getHeightRange() const;
    MCAPI class Level& getLevel() const;
    MCAPI class Level const& getLevelConst() const;
    MCAPI short getMinHeight() const;
    MCAPI float getMoonBrightness() const;
    MCAPI int getMoonPhase() const;
    MCAPI float getPopCap(int, bool) const;
    MCAPI struct Brightness getSkyDarken() const;
    MCAPI float getSunAngle(float) const;
    MCAPI class TickingAreaList& getTickingAreas();
    MCAPI class TickingAreaList const& getTickingAreasConst() const;
    MCAPI float getTimeOfDay(float) const;
    MCAPI std::unique_ptr<class VillageManager> const& getVillageManager() const;
    MCAPI class Weather& getWeather() const;
    MCAPI class WorldGenerator* getWorldGenerator() const;
    MCAPI bool hasCeiling() const;
    MCAPI bool hasSkylight() const;
    MCAPI bool isChunkKnown(class ChunkPos const&) const;
    MCAPI bool isLeaveGameDone();
    MCAPI bool isRedstoneTick();
    MCAPI bool isUltraWarm() const;
    MCAPI void onStaticTickingAreaAdded(std::string const&);
    MCAPI void processTickingAreaRemoves();
    MCAPI void processTickingAreaUpdates();
    MCAPI void registerEntity(struct ActorUniqueID const&, class WeakRefT<struct EntityRefTraits>);
    MCAPI void removeActorByID(struct ActorUniqueID const&);
    MCAPI void removeWither(struct ActorUniqueID const&);
    MCAPI void sendPacketForEntity(class Actor const&, class Packet const&, class Player const*);
    MCAPI void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*);
    MCAPI void sendPacketToClients(class Packet const&, std::vector<struct NetworkIdentifierWithSubId>);
    MCAPI void setCeiling(bool);
    MCAPI void setSkylight(bool);
    MCAPI void setUltraWarm(bool);
    MCAPI void transferEntity(class Vec3 const&, std::unique_ptr<class CompoundTag>, bool);
    MCAPI void transferEntityToUnloadedChunk(class Vec3 const&, std::unique_ptr<class CompoundTag>);
    MCAPI bool tryAssignNewRegionAt(class ChunkPos const&, class Actor&);
    MCAPI void tryGarbageCollectStructures();
    MCAPI class BlockSource* tryGetClosestPublicRegion(class ChunkPos const&) const;
    MCAPI void tryLoadLimboEntities(class ChunkPos const&);
    MCAPI void unregisterEntity(struct ActorUniqueID const&);
    MCAPI static enum LimboEntitiesVersion const CurrentLimboEntitiesVersion;
    MCAPI static unsigned int const LOW_CPU_PACKET_BLOCK_LIMIT;
    MCAPI static float const* const MOON_BRIGHTNESS_PER_PHASE;
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1> > const STRUCTURE_PRUNE_INTERVAL;

protected:
    MCAPI void _completeEntityTransfer(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>, bool);

private:
    MCAPI void _estimateLevelChunkMemory() const;
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const&);
    MCAPI void _sendBlocksChangedPackets();
    MCAPI void _tickEntityChunkMoves();

};