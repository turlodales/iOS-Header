//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TransitDirectionsListItem, TransitDirectionsStepView;
@protocol TransitDirectionsExpandableCell, TransitDirectionsListExpandableItem;

@protocol TransitDirectionsExpandableCellDelegate <NSObject>
- (void)transitDirectionsCell:(TransitDirectionsStepView<TransitDirectionsExpandableCell> *)arg1 wantsToExpandOrCollapseItem:(TransitDirectionsListItem<TransitDirectionsListExpandableItem> *)arg2;
@end

