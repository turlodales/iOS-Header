//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBKUniversalPlaybackPositionTransactionContext-Protocol.h"

@class ML3MusicLibrary, NSMutableSet, NSString;

@interface SBDPlaybackPositionTransaction : NSObject <SBKUniversalPlaybackPositionTransactionContext>
{
    ML3MusicLibrary *_musicLibrary;
    unsigned long long _lastSyncedEntityRevision;
    unsigned long long _transactionEntityRevision;
    NSString *_lastSyncedDomainVersion;
    NSMutableSet *_ubiquitousIdentifiersToSync;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *ubiquitousIdentifiersToSync; // @synthesize ubiquitousIdentifiersToSync=_ubiquitousIdentifiersToSync;
@property(copy) NSString *lastSyncedDomainVersion; // @synthesize lastSyncedDomainVersion=_lastSyncedDomainVersion;
@property unsigned long long transactionEntityRevision; // @synthesize transactionEntityRevision=_transactionEntityRevision;
@property unsigned long long lastSyncedEntityRevision; // @synthesize lastSyncedEntityRevision=_lastSyncedEntityRevision;
@property(retain) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

