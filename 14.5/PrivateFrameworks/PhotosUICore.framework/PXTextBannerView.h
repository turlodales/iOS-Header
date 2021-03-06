//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface PXTextBannerView : UIView
{
    UIImageView *_backgroundView;
    UILabel *_textLabel;
    _Bool _destructiveText;
    NSString *_text;
    long long _textAlignment;
}

- (void).cxx_destruct;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic, getter=isDestructiveText) _Bool destructiveText; // @synthesize destructiveText=_destructiveText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

