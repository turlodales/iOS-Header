//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUArtworkView, MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface _VideosExtrasGridHeaderView : UIView
{
    NSArray *_artworkSizeConstraints;
    NSArray *_textLeadingConstraints;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelSpacerHeight;
    MPUArtworkView *_artworkView;
    UILabel *_subtitleLabel;
    UIView *_bottomLabelSpacer;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

