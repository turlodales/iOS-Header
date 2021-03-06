//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSessionTaskTransactionMetrics;

@interface OspreyConnectionMetrics : NSObject
{
    NSURLSessionTaskTransactionMetrics *_metrics;
    unsigned long long _connectionState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) NSURL *requestURL;
@property(readonly, nonatomic) NSString *connectionMethod;
@property(readonly, nonatomic) double fetchStartToFirstByteTime;
@property(readonly, nonatomic) double secureConnectionTime;
@property(readonly, nonatomic) double tcpConnectTime;
@property(readonly, nonatomic) double connectionEstablishmentTime;
@property(readonly, nonatomic) double dnsResolutionTime;
@property(readonly, nonatomic) double fetchStartToDomainLookupStartTime;
- (id)initWithMetrics:(id)arg1;

@end

