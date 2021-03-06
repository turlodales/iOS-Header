//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKitCore/_UIClickInteractionDriving-Protocol.h>

@class NSString, UIGestureRecognizer, UITouchForceGestureRecognizer, UIView;
@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UIForceClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving>
{
    unsigned long long _currentState;
    _Bool _cancelsTouchesInView;
    id <_UIClickInteractionDriverDelegate> _delegate;
    UIView *_view;
    UITouchForceGestureRecognizer *_gestureRecognizer;
}

+ (_Bool)prefersCancelsTouchesInView;
+ (_Bool)requiresForceCapability;
- (void).cxx_destruct;
@property(retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) _Bool cancelsTouchesInView; // @synthesize cancelsTouchesInView=_cancelsTouchesInView;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UIClickInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handleGestureRecognizer:(id)arg1;
- (_Bool)allowsRepeatedClicks;
@property(readonly, nonatomic) _Bool clicksUpAutomaticallyAfterTimeout;
@property(readonly, nonatomic) unsigned long long inputPrecision;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)cancelInteraction;
@property(readonly, nonatomic) _Bool isCurrentlyAcceleratedByForce;
@property(readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property(readonly, nonatomic) _Bool hasExceededAllowableMovement;
@property(readonly, nonatomic) double touchDuration;
@property(readonly, nonatomic) double maximumEffectProgress;
@property(nonatomic) double allowableMovement;
@property(readonly, nonatomic) double touchForce;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long behavior;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

