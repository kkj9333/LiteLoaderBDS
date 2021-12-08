// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFACTORY
public:
    class ActorFactory& operator=(class ActorFactory const&) = delete;
    ActorFactory(class ActorFactory const&) = delete;
    ActorFactory() = delete;
#endif

public:
    MCAPI ActorFactory(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level> >);
    MCAPI void applyEntityInitializer(struct ActorDefinitionIdentifier const&, class EntityContext&) const;
    MCAPI std::vector<struct std::pair<std::string, struct ActorDefinitionIdentifier const* >> buildSummonEntityTypeEnum(class Experiments const&) const;
    MCAPI void clearDefinitionGroup();
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornEntity(struct ActorDefinitionIdentifier const&, class BlockPos const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornEntity(struct ActorDefinitionIdentifier const&, class Actor*);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createEntity(std::string const&, struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec2 const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSpawnedEntity(struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec2 const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSummonedEntity(struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createTransformedEntity(struct ActorDefinitionIdentifier const&, class Actor*);
    MCAPI class ActorGoalFactory& getGoalFactory();
    MCAPI class OwnerPtrT<struct EntityRefTraits> loadEntity(class CompoundTag*, class DataLoadHelper&, class DimensionHeightRange const&, class LevelChunk const*);
    MCAPI void setDefinitionGroup(class ActorDefinitionGroup*);
    MCAPI void setEntityInitializer(class std::shared_ptr<class IEntityInitializer>);
    MCAPI ~ActorFactory();
    MCAPI static void clearEntityMappings();
    MCAPI static class Actor* fixLegacyEntity(class BlockSource&, class CompoundTag const*);

protected:

private:
    MCAPI void _buildSummonableActorList(class Experiments const&, class std::function<void (std::string const& , struct ActorFactoryData const& )>) const;
    MCAPI class OwnerPtrT<struct EntityRefTraits> _constructActor(struct ActorDefinitionIdentifier const&, class Vec3 const&, class Vec2 const&) const;
    MCAPI void _initPropertiesOnActor(class Actor&) const;
    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup*);
    MCAPI void _loadDefinitionsHelper();
    MCAPI bool _validateActorData(class CompoundTag&, struct ActorDefinitionIdentifier&, class Vec3&, class LevelChunk const*) const;
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;

};