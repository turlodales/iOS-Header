//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolSecurityCertificate : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSArray *ipAddresses;
@property(copy, nonatomic) NSArray *dnsNames;
@property(nonatomic) double validUntil;
@property(nonatomic) double validFrom;
@property(copy, nonatomic) NSString *subject;

@end

