//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupView : UIView
{
    double _intrinsicHeight;
    struct CGSize _boundsSize;
    _Bool _initialLayout[2];
    NSMutableArray *_itemViews;
    NSMutableArray *_snapshotsToRemove;
    _Bool _animated;
    long long _slideMode;
    long long _style;
    PKStackedTextItemGroup *_content;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) PKStackedTextItemGroup *content; // @synthesize content=_content;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)setContent:(id)arg1 animated:(_Bool)arg2;
- (void)_updateSubviewsAnimated:(_Bool)arg1;
- (void)layoutIfNeededAnimated:(_Bool)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) double headerPadding;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

