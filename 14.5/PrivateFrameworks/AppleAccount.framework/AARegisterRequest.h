//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAAuthenticateRequest.h>

@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest
{
    NSMutableDictionary *_additionalCookieHeaders;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (void)addCookieHeaders:(id)arg1;
- (id)urlString;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;

@end

