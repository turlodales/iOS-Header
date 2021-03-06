//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPIndoorWifiScan : PBCodable <NSCopying>
{
    double _age;
    double _timestamp;
    NSString *_bundleId;
    int _channel;
    int _hidden;
    NSString *_mac;
    int _rssi;
    struct {
        unsigned int age:1;
        unsigned int hidden:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBundleId;
@property(nonatomic) _Bool hasAge;
@property(nonatomic) _Bool hasHidden;

@end

