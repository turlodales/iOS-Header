//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitDirectionsIconStepView.h"

@class MKArtworkImageView, NSLayoutConstraint, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TransitDirectionsBlockTransferStepView : TransitDirectionsIconStepView
{
    NSLayoutConstraint *_topToPrimaryLabelBaselineConstraint;
    NSLayoutConstraint *_imageViewToLabelVerticalAlignmentConstraint;
    NSLayoutConstraint *_primaryLabelLeadingToImageViewConstraint;
    NSLayoutConstraint *_primaryLabelLeadingConstraint;
    _MKUILabel *_primaryLabel;
    MKArtworkImageView *_blockTransferImageView;
}

+ (double)leadingTextInsetForBlockTransferTransitDirectionsListItem:(id)arg1 navigationState:(long long)arg2;
- (void).cxx_destruct;
- (void)setNavigationState:(long long)arg1;
- (void)_updateLineSpacing;
- (void)_updateFonts;
- (double)_primaryLabelLineSpacing;
- (double)_topToPrimaryLabelDistance;
- (double)_blockTransferImageOffsetFromPrimaryLabelBaseline;
- (void)configureWithItem:(id)arg1;
- (id)_initialConstraints;
- (void)_createSubviews;
- (void)_contentSizeCategoryDidChange;

@end

