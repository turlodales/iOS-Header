//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIInterfaceActionVisualStyle, UITraitCollection;
@protocol UIInterfaceActionVisualStyleProviding;

@protocol UIInterfaceActionGroupDisplaying <NSObject>
@property(nonatomic) __weak id <UIInterfaceActionVisualStyleProviding> visualStyleProvider;
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (UIInterfaceActionVisualStyle *)defaultVisualStyleForTraitCollection:(UITraitCollection *)arg1 presentationStyle:(long long)arg2;
- (void)reloadVisualStyle;
@end

