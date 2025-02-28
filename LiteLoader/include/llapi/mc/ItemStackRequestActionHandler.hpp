/**
 * @file  ItemStackRequestActionHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionHandler.
 *
 */
class ItemStackRequestActionHandler {

#define AFTER_EXTRA
// Add Member There
public:
enum class RemoveType;
struct RequestSlotIdAssignment {
    RequestSlotIdAssignment() = delete;
    RequestSlotIdAssignment(RequestSlotIdAssignment const&) = delete;
    RequestSlotIdAssignment(RequestSlotIdAssignment const&&) = delete;
};
struct ScreenData {
    ScreenData() = delete;
    ScreenData(ScreenData const&) = delete;
    ScreenData(ScreenData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONHANDLER
public:
    class ItemStackRequestActionHandler& operator=(class ItemStackRequestActionHandler const &) = delete;
    ItemStackRequestActionHandler(class ItemStackRequestActionHandler const &) = delete;
    ItemStackRequestActionHandler() = delete;
#endif

public:
    /**
     * @hash   1189433856
     * @symbol  ??0ItemStackRequestActionHandler\@\@QEAA\@AEAVItemStackNetManagerServer\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI ItemStackRequestActionHandler(class ItemStackNetManagerServer &, class Player &);
    /**
     * @hash   1028389669
     * @symbol  ?_addResponseSlotInfo\@ItemStackRequestActionHandler\@\@QEAAXAEBUItemStackRequestHandlerSlotInfo\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _addResponseSlotInfo(struct ItemStackRequestHandlerSlotInfo const &, class ItemStack const &);
    /**
     * @hash   -1108050104
     * @symbol  ?_cacheLegacySlotIdAssignment\@ItemStackRequestActionHandler\@\@QEAAXW4ContainerEnumName\@\@EAEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@AEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI void _cacheLegacySlotIdAssignment(enum class ContainerEnumName, unsigned char, class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &, class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const &);
    /**
     * @hash   1189571673
     * @symbol  ?_cacheSlotIdAssigment\@ItemStackRequestActionHandler\@\@QEAAXAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@EEAEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI void _cacheSlotIdAssigment(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &, unsigned char, unsigned char, class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const &);
    /**
     * @hash   -1896339404
     * @symbol  ?_getOrInitSparseContainer\@ItemStackRequestActionHandler\@\@QEAA?AV?$shared_ptr\@VSimpleSparseContainer\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum class ContainerEnumName);
    /**
     * @hash   -204836676
     * @symbol  ?_handleRemove\@ItemStackRequestActionHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionTransferBase\@\@AEAVItemStack\@\@W4RemoveType\@1\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleRemove(class ItemStackRequestActionTransferBase const &, class ItemStack &, enum class ItemStackRequestActionHandler::RemoveType);
    /**
     * @hash   42534892
     * @symbol  ?_initScreen\@ItemStackRequestActionHandler\@\@QEAAXAEAVItemStackNetManagerScreen\@\@\@Z
     */
    MCAPI void _initScreen(class ItemStackNetManagerScreen &);
    /**
     * @hash   -1017829049
     * @symbol  ?_validateRequestSlot\@ItemStackRequestActionHandler\@\@QEAA?AUItemStackRequestHandlerSlotInfo\@\@AEBUItemStackRequestSlotInfo\@\@_N1\@Z
     */
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const &, bool, bool);
    /**
     * @hash   -1637618347
     * @symbol  ?addFilteredStrings\@ItemStackRequestActionHandler\@\@QEAAXV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void addFilteredStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>, std::vector<std::string>);
    /**
     * @hash   -946565720
     * @symbol  ?beginRequest\@ItemStackRequestActionHandler\@\@QEAAXAEBV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@AEAVItemStackNetManagerScreen\@\@\@Z
     */
    MCAPI void beginRequest(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const &, class ItemStackNetManagerScreen &);
    /**
     * @hash   -1401536582
     * @symbol  ?endRequest\@ItemStackRequestActionHandler\@\@QEAA?AV?$tuple\@W4ItemStackNetResult\@\@V?$vector\@UItemStackResponseContainerInfo\@\@V?$allocator\@UItemStackResponseContainerInfo\@\@\@std\@\@\@std\@\@\@std\@\@W4ItemStackNetResult\@\@\@Z
     */
    MCAPI class std::tuple<enum class ItemStackNetResult, std::vector<struct ItemStackResponseContainerInfo>> endRequest(enum class ItemStackNetResult);
    /**
     * @hash   997758593
     * @symbol  ?endRequestBatch\@ItemStackRequestActionHandler\@\@QEAAXXZ
     */
    MCAPI void endRequestBatch();
    /**
     * @hash   -1658862133
     * @symbol  ?getFilteredStrings\@ItemStackRequestActionHandler\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI std::vector<std::string> const & getFilteredStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>) const;
    /**
     * @hash   503857603
     * @symbol  ?getRequestId\@ItemStackRequestActionHandler\@\@QEBAAEBV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const & getRequestId() const;
    /**
     * @hash   -542331388
     * @symbol  ?getScreenContext\@ItemStackRequestActionHandler\@\@QEBAAEBVContainerScreenContext\@\@XZ
     */
    MCAPI class ContainerScreenContext const & getScreenContext() const;
    /**
     * @hash   1820204605
     * @symbol  ?handleRequestAction\@ItemStackRequestActionHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleRequestAction(class ItemStackRequestAction const &);
    /**
     * @hash   1319924494
     * @symbol  ?hasFilteredStrings\@ItemStackRequestActionHandler\@\@QEBA_NV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI bool hasFilteredStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>) const;
    /**
     * @hash   -77444294
     * @symbol  ?isValidationCraftingImplemented\@ItemStackRequestActionHandler\@\@QEAA_NXZ
     */
    MCAPI bool isValidationCraftingImplemented();
    /**
     * @hash   -486403941
     * @symbol  ?normalTick\@ItemStackRequestActionHandler\@\@QEAAXXZ
     */
    MCAPI void normalTick();
    /**
     * @hash   1014414819
     * @symbol  ?tryCraft\@ItemStackRequestActionHandler\@\@QEAA?AV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<class ItemInstance> tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @hash   -1453640602
     * @symbol  ??1ItemStackRequestActionHandler\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestActionHandler();

//private:
    /**
     * @hash   -1013910099
     * @symbol  ?_handleDestroy\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionDestroy\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleDestroy(class ItemStackRequestActionDestroy const &);
    /**
     * @hash   339988511
     * @symbol  ?_handlePlaceInItemContainer\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionPlaceInItemContainer\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handlePlaceInItemContainer(class ItemStackRequestActionPlaceInItemContainer const &);
    /**
     * @hash   1163937799
     * @symbol  ?_handleTakeFromItemContainer\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionTakeFromItemContainer\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleTakeFromItemContainer(class ItemStackRequestActionTakeFromItemContainer const &);
    /**
     * @hash   -572827800
     * @symbol  ?_handleTransfer\@ItemStackRequestActionHandler\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionTransferBase\@\@_N11\@Z
     */
    MCAPI enum class ItemStackNetResult _handleTransfer(class ItemStackRequestActionTransferBase const &, bool, bool, bool);
    /**
     * @hash   -1493490420
     * @symbol  ?_resolveSlotIdAssignment\@ItemStackRequestActionHandler\@\@AEAA?AV?$optional\@URequestSlotIdAssignment\@ItemStackRequestActionHandler\@\@\@std\@\@AEBUItemStackRequestSlotInfo\@\@AEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class std::optional<struct ItemStackRequestActionHandler::RequestSlotIdAssignment> _resolveSlotIdAssignment(struct ItemStackRequestSlotInfo const &, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @hash   743190359
     * @symbol  ?_tryGetCurrentScreenData\@ItemStackRequestActionHandler\@\@AEBAPEAUScreenData\@1\@XZ
     */
    MCAPI struct ItemStackRequestActionHandler::ScreenData * _tryGetCurrentScreenData() const;

private:

};