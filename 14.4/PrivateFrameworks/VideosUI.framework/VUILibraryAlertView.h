//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryAlertView : UIView
{
    UIScrollView *_scrollView;
    UIView *_containerView;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

