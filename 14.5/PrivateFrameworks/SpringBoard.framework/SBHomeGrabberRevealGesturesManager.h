//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSString, UIScreenEdgePanGestureRecognizer, UITapGestureRecognizer;
@protocol OS_dispatch_queue;

@interface SBHomeGrabberRevealGesturesManager : NSObject <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_bounceTapRecognizer;
    UITapGestureRecognizer *_revealTapRecognizer;
    UITapGestureRecognizer *_revealDoubleTapRecognizer;
    UIScreenEdgePanGestureRecognizer *_revealEdgePanRecognizer;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSHashTable *_registeredGrabbers;
    _Bool _gestureEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_edgePanChanged:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (_Bool)gestureRecognizerContainsPointerEvent:(id)arg1;
- (void)unregisterGrabber:(id)arg1;
- (void)registerGrabber:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

