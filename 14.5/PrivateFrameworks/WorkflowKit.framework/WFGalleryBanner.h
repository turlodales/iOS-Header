//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSMutableCopying-Protocol.h>
#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSData, NSString, WFFileRepresentation;

@interface WFGalleryBanner : NSObject <WFCloudKitItem, NSMutableCopying>
{
    CKRecordID *_identifier;
    NSString *_name;
    CKRecordID *_detailPage;
    WFFileRepresentation *_iphone2xImageFile;
    WFFileRepresentation *_iphone3xImageFile;
    WFFileRepresentation *_ipad2xImageFile;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

+ (struct CGSize)pixelSizeForBannerSize:(long long)arg1;
+ (struct CGSize)pointSizeForBannerSize:(long long)arg1;
+ (double)scaleForBannerSize:(long long)arg1;
+ (id)propertyForSize:(long long)arg1;
+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) WFFileRepresentation *ipad2xImageFile; // @synthesize ipad2xImageFile=_ipad2xImageFile;
@property(retain, nonatomic) WFFileRepresentation *iphone3xImageFile; // @synthesize iphone3xImageFile=_iphone3xImageFile;
@property(retain, nonatomic) WFFileRepresentation *iphone2xImageFile; // @synthesize iphone2xImageFile=_iphone2xImageFile;
@property(readonly, nonatomic) CKRecordID *detailPage; // @synthesize detailPage=_detailPage;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageForSize:(long long)arg1;
- (id)imageFileForSize:(long long)arg1;
- (unsigned long long)referenceActionForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *recordSystemFieldsData;
@property(readonly) Class superclass;

@end

