//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UICollectionView;
@protocol RoutePlanningOutlineSectionHosting;

__attribute__((visibility("hidden")))
@interface RoutePlanningOutlineSection : NSObject
{
    UICollectionView *_collectionView;
    _Bool _useAlternateBackgroundMaterial;
    _Bool _active;
    NSString *_sectionIdentifier;
    id <RoutePlanningOutlineSectionHosting> _host;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool useAlternateBackgroundMaterial; // @synthesize useAlternateBackgroundMaterial=_useAlternateBackgroundMaterial;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <RoutePlanningOutlineSectionHosting> host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)viewForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (_Bool)shouldHighlightItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)willDisplayCell:(id)arg1 forIndexPath:(id)arg2;
- (id)cellForItemAtIndexPath:(id)arg1;
- (double)estimatedItemHeight;
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)layoutSectionAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;

@end

