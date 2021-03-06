//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMKappaInternal;

@interface CMKappa : NSObject
{
    CMKappaInternal *_internal;
}

+ (_Bool)areStatsAvailable;
@property(readonly, nonatomic) CMKappaInternal *_internal; // @synthesize _internal;
- (int)getState;
- (void)sendAPCmd:(int)arg1;
- (void)sendCmd:(int)arg1;
- (void)sendAPConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5;
- (void)sendConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5;
- (void)stopKappaUpdates;
- (void)startKappaUpdatesForItem:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

