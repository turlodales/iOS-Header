//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary;

@interface WCUserInfo : NSObject <NSSecureCoding>
{
    NSData *_userInfoData;
    NSDictionary *_userInfo;
    NSDictionary *_clientUserInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *clientUserInfo; // @synthesize clientUserInfo=_clientUserInfo;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)verifyUserInfo;
- (_Bool)updateUserInfoData:(id)arg1 error:(id *)arg2;
- (_Bool)updateUserInfo:(id)arg1 error:(id *)arg2;
- (id)description;

@end

