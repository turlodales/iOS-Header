//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HKRegionAvailability : NSObject
{
    NSArray *_supportedRegions;
    long long _version;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSArray *supportedRegions; // @synthesize supportedRegions=_supportedRegions;
- (id)initWithDeserializedAvailability:(id)arg1;

@end

