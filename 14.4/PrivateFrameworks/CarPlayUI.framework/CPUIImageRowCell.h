//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlayUI/_CPUIBaseTableCell.h>

@class CPUIHighlightButton, NSArray, NSLayoutConstraint, NSMutableArray, UIActivityIndicatorView, UIImage, UIImageView, UIStackView;

@interface CPUIImageRowCell : _CPUIBaseTableCell
{
    NSMutableArray *_reusableMediaViews;
    NSArray *_artworkCatalogs;
    CPUIHighlightButton *_focusIndicator;
    UIImageView *_chevronView;
    UIImage *_fallbackImage;
    UIActivityIndicatorView *_activityIndicator;
    CDUnknownBlockType _selectGridItemBlock;
    CDUnknownBlockType _selectTitleBlock;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewWidthConstraint;
}

+ (double)rowHeight;
+ (double)minimumHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *stackViewWidthConstraint; // @synthesize stackViewWidthConstraint=_stackViewWidthConstraint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) CDUnknownBlockType selectTitleBlock; // @synthesize selectTitleBlock=_selectTitleBlock;
@property(copy, nonatomic) CDUnknownBlockType selectGridItemBlock; // @synthesize selectGridItemBlock=_selectGridItemBlock;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) CPUIHighlightButton *focusIndicator; // @synthesize focusIndicator=_focusIndicator;
@property(copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
@property(retain, nonatomic) NSMutableArray *reusableMediaViews; // @synthesize reusableMediaViews=_reusableMediaViews;
- (void)coreCellItemTapped:(id)arg1;
- (void)gridCellItemTapped:(id)arg1;
- (void)prepareForReuse;
- (void)_layoutArtworkImages;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setLoading:(_Bool)arg1;
- (long long)artworkViewCountThatFits:(struct CGSize)arg1;
- (void)applyConfiguration:(id)arg1;
- (void)configureCell;

@end

