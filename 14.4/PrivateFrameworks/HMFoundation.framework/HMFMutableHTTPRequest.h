//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest
{
}

- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
@property(copy, nonatomic) NSData *body; // @dynamic body;
- (id)responseWithStatusCode:(long long)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4;
- (id)initWithInternalRequest:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSDictionary *headerFields; // @dynamic headerFields;
@property(nonatomic) double timeoutInterval; // @dynamic timeoutInterval;

@end

