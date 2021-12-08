// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SHPortalRoom : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHPORTALROOM
public:
    class SHPortalRoom& operator=(class SHPortalRoom const&) = delete;
    SHPortalRoom(class SHPortalRoom const&) = delete;
    SHPortalRoom() = delete;
#endif

public:
    /*0*/ virtual ~SHPortalRoom();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*7*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

protected:

private:

};