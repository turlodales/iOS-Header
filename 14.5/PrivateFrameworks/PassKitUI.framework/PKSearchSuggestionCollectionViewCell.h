//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PKSearchSuggestionCollectionViewCell : PKDashboardCollectionViewCell
{
    UILabel *_labelSuggestion;
    UIImageView *_imageViewIcon;
    _Bool _isTemplateLayout;
    NSString *_suggestion;
    UIImage *_icon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)resetFonts;
- (id)initWithFrame:(struct CGRect)arg1;

@end

