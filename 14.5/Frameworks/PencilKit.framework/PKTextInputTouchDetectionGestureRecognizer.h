//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMapTable;
@protocol PKTextInputTouchDetectionGestureRecognizerDelegate;

@interface PKTextInputTouchDetectionGestureRecognizer : UIGestureRecognizer
{
    NSMapTable *__touches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *_touches; // @synthesize _touches=__touches;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)recognizeTouch:(id)arg1 afterThreshold:(double)arg2;
- (void)recognizeTouch;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <PKTextInputTouchDetectionGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

