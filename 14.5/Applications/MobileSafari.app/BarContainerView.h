//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSSet;

@interface BarContainerView : UIView
{
    NSMutableSet *_barViews;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *barViews; // @synthesize barViews=_barViews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)unregisterBarView:(id)arg1;
- (void)registerBarView:(id)arg1;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

