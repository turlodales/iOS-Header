//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption, NSSet;

@protocol HFAccessorySettingSiriLanguageAdapterObserver <NSObject>

@optional
- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 selectedLanguageOptionDidChange:(HFSiriLanguageOption *)arg2;
- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 availableLanguageOptionsDidChange:(NSSet *)arg2;
@end

