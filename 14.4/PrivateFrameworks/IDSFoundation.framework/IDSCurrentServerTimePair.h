//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSCurrentServerTimePair : NSObject
{
    unsigned long long _initialProcessMachTime;
    unsigned long long _initialServerTimeInNanoSeconds;
}

@property(readonly, nonatomic) unsigned long long initialServerTimeInNanoSeconds; // @synthesize initialServerTimeInNanoSeconds=_initialServerTimeInNanoSeconds;
@property(readonly, nonatomic) unsigned long long initialProcessMachTime; // @synthesize initialProcessMachTime=_initialProcessMachTime;
- (id)initWithInitialProcessMachTime:(unsigned long long)arg1 initialServerTimeInNanoSeconds:(unsigned long long)arg2;

@end

