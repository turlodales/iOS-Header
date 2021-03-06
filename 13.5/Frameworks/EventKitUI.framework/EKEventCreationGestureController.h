//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class EKDayOccurrenceView, EKEvent, NSString, UILongPressGestureRecognizer, UIView;
@protocol EKEventCreationGestureControllerDelegate;

@interface EKEventCreationGestureController : NSObject <UIGestureRecognizerDelegate>
{
    NSObject<EKEventCreationGestureControllerDelegate> *_gestureDelegate;
    UIView *_targetView;
    UILongPressGestureRecognizer *_gestureRecognizer;
    EKEvent *_newEvent;
    UIView *_containerView;
    EKDayOccurrenceView *_eventPreview;
    struct CGPoint _originPoint;
    int _state;
}

- (void).cxx_destruct;
- (void)_gestureCanceled;
- (void)_gestureCompleted;
- (void)_gestureUpdated;
- (void)_gestureChangedEnoughToCreateEvent;
- (void)_gestureBegan;
- (void)_cleanUp;
- (void)_adjustPreviewFrame;
- (id)_snapDate:(id)arg1 toInterval:(double)arg2;
- (_Bool)_canActivate;
- (void)handleGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)invalidate;
- (_Bool)currentlyCreatingEvent;
- (void)dealloc;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

