//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding>
{
    NSString *_serviceName;
    NSData *_serviceSpecificInfo;
    long long _authenticationType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property(readonly, nonatomic) NSData *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)serviceSpecificInfoEqual:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceSpecificInfo:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

