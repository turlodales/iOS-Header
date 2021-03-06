//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSURLConnectionDelegate-Protocol.h>
#import <AppleAccount/NSURLSessionDelegate-Protocol.h>

@class NSString;

@interface AACertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate>
{
}

+ (_Bool)isValidCertificateTrust:(struct __SecTrust *)arg1;
+ (_Bool)isSetupServiceHost:(id)arg1;
+ (id)sharedPinner;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

