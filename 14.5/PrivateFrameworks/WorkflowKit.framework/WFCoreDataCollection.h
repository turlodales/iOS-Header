//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSArray, NSData, NSOrderedSet, NSSet, NSString, WFCoreDataWorkflowIcon, WFWorkflowIcon;

@interface WFCoreDataCollection : NSManagedObject <WFRecordStorage>
{
}

+ (id)recordPropertyMap;
+ (id)fetchRequest;
@property(copy, nonatomic) NSOrderedSet *deserializedLastRemoteCollectionOrderingSubset;
@property(copy, nonatomic) NSOrderedSet *deserializedLastRemoteCollectionOrdering;
@property(copy, nonatomic) NSOrderedSet *deserializedLastRemoteShortcutOrderingSubset;
@property(copy, nonatomic) NSOrderedSet *deserializedLastRemoteShortcutOrdering;
@property(copy, nonatomic) NSArray *collectionOrdering;
@property(copy, nonatomic) NSArray *shortcutOrdering;
@property(retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property(readonly, nonatomic, getter=isFolder) _Bool folder;
- (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSData *cloudKitFolderRecordMetadata; // @dynamic cloudKitFolderRecordMetadata;
@property(retain, nonatomic) NSData *cloudKitOrderingRecordMetadata; // @dynamic cloudKitOrderingRecordMetadata;
@property(retain, nonatomic) NSOrderedSet *collections; // @dynamic collections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WFCoreDataWorkflowIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSData *lastRemoteCollectionOrderingData; // @dynamic lastRemoteCollectionOrderingData;
@property(retain, nonatomic) NSData *lastRemoteCollectionOrderingSubsetData; // @dynamic lastRemoteCollectionOrderingSubsetData;
@property(retain, nonatomic) NSData *lastRemoteShortcutOrderingData; // @dynamic lastRemoteShortcutOrderingData;
@property(retain, nonatomic) NSData *lastRemoteShortcutOrderingSubsetData; // @dynamic lastRemoteShortcutOrderingSubsetData;
@property(nonatomic) long long lastSyncedHash; // @dynamic lastSyncedHash;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *parents; // @dynamic parents;
@property(retain, nonatomic) NSOrderedSet *shortcuts; // @dynamic shortcuts;
@property(readonly) Class superclass;
@property(nonatomic) _Bool tombstoned; // @dynamic tombstoned;

@end

