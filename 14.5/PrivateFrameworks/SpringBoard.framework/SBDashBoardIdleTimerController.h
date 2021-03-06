//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSExternalEventHandling-Protocol.h>
#import <SpringBoard/CSIdleTimerControlling-Protocol.h>
#import <SpringBoard/SBDashBoardIdleTimerProviderDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>
#import <SpringBoard/SBLockScreenIdleTimerControlling-Protocol.h>

@class CSCoverSheetViewController, NSString, SBDashBoardIdleTimerProvider;
@protocol SBIdleTimerCoordinating;

@interface SBDashBoardIdleTimerController : NSObject <CSExternalEventHandling, SBDashBoardIdleTimerProviderDelegate, CSIdleTimerControlling, SBIdleTimerProviding, SBLockScreenIdleTimerControlling>
{
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardIdleTimerProvider *_dashBoardIdleTimerProvider;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
- (void)removeIdleTimerDisabledAssertionReason:(id)arg1;
- (void)addIdleTimerDisabledAssertionReason:(id)arg1;
- (id)requestIdleTimerBehaviorForReason:(id)arg1;
- (id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3;
- (void)idleTimerWillRefresh:(id)arg1;
- (void)idleTimerDidChange:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)resetIdleTimerIfTopMost;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)conformsToCSEventHandling;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)dealloc;
- (id)initWithCoverSheetViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

