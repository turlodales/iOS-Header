//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitDirectionsListArtworkItem.h"

#import "TransitDirectionsListExpandableItem-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItemWalking : TransitDirectionsListArtworkItem <TransitDirectionsListExpandableItem>
{
    _Bool _expanded;
    NSArray *_walkingSubItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *walkingSubItems; // @synthesize walkingSubItems=_walkingSubItems;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (_Bool)_shouldHideWalkingSubStep:(id)arg1;
- (id)_generateWalkingSubSteps;
- (id)_transitWalkingLegInstruction;
- (id)initWithWalkingSegment:(id)arg1;
- (unsigned long long)numberOfSubItemsWithForceExpand:(_Bool)arg1;
- (id)subItemsWithForceExpand:(_Bool)arg1;
- (void)_rebuildSubItems;
@property(readonly, nonatomic) _Bool shouldDisplayExpandButton;
@property(readonly, nonatomic) _Bool shouldEnableExpandedButton;
- (id)expandingButtonTitleForExpandedState:(_Bool)arg1;
@property(copy, nonatomic) NSArray *expandedItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

