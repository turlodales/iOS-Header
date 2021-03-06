//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSMutableDictionary, UIColor;

@interface SUToolbarAppearance : NSObject <NSCopying>
{
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_shadowImages;
    UIColor *_tintColor;
}

+ (id)defaultToolbarAppearance;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)styleToolbar:(id)arg1;
- (id)shadowImageForPosition:(long long)arg1;
- (void)setShadowImage:(id)arg1 forPosition:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)enumerateShadowImagesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBackgroundImagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)dealloc;

@end

