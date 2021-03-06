//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeviceScorer : NSObject
{
}

+ (_Bool)_shouldEnableDeviceScoring;
+ (id)_loadURLBag;
+ (id)_hexEncodingForData:(id)arg1;
+ (_Bool)deviceScoringSupported;
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;
- (void)_initDeviceScorerWithContext:(id)arg1;
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServerEndpoint:(long long)arg1;

@end

