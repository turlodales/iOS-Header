//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/NSObject-Protocol.h>

@class NSString;

@protocol KNAnimationPluginArchiving <NSObject>
+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(NSString *)arg2 oldAnimationName:(NSString *)arg3 warning:(id *)arg4 type:(long long)arg5 isFromClassic:(_Bool)arg6 version:(unsigned long long)arg7;
@end

