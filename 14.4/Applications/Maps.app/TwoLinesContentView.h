//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

#import "TwoLinesContentViewModelObserver-Protocol.h"

@class MKVibrantView, NSArray, NSLayoutConstraint, NSString, NSTextAttachment, UIImageView, UILabel, UILayoutGuide, UITapGestureRecognizer, UIView;
@protocol PlaceContextViewModelCellDelegate, TwoLinesContentViewModel;

__attribute__((visibility("hidden")))
@interface TwoLinesContentView : MapsThemeView <TwoLinesContentViewModelObserver>
{
    UILayoutGuide *_titleLayoutGuide;
    UILabel *_mainTitleLabel;
    UILabel *_secondTitleLabel;
    UILabel *_thirdTitleLabel;
    UILabel *_debugLabel;
    UIImageView *_leftImageView;
    UIImageView *_thirdLabelImageView;
    UITapGestureRecognizer *_thirdLabelTap;
    NSTextAttachment *_attachment;
    UIView *_badgeView;
    int _imageState;
    NSArray *_constraints;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_thirdLabelImageViewHeightConstraint;
    NSLayoutConstraint *_thirdLabelTopConstraint;
    _Bool _vibrant;
    MKVibrantView *_vibrantView;
    _Bool _isParentCellSelected;
    int _contentViewType;
    id <TwoLinesContentViewModel> _viewModel;
    id <PlaceContextViewModelCellDelegate> _placeContextViewModelDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int contentViewType; // @synthesize contentViewType=_contentViewType;
@property(nonatomic) _Bool isParentCellSelected; // @synthesize isParentCellSelected=_isParentCellSelected;
@property(nonatomic) __weak id <PlaceContextViewModelCellDelegate> placeContextViewModelDelegate; // @synthesize placeContextViewModelDelegate=_placeContextViewModelDelegate;
@property(retain, nonatomic) id <TwoLinesContentViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)didTapOnThirdLabel:(id)arg1;
- (double)_imageToTextSpacing;
- (double)_imageSize;
- (double)_verticalMargin;
- (void)_updateFonts;
- (id)_subtitleFont;
- (id)_titleRegularFont;
- (id)_titleFont;
- (void)_updateDebugLabel;
- (void)twoLinesTableViewCellModelDidUpdate:(id)arg1;
- (void)_updateViewsWithViewModel:(id)arg1;
- (id)_renderAttachmentImageWithImage:(id)arg1 vibrant:(_Bool)arg2;
- (void)_updateVibrantColor;
- (void)setVibrant:(_Bool)arg1;
- (void)_updateImage:(id)arg1;
- (id)_selectedLabelColor;
- (void)_updateLabelColors;
- (void)_updateNumberOfLines;
- (void)_updateHeightConstraint;
- (void)_updateConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentViewType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

