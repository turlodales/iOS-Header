//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageSecurityOrigin-Protocol.h>

@class NSString, NSURLRequest;

@interface SWMessageSecurityOrigin : NSObject <SWMessageSecurityOrigin>
{
    NSString *_protocol;
    NSString *_host;
    NSURLRequest *_request;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
- (id)initWithProtocol:(id)arg1 host:(id)arg2 request:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

