//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSData, NSString;

@interface CRKOpenAppRequest : CATTaskRequest
{
    _Bool _lockInApp;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    NSData *_activityData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool lockInApp; // @synthesize lockInApp=_lockInApp;
@property(copy, nonatomic) NSData *activityData; // @synthesize activityData=_activityData;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

