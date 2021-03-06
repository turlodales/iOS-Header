//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIGestureRecognizer, UIView;
@protocol _UIDragInteractionDriverDelegate;

@protocol _UIDragInteractionDriving <NSObject>
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) _Bool shouldAnimateLift;
@property(readonly, nonatomic) struct CGPoint initialLocationInWindow;
@property(copy, nonatomic) NSArray *allowedTouchTypes;
@property(nonatomic) _Bool automaticallyAddsFailureRelationships;
@property(nonatomic) _Bool cancellationTimerEnabled;
@property(nonatomic) double competingLongPressDelay;
@property(nonatomic) double cancellationDelay;
@property(nonatomic) _Bool allowsSimultaneousRecognitionDuringLift;
@property(nonatomic) _Bool competingLongPressOnLift;
@property(nonatomic) _Bool additionalTouchesCancelLift;
@property(nonatomic) double liftMoveHysteresis;
@property(nonatomic) double liftDelay;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <_UIDragInteractionDriverDelegate> delegate;
- (_Bool)isGestureRecognizerForDragInitiation:(UIGestureRecognizer *)arg1;
- (void)cancel;
@end

