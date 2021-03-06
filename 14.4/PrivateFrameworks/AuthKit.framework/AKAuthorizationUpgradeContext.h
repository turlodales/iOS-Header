//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface AKAuthorizationUpgradeContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_appName;
    NSString *_appID;
    NSString *_bundleID;
    NSString *_serviceID;
    NSString *_teamID;
    NSString *_nonce;
    NSString *_state;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

