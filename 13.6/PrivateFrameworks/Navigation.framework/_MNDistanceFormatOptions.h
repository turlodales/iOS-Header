//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNDistanceFormatOptions : NSObject
{
    _Bool metric;
    _Bool yards;
    _Bool abbreviateUnits;
    _Bool spoken;
    unsigned long long maximumFractionDigits;
    long long rounding;
    unsigned long long _minimumFractionDigits;
}

@property(nonatomic) unsigned long long minimumFractionDigits; // @synthesize minimumFractionDigits=_minimumFractionDigits;
@property(nonatomic) long long rounding; // @synthesize rounding;
@property(nonatomic) _Bool spoken; // @synthesize spoken;
@property(nonatomic) _Bool abbreviateUnits; // @synthesize abbreviateUnits;
@property(nonatomic) _Bool yards; // @synthesize yards;
@property(nonatomic) _Bool metric; // @synthesize metric;
@property(nonatomic) unsigned long long maximumFractionDigits; // @synthesize maximumFractionDigits;

@end

