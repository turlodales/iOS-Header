//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRemoteRequestOperation.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class AMSMediaTokenService, ICClientInfo;

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding>
{
    ICClientInfo *_clientInfo;
    unsigned long long _options;
    AMSMediaTokenService *_mediaTokenService;
}

+ (void)_invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 usingMediaTokenService:(id)arg3;
+ (id)_createMediaTokenServiceForClientInfo:(id)arg1 requester:(id)arg2;
+ (void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_didFetchMediaToken:(id)arg1 withError:(id)arg2;
- (void)execute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithClientInfo:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithClientInfo:(id)arg1;

@end

