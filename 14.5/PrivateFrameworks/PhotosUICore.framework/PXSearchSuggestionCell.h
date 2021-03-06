//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICollectionViewListCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide, UIStackView;

@interface PXSearchSuggestionCell : _UICollectionViewListCell
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIStackView *_textStackView;
    UILayoutGuide *_imageViewLayoutGuide;
    NSLayoutConstraint *_imageViewLayoutGuideWidthConstraint;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutConstraint *imageViewLayoutGuideWidthConstraint; // @synthesize imageViewLayoutGuideWidthConstraint=_imageViewLayoutGuideWidthConstraint;
@property(readonly, nonatomic) UILayoutGuide *imageViewLayoutGuide; // @synthesize imageViewLayoutGuide=_imageViewLayoutGuide;
@property(readonly, nonatomic) UIStackView *textStackView; // @synthesize textStackView=_textStackView;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)setSearchSuggestion:(id)arg1;
- (double)imageViewLayoutGuideWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

