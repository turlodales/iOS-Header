//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreFinanceItemMetadata, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface ICStoreFileAssetInfo : NSObject
{
    NSDictionary *_responseDictionary;
    NSURL *_assetURL;
    NSString *_downloadKey;
    NSArray *_fairPlayInfoList;
    long long _flavorType;
    NSString *_fileExtension;
    unsigned long long _fileSize;
    ICStoreFinanceItemMetadata *_metadata;
    NSData *_md5;
    long long _expectedProtectionType;
}

- (void).cxx_destruct;
@property(nonatomic) long long expectedProtectionType; // @synthesize expectedProtectionType=_expectedProtectionType;
@property(copy, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) ICStoreFinanceItemMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) long long flavorType; // @synthesize flavorType=_flavorType;
@property(copy, nonatomic) NSArray *fairPlayInfoList; // @synthesize fairPlayInfoList=_fairPlayInfoList;
@property(copy, nonatomic) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (id)_metadataDictionary;
@property(readonly, nonatomic) long long protectionType;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary;
- (id)initWithFileAssetResponseDictionary:(id)arg1;
- (id)initWithAssetURL:(id)arg1;

@end

