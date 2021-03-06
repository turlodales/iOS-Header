//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/NSObject-Protocol.h>

@class TSClock;

@protocol TSClockClient <NSObject>

@optional
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didProcessSync:(TSClock *)arg1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didEndClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didBeginClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSClock *)arg2;
- (void)didChangeClockMasterForClock:(TSClock *)arg1;
- (void)didResetClock:(TSClock *)arg1;
@end

