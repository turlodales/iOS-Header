//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate;

@interface HMDLocationTuple : NSObject
{
    CLLocation *_location;
    unsigned long long _numberOfReachableIPAccessory;
    unsigned long long _numberOfReachableBTLEAccessory;
    unsigned long long _numberOfreachableMediaAccessory;
    NSDate *_date;
}

+ (id)tupleWithLocation:(id)arg1 reachableIPAccessory:(unsigned long long)arg2 reachableBTLEAccessory:(unsigned long long)arg3 reachableMediaAccessory:(unsigned long long)arg4 date:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long numberOfreachableMediaAccessory; // @synthesize numberOfreachableMediaAccessory=_numberOfreachableMediaAccessory;
@property(nonatomic) unsigned long long numberOfReachableBTLEAccessory; // @synthesize numberOfReachableBTLEAccessory=_numberOfReachableBTLEAccessory;
@property(nonatomic) unsigned long long numberOfReachableIPAccessory; // @synthesize numberOfReachableIPAccessory=_numberOfReachableIPAccessory;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)description;

@end

