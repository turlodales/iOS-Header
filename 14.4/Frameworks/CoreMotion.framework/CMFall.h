//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMFall : NSObject
{
}

+ (_Bool)areStatsAvailable;
- (void)simulateEvent:(unsigned long long)arg1;
- (void)sendStatsDataToUrl:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)sendStatsDataToUrl:(id)arg1;
- (id)fallConfig;
- (unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1;
- (_Bool)setStatsEnabled:(_Bool)arg1;

@end

