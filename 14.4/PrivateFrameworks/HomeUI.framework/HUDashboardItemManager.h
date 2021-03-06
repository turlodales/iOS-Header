//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFAccessoryItemProvider, HFActionSetListItem, HFCameraListItem, HFDemoModeAccessoryItemProvider, HFGenericAccessoryItemProvider, HFItem, HFMediaAccessoryItemProvider, HFProgrammableSwitchItemProvider, HFReorderableHomeKitItemList, HFServiceGroupItemProvider, HFServiceItemProvider, HFStaticItem, HFTargetControlItemProvider, HUDashboardContext;
@protocol HUDashboardItemManagerDelegate;

@interface HUDashboardItemManager : HFItemManager
{
    _Bool _editing;
    _Bool _forceHideMultiUserTokenFixBannerItem;
    HUDashboardContext *_context;
    HFItem *_headlineItem;
    HFItem *_statusBannerItem;
    HFItem *_multiUserTokenFixBannerItem;
    HFItem *_welcomeUIBannerItem;
    HFItem *_statusListItem;
    HFActionSetListItem *_sceneListItem;
    HFStaticItem *_placeholderSceneListItem;
    HFCameraListItem *_cameraListItem;
    HFItem *_editItem;
    HFItem *_placeholderServicesListItem;
    id _homeMediaAccount;
    id <HUDashboardItemManagerDelegate> _dashboardDelegate;
    HFAccessoryItemProvider *_accessoryItemProvider;
    HFServiceItemProvider *_serviceItemProvider;
    HFServiceGroupItemProvider *_serviceGroupItemProvider;
    HFGenericAccessoryItemProvider *_genericItemProvider;
    HFProgrammableSwitchItemProvider *_programmableSwitchItemProvider;
    HFTargetControlItemProvider *_targetControlItemProvider;
    HFMediaAccessoryItemProvider *_mediaAccessoryItemProvider;
    HFDemoModeAccessoryItemProvider *_demoModeAccessoryItemProvider;
    HFReorderableHomeKitItemList *_clientReorderableServiceList;
    HFReorderableHomeKitItemList *_clientReorderableCameraList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableCameraList; // @synthesize clientReorderableCameraList=_clientReorderableCameraList;
@property(retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableServiceList; // @synthesize clientReorderableServiceList=_clientReorderableServiceList;
@property(retain, nonatomic) HFDemoModeAccessoryItemProvider *demoModeAccessoryItemProvider; // @synthesize demoModeAccessoryItemProvider=_demoModeAccessoryItemProvider;
@property(retain, nonatomic) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider; // @synthesize mediaAccessoryItemProvider=_mediaAccessoryItemProvider;
@property(retain, nonatomic) HFTargetControlItemProvider *targetControlItemProvider; // @synthesize targetControlItemProvider=_targetControlItemProvider;
@property(retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider; // @synthesize programmableSwitchItemProvider=_programmableSwitchItemProvider;
@property(retain, nonatomic) HFGenericAccessoryItemProvider *genericItemProvider; // @synthesize genericItemProvider=_genericItemProvider;
@property(retain, nonatomic) HFServiceGroupItemProvider *serviceGroupItemProvider; // @synthesize serviceGroupItemProvider=_serviceGroupItemProvider;
@property(retain, nonatomic) HFServiceItemProvider *serviceItemProvider; // @synthesize serviceItemProvider=_serviceItemProvider;
@property(retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider; // @synthesize accessoryItemProvider=_accessoryItemProvider;
@property(readonly, nonatomic) __weak id <HUDashboardItemManagerDelegate> dashboardDelegate; // @synthesize dashboardDelegate=_dashboardDelegate;
@property(retain, nonatomic) id homeMediaAccount; // @synthesize homeMediaAccount=_homeMediaAccount;
@property(retain, nonatomic) HFItem *placeholderServicesListItem; // @synthesize placeholderServicesListItem=_placeholderServicesListItem;
@property(retain, nonatomic) HFItem *editItem; // @synthesize editItem=_editItem;
@property(retain, nonatomic) HFCameraListItem *cameraListItem; // @synthesize cameraListItem=_cameraListItem;
@property(retain, nonatomic) HFStaticItem *placeholderSceneListItem; // @synthesize placeholderSceneListItem=_placeholderSceneListItem;
@property(retain, nonatomic) HFActionSetListItem *sceneListItem; // @synthesize sceneListItem=_sceneListItem;
@property(retain, nonatomic) HFItem *statusListItem; // @synthesize statusListItem=_statusListItem;
@property(retain, nonatomic) HFItem *welcomeUIBannerItem; // @synthesize welcomeUIBannerItem=_welcomeUIBannerItem;
@property(nonatomic) _Bool forceHideMultiUserTokenFixBannerItem; // @synthesize forceHideMultiUserTokenFixBannerItem=_forceHideMultiUserTokenFixBannerItem;
@property(retain, nonatomic) HFItem *multiUserTokenFixBannerItem; // @synthesize multiUserTokenFixBannerItem=_multiUserTokenFixBannerItem;
@property(retain, nonatomic) HFItem *statusBannerItem; // @synthesize statusBannerItem=_statusBannerItem;
@property(retain, nonatomic) HFItem *headlineItem; // @synthesize headlineItem=_headlineItem;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) HUDashboardContext *context; // @synthesize context=_context;
- (void)settings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)settings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (void)settingsDidUpdate:(id)arg1;
- (_Bool)isServiceLikeItemsAndCamerasEmpty;
- (_Bool)hasVisibleServiceLikeItems;
- (_Bool)isStatusListVisible;
- (_Bool)shouldShowWelcomeUIBanner;
- (_Bool)isEmptyHomeDashboard;
- (_Bool)dashboardHasPlaceholderServiceOrSceneItems;
- (_Bool)isEmptyDashboard;
- (void)_updateFilters;
- (void)_updateContextForHome:(id)arg1 room:(id)arg2;
- (id)_currentSectionIdentifiers;
- (void)home:(id)arg1 didUpdateWallpaperForRoom:(id)arg2;
- (void)homeDidUpdateWallpaper:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)_willUpdateSections;
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemForSorting;
- (id)_itemsToHideInSet:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;
@property(retain, nonatomic) HFReorderableHomeKitItemList *reorderableCameraList;
@property(retain, nonatomic) HFReorderableHomeKitItemList *reorderableServiceList;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

