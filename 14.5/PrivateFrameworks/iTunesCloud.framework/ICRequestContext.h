//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICClientInfo, ICDeviceInfo, ICNetworkConstraints, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _allowsMutation:1;
    ICNetworkConstraints *_networkConstraints;
    ICClientInfo *_clientInfo;
    ICDeviceInfo *_deviceInfo;
    ICURLResponseAuthenticationProvider *_authenticationProvider;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) ICURLResponseAuthenticationProvider *authenticationProvider; // @synthesize authenticationProvider=_authenticationProvider;
@property(readonly, nonatomic) ICDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, copy, nonatomic) ICClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) ICNetworkConstraints *networkConstraints; // @synthesize networkConstraints=_networkConstraints;
- (id)_webkitUserAgentVersion;
- (_Bool)_allowsMutation;
@property(readonly, copy, nonatomic) NSString *userAgent;
- (void)setNetworkConstraints:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setAuthenticationProvider:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2;
- (id)initWithClientInfo:(id)arg1;

@end

