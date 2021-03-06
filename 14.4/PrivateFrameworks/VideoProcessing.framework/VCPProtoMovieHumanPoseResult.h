//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoBounds *_bounds;
    float _confidence;
    int _flags;
    VCPProtoTimeRange *_timeRange;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)exportToLegacyDictionary;

@end

