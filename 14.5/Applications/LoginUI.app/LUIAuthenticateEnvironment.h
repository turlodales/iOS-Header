//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LUIAuthenticateEnvironment : NSObject
{
    _Bool _deviceHasNetwork;
    _Bool _isInternalBuild;
}

@property(readonly, nonatomic) _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(readonly, nonatomic) _Bool deviceHasNetwork; // @synthesize deviceHasNetwork=_deviceHasNetwork;
- (id)init;
- (id)initWithDeviceHasNetwork:(_Bool)arg1 isInternalBuild:(_Bool)arg2;

@end

