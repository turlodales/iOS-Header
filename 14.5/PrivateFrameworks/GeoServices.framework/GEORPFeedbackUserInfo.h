//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAppAttestInfo, GEORPUserCredentials, NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAppAttestInfo *_anonUserInfo;
    NSData *_devicePushToken;
    NSString *_preferredEmail;
    GEORPAppAttestInfo *_rolloverInfo;
    NSString *_ugcUserId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_anonUserInfo:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_preferredEmail:1;
        unsigned int read_rolloverInfo:1;
        unsigned int read_ugcUserId:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORPAppAttestInfo *rolloverInfo;
@property(readonly, nonatomic) _Bool hasRolloverInfo;
@property(retain, nonatomic) GEORPAppAttestInfo *anonUserInfo;
@property(readonly, nonatomic) _Bool hasAnonUserInfo;
@property(retain, nonatomic) NSString *ugcUserId;
@property(readonly, nonatomic) _Bool hasUgcUserId;
@property(retain, nonatomic) NSString *preferredEmail;
@property(readonly, nonatomic) _Bool hasPreferredEmail;
@property(retain, nonatomic) NSString *userEmail;
@property(readonly, nonatomic) _Bool hasUserEmail;
@property(retain, nonatomic) NSData *devicePushToken;
@property(readonly, nonatomic) _Bool hasDevicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;
@property(readonly, nonatomic) _Bool hasUserCredentials;
- (id)initWithData:(id)arg1;
- (id)init;

@end

