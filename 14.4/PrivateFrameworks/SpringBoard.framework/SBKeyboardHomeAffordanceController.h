//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneManagerObserverPrivate-Protocol.h>
#import <SpringBoard/SBSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>

@class NSHashTable, NSString, SBHomeGrabberRotationView, SBKeyboardHomeAffordanceAssertion;

@interface SBKeyboardHomeAffordanceController : NSObject <SBHomeGrabberDelegate, SBSceneHandleObserver, SBUIActiveOrientationObserver, SBMainDisplaySceneManagerObserverPrivate>
{
    NSHashTable *_assertions;
    SBHomeGrabberRotationView *_homeGrabberView;
    _Bool _isHomeGrabberContainingViewAlwaysPortrait;
    SBKeyboardHomeAffordanceAssertion *_topMostAssertion;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sceneManagerUsingMedusaHostedKeyboardWindowDidChange:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_updateTopMostAssertion;
- (void)_updateHomeAffordance;
- (void)_getHomeGrabberContainingView:(id *)arg1 isAlwaysPortrait:(_Bool *)arg2;
- (void)_didChangeAdditionalEdgeMarginForAssertion:(id)arg1;
- (void)unregisterAssertion:(id)arg1;
- (void)registerAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

