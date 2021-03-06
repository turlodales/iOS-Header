//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UITextPhraseBoundaryInteraction : UITextInteraction
{
    UITextGestureTuning *_gestureTuning;
    id <UITextCursorAssertion> _blinkAssertion;
}

- (void).cxx_destruct;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_phraseBoundaryGestureRecognizer;
- (void)updateVisibilityOffsetForGesture:(id)arg1;
- (void)_createGestureTuningIfNecessary;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (void)didMoveToView:(id)arg1;
- (id)initWithTextInput:(id)arg1;

@end

