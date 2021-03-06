//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNMTLDeviceWisdomParametersProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>
{
}

- (id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id *)arg2;
- (id)wisdomParameterForMTLDevice:(id)arg1 error:(id *)arg2;
- (void)_flushMetalDeviceWisdomParametersCache;
- (id)_cachedMetalDeviceWisdomParametersAndReturnError:(id *)arg1;
- (id)_wisdomResourcesPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

