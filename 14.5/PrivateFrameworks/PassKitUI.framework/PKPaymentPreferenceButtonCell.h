//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceCell.h>

@class NSString, UIButton;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell
{
    UIButton *_button;
    CDUnknownBlockType _handler;
    NSString *_buttonTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)pk_childrenForAppearance;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

