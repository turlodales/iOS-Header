//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPTCPInfo <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) unsigned long long txRetransmitBytes;
@property(copy, nonatomic) NSString *statsType;
@property(nonatomic) unsigned long long wiredTXPackets;
@property(nonatomic) unsigned long long wiredRXPackets;
@property(nonatomic) unsigned long long wifiTXPackets;
@property(nonatomic) unsigned long long wifiRXPackets;
@property(nonatomic) unsigned int varRTT;
@property(nonatomic) unsigned long long txRetransmitPackets;
@property(nonatomic) unsigned long long txPackets;
@property(nonatomic) unsigned long long txBytes;
@property(nonatomic) unsigned long long rxPackets;
@property(nonatomic) unsigned long long rxOutOfOrderBytes;
@property(nonatomic) unsigned long long rxDuplicateBytes;
@property(nonatomic) unsigned long long rxBytes;
@property(nonatomic) unsigned int minRTT;
@property(nonatomic) unsigned int connectSuccesses;
@property(nonatomic) unsigned int connectAttempts;
@property(nonatomic) unsigned long long cellTXPackets;
@property(nonatomic) unsigned long long cellRXPackets;
@property(nonatomic) unsigned int avgRTT;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

