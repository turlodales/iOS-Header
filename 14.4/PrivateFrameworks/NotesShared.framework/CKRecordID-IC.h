//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

#import <NotesShared/ICHasDatabaseScope-Protocol.h>

@class NSString;

@interface CKRecordID (IC) <ICHasDatabaseScope>
- (_Bool)ic_isOwnedByCurrentUser;
- (long long)databaseScope;
- (id)ic_loggingDescription;
- (id)ic_loggingDescriptionIncludingBrackets:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

