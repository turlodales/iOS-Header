//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface FMFWildcardGestureRecognizer : UIGestureRecognizer
{
    CDUnknownBlockType _touchesBeganCallback;
    CDUnknownBlockType _touchesEndedCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType touchesEndedCallback; // @synthesize touchesEndedCallback=_touchesEndedCallback;
@property(copy, nonatomic) CDUnknownBlockType touchesBeganCallback; // @synthesize touchesBeganCallback=_touchesBeganCallback;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (void)reset;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end

