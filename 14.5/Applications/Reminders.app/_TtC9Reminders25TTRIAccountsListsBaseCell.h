//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC9Reminders25TTRIAccountsListsBaseCell : NUITableViewContainerCell
{
    MISSING_TYPE *ttriAccessibilityCountText;
    MISSING_TYPE *ttriAccessibilityGroupName;
    MISSING_TYPE *treeCellViewModel;
    MISSING_TYPE *treeCellViewDelegate;
    MISSING_TYPE *delegate;
    MISSING_TYPE *iconContainerView;
    MISSING_TYPE *leadingControl;
    MISSING_TYPE *unitTest_forceLargeTextLayout;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *customAccessoryView;
    MISSING_TYPE *totalIndentation;
    MISSING_TYPE *needsUpdateGridSubviewRows;
    MISSING_TYPE *$__lazy_storage_$_fillerView;
}

+ (Class)containerViewClass;
- (void).cxx_destruct;
- (_Bool)ttriAccessibilityIsSpeakThisElement;
- (_Bool)accessibilityActivate;
@property(nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;

@end

