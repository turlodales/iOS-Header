//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDCKAttachmentSyncCKOperationFactory : NSObject
{
}

+ (id)_desiredKeysArrayForType:(long long)arg1;
- (id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1 activity:(id)arg2;
- (id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4;
- (id)_operationGroupWithName:(id)arg1;
- (_Bool)_defaultsSayWeHaveSyncedOnce;
- (id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1 activity:(id)arg2;
- (id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3 activity:(id)arg4;
- (id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5 activity:(id)arg6;

@end

