//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMapTable, NSMutableArray;
@protocol UIWebTouchEventsGestureRecognizerDelegate;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer
{
    id _touchTarget;
    SEL _touchAction;
    id <UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
    _Bool _passedHitTest;
    _Bool _defaultPrevented;
    _Bool _dispatchingTouchEvents;
    _Bool _isPotentialTap;
    _Bool _wasExplicitlyCancelled;
    double _originalGestureDistance;
    double _originalGestureAngle;
    struct _UIWebTouchEvent _lastTouchEvent;
    NSMapTable *_activeTouchesByIdentifier;
}

+ (_Bool)_shouldDefaultToTouches;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *activeTouchesByIdentifier; // @synthesize activeTouchesByIdentifier=_activeTouchesByIdentifier;
@property(readonly, nonatomic, getter=isDispatchingTouchEvents) _Bool dispatchingTouchEvents; // @synthesize dispatchingTouchEvents=_dispatchingTouchEvents;
@property(nonatomic, getter=isDefaultPrevented) _Bool defaultPrevented; // @synthesize defaultPrevented=_defaultPrevented;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) _Bool inJavaScriptGesture;
@property(readonly, nonatomic) NSMutableArray *touchPhases;
@property(readonly, nonatomic) NSMutableArray *touchIdentifiers;
@property(readonly, nonatomic) NSMutableArray *touchLocations;
@property(readonly, nonatomic) struct CGPoint locationInWindow;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) const struct _UIWebTouchEvent *lastTouchEvent;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;
- (void)performAction;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (void)_updateTapStateWithTouches:(id)arg1 type:(int)arg2;
- (void)_updateTapStateWithTouches:(id)arg1;
- (void)cancel;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3;

@end

