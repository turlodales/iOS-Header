//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ActionControl-Protocol.h"
#import "ContaineeViewControllerDelegate-Protocol.h"

@class ControlContainerViewController, NSString, TransitLineDisambiguationViewController;
@protocol ActionCoordination;

__attribute__((visibility("hidden")))
@interface TransitLineSelectionActionController : NSObject <ActionControl, ContaineeViewControllerDelegate>
{
    long long _viewModeToRestore;
    id <ActionCoordination> _coordinator;
    ControlContainerViewController *_containerViewController;
    TransitLineDisambiguationViewController *_disambiguationVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TransitLineDisambiguationViewController *disambiguationVC; // @synthesize disambiguationVC=_disambiguationVC;
@property(nonatomic) __weak ControlContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <ActionCoordination> coordinator; // @synthesize coordinator=_coordinator;
- (_Bool)_shouldRestoreDisplayedViewModeForContext:(id)arg1;
- (void)_clearTransitLineSelectionDeactivate:(_Bool)arg1 context:(id)arg2;
- (void)_showTransitLineWithName:(id)arg1 identifier:(id)arg2 mapRegion:(id)arg3;
- (void)_zoomToRegionForLineIfNecessary:(id)arg1 region:(id)arg2 withStartingRegion:(id)arg3 startedShowingLineDate:(id)arg4;
- (void)_disambiguateSelectedLineForLabelMarker:(id)arg1 onActivation:(CDUnknownBlockType)arg2;
- (void)containeeViewControllerGoToPreviousState:(id)arg1;
- (id)mapView;
- (void)deactivateWithContext:(id)arg1;
- (_Bool)isShowingLineWithIdentifier:(id)arg1;
- (_Bool)isShowingLineForLineItem:(id)arg1;
- (_Bool)isShowingLineForLabelMarker:(id)arg1;
@property(readonly, nonatomic) _Bool isActive;
- (void)selectLine:(id)arg1 zoomToMapRegion:(_Bool)arg2 onActivation:(CDUnknownBlockType)arg3;
- (void)selectLineForLabelMarker:(id)arg1 zoomToMapRegion:(_Bool)arg2 onActivation:(CDUnknownBlockType)arg3;
- (id)_traits;
- (id)init;
- (id)initWithContainerViewController:(id)arg1 actionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

