//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFControlPanelItem, HFItem, HFServiceItem, HUServiceDetailsControlAndCharacteristicStateItemModule, NSSet, NSString;

@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate <NSObject>
- (NSString *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 sectionFooterForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (NSString *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 sectionTitleForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (_Bool)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 shouldShowSectionTitleForControlPanelItem:(HFControlPanelItem *)arg2;
- (_Bool)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 shouldShowControlPanelItem:(HFControlPanelItem *)arg2;
- (NSSet *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 childItemsForItem:(HFItem *)arg2;
@end

