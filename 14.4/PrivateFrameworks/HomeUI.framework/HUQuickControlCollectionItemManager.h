//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUQuickControlCollectionItemManaging-Protocol.h>

@class HFItem, HFItemProvider, NSString;
@protocol NSCopying;

@interface HUQuickControlCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging>
{
    HFItemProvider *_gridItemProvider;
    HFItem<NSCopying> *_supplementaryItem;
    CDUnknownBlockType _gridItemProviderCreator;
    CDUnknownBlockType _supplementaryItemProviderCreator;
    HFItemProvider *_supplementaryItemProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFItemProvider *supplementaryItemProvider; // @synthesize supplementaryItemProvider=_supplementaryItemProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType supplementaryItemProviderCreator; // @synthesize supplementaryItemProviderCreator=_supplementaryItemProviderCreator;
@property(readonly, copy, nonatomic) CDUnknownBlockType gridItemProviderCreator; // @synthesize gridItemProviderCreator=_gridItemProviderCreator;
@property(readonly, copy, nonatomic) HFItem<NSCopying> *supplementaryItem; // @synthesize supplementaryItem=_supplementaryItem;
@property(retain, nonatomic) HFItemProvider *gridItemProvider; // @synthesize gridItemProvider=_gridItemProvider;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (_Bool)isGridItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 gridItemProviderCreator:(CDUnknownBlockType)arg2 supplementaryItemProviderCreator:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

