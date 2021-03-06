//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKUploadRequestMetadata.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding>
{
    long long _listIndex;
    NSData *_fileSignature;
    NSData *_referenceSignature;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(readonly, copy, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(readonly, nonatomic) long long listIndex; // @synthesize listIndex=_listIndex;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7 listIndex:(long long)arg8;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;

@end

