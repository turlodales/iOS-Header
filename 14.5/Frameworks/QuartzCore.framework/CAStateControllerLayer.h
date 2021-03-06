//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface CAStateControllerLayer : NSObject
{
    CALayer *_layer;
    CAState *_currentState;
    CAStateControllerUndo *_undoStack;
    NSMutableArray *_transitions;
    NSTimer *_nextTimer;
    CAState *_nextState;
    float _nextSpeed;
}

@property(readonly) CAStateControllerUndo *undoStack; // @synthesize undoStack=_undoStack;
@property(retain, nonatomic) CAState *currentState; // @synthesize currentState=_currentState;
@property(readonly) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;
- (void)invalidate;
- (void)removeTransition:(id)arg1;
- (void)addTransition:(id)arg1;
- (id)initWithLayer:(id)arg1;

@end

