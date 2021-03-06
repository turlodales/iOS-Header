//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUGridCellProtocol-Protocol.h>

@class HFItem, HUGridCellBackgroundView, HUGridHeadlineCellLayoutOptions, NSArray, NSString, UIImageView, UILabel, UIView;
@protocol HUResizableCellDelegate;

@interface HUGridHeadlineCell : UICollectionViewCell <HUGridCellProtocol>
{
    _Bool _cellContentsHidden;
    _Bool _editing;
    HUGridHeadlineCellLayoutOptions *_layoutOptions;
    HFItem *_item;
    UILabel *_headlineLabel;
    UIView *_editingBackgroundContainerView;
    HUGridCellBackgroundView *_editingBackgroundView;
    UIView *_editingBackgroundDarkeningView;
    UIImageView *_editingChevronImageView;
    NSArray *_headlineCellConstraints;
}

+ (Class)layoutOptionsClass;
+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *headlineCellConstraints; // @synthesize headlineCellConstraints=_headlineCellConstraints;
@property(retain, nonatomic) UIImageView *editingChevronImageView; // @synthesize editingChevronImageView=_editingChevronImageView;
@property(retain, nonatomic) UIView *editingBackgroundDarkeningView; // @synthesize editingBackgroundDarkeningView=_editingBackgroundDarkeningView;
@property(retain, nonatomic) HUGridCellBackgroundView *editingBackgroundView; // @synthesize editingBackgroundView=_editingBackgroundView;
@property(retain, nonatomic) UIView *editingBackgroundContainerView; // @synthesize editingBackgroundContainerView=_editingBackgroundContainerView;
@property(retain, nonatomic) UILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(retain, nonatomic) HUGridHeadlineCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
- (void)_updateHeadlineLabel;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)updateConstraints;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect unpaddedContentFrame;
- (void)prepareForReuse;
- (void)_setupCommonCellAppearance;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPointerInteractionEnabled) _Bool pointerInteractionEnabled;
@property(nonatomic) double pointerRegionMargin;
@property(nonatomic, getter=isRearranging) _Bool rearranging;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

