//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface PKDashboardButtonCollectionViewCell : PKDashboardCollectionViewCell
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_titleLabel;
    _Bool _showActivity;
    _Bool _enabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showActivity; // @synthesize showActivity=_showActivity;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_resetFonts;
- (void)_updateTextColor;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

