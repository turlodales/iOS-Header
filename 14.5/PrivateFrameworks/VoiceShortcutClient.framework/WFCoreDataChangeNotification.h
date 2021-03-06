//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface WFCoreDataChangeNotification : NSObject
{
    _Bool _invalidatedAllObjects;
    int _processIdentifier;
    NSSet *_updated;
    NSSet *_inserted;
    NSSet *_deleted;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSSet *deleted; // @synthesize deleted=_deleted;
@property(readonly, nonatomic) NSSet *inserted; // @synthesize inserted=_inserted;
@property(readonly, nonatomic) NSSet *updated; // @synthesize updated=_updated;
@property(readonly, nonatomic) _Bool invalidatedAllObjects; // @synthesize invalidatedAllObjects=_invalidatedAllObjects;
- (id)debugDescription;
- (id)deletedDescriptors;
- (id)insertedDescriptors;
- (id)updatedDescriptors;
- (_Bool)appliesToObjectURIRepresentations:(id)arg1;
- (_Bool)appliesToResultState:(id)arg1;
- (_Bool)appliesToObjectIDs:(id)arg1;
- (_Bool)originatedInCurrentProcess;
- (_Bool)hasChanges;
- (id)dictionaryRepresentation;
- (id)notificationByMergingChangesFromNotification:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithInvalidatedAllObjects:(_Bool)arg1 updated:(id)arg2 inserted:(id)arg3 deleted:(id)arg4 processIdentifier:(int)arg5;

@end

