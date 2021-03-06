//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailMessageLibrary, NSString;

@interface MFSqliteMessageIDStore : NSObject
{
    NSString *_url;
    long long _mailboxRowid;
    MFMailMessageLibrary *_library;
}

- (void).cxx_destruct;
- (unsigned long long)flagsForUID:(id)arg1;
- (void)deleteAllUIDs;
- (unsigned int)numberOfMessageIDs;
- (void)deleteUIDsNotInArray:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (id)knownMessageIDsFromSet:(id)arg1;
- (void)_loadMailboxRowidIfNecessary:(id)arg1;
- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;

@end

