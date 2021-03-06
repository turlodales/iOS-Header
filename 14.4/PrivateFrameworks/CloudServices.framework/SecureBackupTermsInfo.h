//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudServices/NSCopying-Protocol.h>

@class NSString;

@interface SecureBackupTermsInfo : PBCodable <NSCopying>
{
    NSString *_altDSID;
    NSString *_countryCode;
    NSString *_icloudVersion;
    NSString *_metadata;
    NSString *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *icloudVersion; // @synthesize icloudVersion=_icloudVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasIcloudVersion;
@property(readonly, nonatomic) _Bool hasVersion;

@end

