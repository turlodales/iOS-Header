//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HUInstructionsItem, NSSet;

@interface HUFirmwareUpdateItemProvider : HFItemProvider
{
    _Bool _hasProvidedInstructionsItem;
    HMHome *_home;
    CDUnknownBlockType _filter;
    unsigned long long _style;
    HUInstructionsItem *_instructionsItem;
    NSSet *_linkedApplicationItems;
    HFItemProvider *_linkedApplicationItemProvider;
}

+ (_Bool)prefersNonBlockingReloads;
+ (CDUnknownBlockType)itemComparator;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasProvidedInstructionsItem; // @synthesize hasProvidedInstructionsItem=_hasProvidedInstructionsItem;
@property(retain, nonatomic) HFItemProvider *linkedApplicationItemProvider; // @synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider;
@property(retain, nonatomic) NSSet *linkedApplicationItems; // @synthesize linkedApplicationItems=_linkedApplicationItems;
@property(retain, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2;
- (id)_localizedDescriptionForAppName:(id)arg1 accessoriesWithFirmwareUpdates:(id)arg2 visibleAccessoryTileDisplayNames:(id)arg3;
- (CDUnknownBlockType)_effectiveFilter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 style:(unsigned long long)arg2;
- (id)init;

@end

