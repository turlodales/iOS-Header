//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BitrateLimits : NSObject
{
    int operatingMode;
    unsigned long long defaultValue;
    unsigned long long defaultValueCellular;
    unsigned long long defaultValue2G;
    NSArray *limits;
}

+ (unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2;
@property(readonly, nonatomic) int operatingMode; // @synthesize operatingMode;
@property(readonly, nonatomic) NSArray *limits; // @synthesize limits;
- (unsigned long long)defaultValueForNetwork:(_Bool)arg1;
- (void)capDefaultValues:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2 useCaseWatchContinuity:(_Bool)arg3;

@end

