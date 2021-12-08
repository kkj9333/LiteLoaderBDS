// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EmptyBlockGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMPTYBLOCKGAMEPLAYHANDLER
public:
    class EmptyBlockGameplayHandler& operator=(class EmptyBlockGameplayHandler const&) = delete;
    EmptyBlockGameplayHandler(class EmptyBlockGameplayHandler const&) = delete;
    EmptyBlockGameplayHandler() = delete;
#endif

public:
    /*0*/ virtual ~EmptyBlockGameplayHandler();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual int /*enum enum HandlerResult*/ handleBlockPatternPostEvent(struct BlockPatternEvent const&);
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual struct GameplayHandlerResult<class std::optional<std::string > > handleCraftUISetResultName(struct CraftUISetResultNameEvent const&);
    /*
    inline struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> handleActorStandOnBlock(struct ActorStandOnBlockEvent const& a0){
        struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> (EmptyBlockGameplayHandler::*rv)(struct ActorStandOnBlockEvent const&);
        *((void**)&rv) = dlsym("?handleActorStandOnBlock@EmptyBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUActorStandOnBlockEvent@@@Z");
        return (this->*rv)(std::forward<struct ActorStandOnBlockEvent const&>(a0));
    }
    inline struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> handleChestBlockTryPaired(struct ChestBlockTryPairEvent const& a0){
        struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> (EmptyBlockGameplayHandler::*rv)(struct ChestBlockTryPairEvent const&);
        *((void**)&rv) = dlsym("?handleChestBlockTryPaired@EmptyBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUChestBlockTryPairEvent@@@Z");
        return (this->*rv)(std::forward<struct ChestBlockTryPairEvent const&>(a0));
    }
    inline struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> handleBlockPatternPreEvent(struct BlockPatternEvent const& a0){
        struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> (EmptyBlockGameplayHandler::*rv)(struct BlockPatternEvent const&);
        *((void**)&rv) = dlsym("?handleBlockPatternPreEvent@EmptyBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUBlockPatternEvent@@@Z");
        return (this->*rv)(std::forward<struct BlockPatternEvent const&>(a0));
    }
    inline struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> handleExplosionStartedEvent(struct ExplosionStartedEvent& a0){
        struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> (EmptyBlockGameplayHandler::*rv)(struct ExplosionStartedEvent&);
        *((void**)&rv) = dlsym("?handleExplosionStartedEvent@EmptyBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUExplosionStartedEvent@@@Z");
        return (this->*rv)(std::forward<struct ExplosionStartedEvent&>(a0));
    }
    inline struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> handleActorInsideBlock(struct ActorInsideBlockEvent const& a0){
        struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> (EmptyBlockGameplayHandler::*rv)(struct ActorInsideBlockEvent const&);
        *((void**)&rv) = dlsym("?handleActorInsideBlock@EmptyBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUActorInsideBlockEvent@@@Z");
        return (this->*rv)(std::forward<struct ActorInsideBlockEvent const&>(a0));
    }
    inline struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> handlePistonActionEvent(struct PistonActionEvent const& a0){
        struct GameplayHandlerResult<int \/*enum enum CoordinatorResult*\/> (EmptyBlockGameplayHandler::*rv)(struct PistonActionEvent const&);
        *((void**)&rv) = dlsym("?handlePistonActionEvent@EmptyBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUPistonActionEvent@@@Z");
        return (this->*rv)(std::forward<struct PistonActionEvent const&>(a0));
    }
    */

protected:

private:

};