//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface SLWebUserInfoResponse : NSObject
{
    long long _statusCode;
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSError *_error;
    NSString *_errorMessage;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(readonly) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (void)setError:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
@property(readonly) NSString *emailAddress;
- (void)setErrorMessage:(id)arg1;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

