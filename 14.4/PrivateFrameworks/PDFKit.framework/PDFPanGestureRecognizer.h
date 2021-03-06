//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface PDFPanGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _didForcePress;
    _Bool _touchesDidHavePressure;
    struct CGPoint _locationOfFirstTouch;
}

@property(nonatomic) _Bool touchesDidHavePressure; // @synthesize touchesDidHavePressure=_touchesDidHavePressure;
@property(nonatomic) _Bool didForcePress; // @synthesize didForcePress=_didForcePress;
@property(nonatomic) struct CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end

