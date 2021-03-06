//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSMutableCopying-Protocol.h>
#import <WorkflowKit/WFCloudKitItem-Protocol.h>
#import <WorkflowKit/WFSortableGalleryObject-Protocol.h>

@class CKRecordID, NSArray, NSData, NSDate, NSString;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>
{
    CKRecordID *_identifier;
    NSString *_name;
    NSString *_collectionDescription;
    NSArray *_workflows;
    long long _minVersion;
    NSDate *_modifiedAt;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt=_modifiedAt;
@property(readonly, nonatomic) long long minVersion; // @synthesize minVersion=_minVersion;
@property(readonly, nonatomic) NSArray *workflows; // @synthesize workflows=_workflows;
@property(readonly, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (unsigned long long)referenceActionForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *recordSystemFieldsData;
@property(readonly) Class superclass;

@end

