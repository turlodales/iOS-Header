//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPMapStateProtocol-Protocol.h"

@class GEOComposedRoute, NSArray, NSString, RAPDisplayedRouteState;
@protocol RAPAuxiliaryControlsRecording, RAPCuratedCollectionContext, RAPDisplayedDirectionsPlan;

@protocol RAPAppStateProtocol <RAPMapStateProtocol>
@property(readonly, nonatomic) id <RAPCuratedCollectionContext> curatedCollectionContext;
@property(readonly, nonatomic) NSArray *schoolShortcuts;
@property(readonly, nonatomic) NSArray *workShortcuts;
@property(readonly, nonatomic) NSArray *homeShortcuts;
@property(readonly, nonatomic) GEOComposedRoute *activeComposedRoute;
@property(readonly, nonatomic) id <RAPAuxiliaryControlsRecording> currentlyConnectedAuxiliaryControls;
@property(readonly, nonatomic) NSArray *directionsHistory;
@property(readonly, nonatomic) NSArray *searchesHistory;
@property(readonly, nonatomic) NSString *currentUserTypedSearchString;
@property(readonly, nonatomic) NSString *currentSearchString;
@property(readonly, nonatomic) id <RAPDisplayedDirectionsPlan> displayedDirectionsPlan;
@property(readonly, nonatomic) RAPDisplayedRouteState *currentDirections;
@property(readonly, nonatomic) _Bool isShowingDirections;
@end

