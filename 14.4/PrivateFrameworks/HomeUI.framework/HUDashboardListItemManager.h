//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFRoomItemProvider, HFStaticItemProvider;

@interface HUDashboardListItemManager : HFItemManager
{
    HFItem *_favoritesItem;
    HFStaticItemProvider *_favoritesItemProvider;
    HFRoomItemProvider *_roomItemProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFRoomItemProvider *roomItemProvider; // @synthesize roomItemProvider=_roomItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *favoritesItemProvider; // @synthesize favoritesItemProvider=_favoritesItemProvider;
@property(retain, nonatomic) HFItem *favoritesItem; // @synthesize favoritesItem=_favoritesItem;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;

@end

