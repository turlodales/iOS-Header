//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSUUID, SearchHomeBrowseCategoryCellSizeController, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SearchHomeBrowseCategoryCollectionViewCell : UICollectionViewCell
{
    NSUUID *_updateIdentifier;
    SearchHomeBrowseCategoryCellSizeController *_sizeController;
    UIImageView *_browseImageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_topLabelToTopConstraint;
    NSLayoutConstraint *_bottomLabelToBottomConstraint;
    NSLayoutConstraint *_imageLeadingConstraint;
    NSLayoutConstraint *_imageToLabelConstraint;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageToLabelConstraint; // @synthesize imageToLabelConstraint=_imageToLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint; // @synthesize imageLeadingConstraint=_imageLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomLabelToBottomConstraint; // @synthesize bottomLabelToBottomConstraint=_bottomLabelToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLabelToTopConstraint; // @synthesize topLabelToTopConstraint=_topLabelToTopConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *browseImageView; // @synthesize browseImageView=_browseImageView;
@property(retain, nonatomic) SearchHomeBrowseCategoryCellSizeController *sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) NSUUID *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)prepareForReuse;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

