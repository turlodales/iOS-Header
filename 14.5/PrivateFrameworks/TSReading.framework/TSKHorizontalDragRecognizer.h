//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer
{
    struct CGPoint mStartPoint;
    UIScrollView *mContainingScrollView;
}

@property(nonatomic) UIScrollView *containingScrollView; // @synthesize containingScrollView=mContainingScrollView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;

@end

