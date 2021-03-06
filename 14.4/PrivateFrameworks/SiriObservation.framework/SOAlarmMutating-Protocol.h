//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriObservation/NSObject-Protocol.h>

@class NSString, NSURL, NSUUID;

@protocol SOAlarmMutating <NSObject>
- (void)setIsFiring:(_Bool)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)setRepeatSchedule:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setAlarmID:(NSUUID *)arg1;
@end

