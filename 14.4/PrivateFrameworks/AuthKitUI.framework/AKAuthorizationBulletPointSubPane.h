//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class NSString, UIImage, UIImageView, UILabel, UIStackView, UIView;

@interface AKAuthorizationBulletPointSubPane : AKAuthorizationSubPane
{
    UIView *_baseView;
    UIImageView *_bulletImageView;
    UIStackView *_messageStackView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *messageStackView; // @synthesize messageStackView=_messageStackView;
@property(readonly, nonatomic) UIImageView *bulletImageView; // @synthesize bulletImageView=_bulletImageView;
@property(readonly, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (id)_iconColor;
@property(retain, nonatomic) NSString *message;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (struct CGSize)_sizeForBulletImage:(id)arg1;
- (id)_imageViewWithImage:(id)arg1;
- (id)_verticalStackView;
- (id)_labelWithString:(id)arg1 title:(_Bool)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3;

@end

