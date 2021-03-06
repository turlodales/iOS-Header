//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HKHealthWrapCodableMessageHeader : PBCodable <NSCopying>
{
    long long _version;
    NSData *_encryptedHMACKey;
    NSData *_encryptedMessageKey;
    NSData *_encryptionIdentity;
    NSString *_studyIdentifier;
    NSData *_studyUUID;
    int _trailingHMACLength;
    int _trailingSHALength;
    NSData *_uploadUUID;
    _Bool _compressed;
    struct {
        unsigned int version:1;
        unsigned int trailingHMACLength:1;
        unsigned int trailingSHALength:1;
        unsigned int compressed:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *studyUUID; // @synthesize studyUUID=_studyUUID;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic) int trailingSHALength; // @synthesize trailingSHALength=_trailingSHALength;
@property(nonatomic) int trailingHMACLength; // @synthesize trailingHMACLength=_trailingHMACLength;
@property(retain, nonatomic) NSData *encryptedHMACKey; // @synthesize encryptedHMACKey=_encryptedHMACKey;
@property(retain, nonatomic) NSString *studyIdentifier; // @synthesize studyIdentifier=_studyIdentifier;
@property(retain, nonatomic) NSData *uploadUUID; // @synthesize uploadUUID=_uploadUUID;
@property(retain, nonatomic) NSData *encryptionIdentity; // @synthesize encryptionIdentity=_encryptionIdentity;
@property(retain, nonatomic) NSData *encryptedMessageKey; // @synthesize encryptedMessageKey=_encryptedMessageKey;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasStudyUUID;
@property(nonatomic) _Bool hasCompressed;
@property(nonatomic) _Bool hasTrailingSHALength;
@property(nonatomic) _Bool hasTrailingHMACLength;
@property(readonly, nonatomic) _Bool hasEncryptedHMACKey;
@property(readonly, nonatomic) _Bool hasStudyIdentifier;
@property(readonly, nonatomic) _Bool hasUploadUUID;
@property(readonly, nonatomic) _Bool hasEncryptionIdentity;
@property(readonly, nonatomic) _Bool hasEncryptedMessageKey;
@property(nonatomic) _Bool hasVersion;

@end

