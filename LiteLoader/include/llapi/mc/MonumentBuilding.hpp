/**
 * @file  MonumentBuilding.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MonumentBuilding.
 *
 */
class MonumentBuilding : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONUMENTBUILDING
public:
    class MonumentBuilding& operator=(class MonumentBuilding const &) = delete;
    MonumentBuilding(class MonumentBuilding const &) = delete;
    MonumentBuilding() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MonumentBuilding();
    /**
     * @hash   -1977235840
     * @vftbl  2
     * @symbol  ?getType\@MonumentBuilding\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   2091687736
     * @vftbl  4
     * @symbol  ?postProcess\@MonumentBuilding\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -655445852
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@MonumentBuilding\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1187914740
     * @symbol  ??0MonumentBuilding\@\@QEAA\@AEAVRandom\@\@FHHAEAH\@Z
     */
    MCAPI MonumentBuilding(class Random &, short, int, int, int &);

//private:
    /**
     * @hash   -1645393478
     * @symbol  ?generateEntranceArchs\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateEntranceArchs(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   317883159
     * @symbol  ?generateEntranceWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateEntranceWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -2052200218
     * @symbol  ?generateLowerWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateLowerWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1177328296
     * @symbol  ?generateMiddleWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateMiddleWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1802239991
     * @symbol  ?generateRoofPiece\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateRoofPiece(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1114625063
     * @symbol  ?generateRoomGraph\@MonumentBuilding\@\@AEAA?AV?$vector\@V?$shared_ptr\@VRoomDefinition\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VRoomDefinition\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI std::vector<class std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random &);
    /**
     * @hash   -1536538155
     * @symbol  ?generateUpperWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateUpperWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1419900063
     * @symbol  ?generateWing\@MonumentBuilding\@\@AEAAX_NHAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateWing(bool, int, class BlockSource &, class Random &, class BoundingBox const &);

private:

};