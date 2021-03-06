//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYBuddyDaemonProximitySourceProtocol-Protocol.h>
#import <SetupAssistant/BYDaemonProximitySourceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BYBuddyDaemonProximitySourceProtocol;

@interface BYBuddyDaemonProximitySourceClient : NSObject <BYDaemonProximitySourceProtocol, BYBuddyDaemonProximitySourceProtocol>
{
    id <BYBuddyDaemonProximitySourceProtocol> _delegate;
    NSXPCConnection *_connection;
}

+ (id)proximitySourceClientInterface;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak id <BYBuddyDaemonProximitySourceProtocol> delegate; // @synthesize delegate=_delegate;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)syncProgress:(double)arg1;
- (void)backupCompletedWithError:(id)arg1;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (void)finishedWithError:(id)arg1;
- (void)receivedData:(id)arg1;
- (void)invalidate;
- (void)activateWithSharingChannel:(id)arg1;
- (void)connectToDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

