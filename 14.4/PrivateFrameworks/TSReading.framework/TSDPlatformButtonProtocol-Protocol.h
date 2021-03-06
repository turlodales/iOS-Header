//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSBundle, NSString, UIButton;

@protocol TSDPlatformButtonProtocol <NSObject>
+ (UIButton *)tsdPlatformButtonWithFrame:(struct CGRect)arg1;
- (_Bool)showsTouchWhenHighlighted;
- (void)setShowsTouchWhenHighlighted:(_Bool)arg1;
- (void)setAlternateImageNamed:(NSString *)arg1 inBundle:(NSBundle *)arg2;
- (void)setImageNamed:(NSString *)arg1 inBundle:(NSBundle *)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
@end

