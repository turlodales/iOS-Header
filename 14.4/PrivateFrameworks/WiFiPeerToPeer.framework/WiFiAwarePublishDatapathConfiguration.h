//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class WiFiAwarePublishDatapathSecurityConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    long long _serviceType;
    WiFiAwarePublishDatapathSecurityConfiguration *_securityConfiguration;
    WiFiAwarePublishDatapathServiceSpecificInfo *_serviceSpecificInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration; // @synthesize securityConfiguration=_securityConfiguration;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)serviceSpecificInfoEqual:(id)arg1;
- (_Bool)securityConfigurationEqual:(id)arg1;
- (id)initWithServiceType:(long long)arg1 securityConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

