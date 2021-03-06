//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBAdExposureIneligible : PBCodable <NSCopying>
{
    int _exposureIneligibleLocationType;
    NSString *_exposureIneligibleLocationTypeId;
    int _exposureIneligibleReason;
    int _feedType;
    struct {
        unsigned int exposureIneligibleLocationType:1;
        unsigned int exposureIneligibleReason:1;
        unsigned int feedType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *exposureIneligibleLocationTypeId; // @synthesize exposureIneligibleLocationTypeId=_exposureIneligibleLocationTypeId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExposureIneligibleReason;
@property(nonatomic) int exposureIneligibleReason; // @synthesize exposureIneligibleReason=_exposureIneligibleReason;
@property(readonly, nonatomic) _Bool hasExposureIneligibleLocationTypeId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool hasExposureIneligibleLocationType;
@property(nonatomic) int exposureIneligibleLocationType; // @synthesize exposureIneligibleLocationType=_exposureIneligibleLocationType;

@end

