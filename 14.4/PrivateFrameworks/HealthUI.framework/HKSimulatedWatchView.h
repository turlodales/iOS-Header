//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HKSimulatedWatchView : UIView
{
    UIView *_containerView;
    UIView *_watchScreenView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *watchScreenView; // @synthesize watchScreenView=_watchScreenView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;
- (id)initWithIconImage:(id)arg1 titleText:(id)arg2 detailText:(id)arg3 tintColor:(id)arg4;
- (id)initWithWatchView:(id)arg1;

@end

