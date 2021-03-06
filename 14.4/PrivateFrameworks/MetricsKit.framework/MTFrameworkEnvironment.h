//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTIDSecretStore;

@interface MTFrameworkEnvironment : NSObject
{
    NSString *_localDataPath;
    id <MTIDSecretStore> _secretStore;
}

+ (void)initialize;
+ (void)setSharedEnvironment:(id)arg1;
+ (id)sharedEnvironment;
+ (void)withEnvironment:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)metricsKitBundleIdentifier;
- (id)hostProcessBundleIdentifier;
- (_Bool)useCloudKitSandbox;
- (id)secretStore;
- (id)valueForEntitlement:(id)arg1;
- (id)date;
- (_Bool)isInternalBuild;
@property(copy, nonatomic) NSString *localDataPath;

@end

