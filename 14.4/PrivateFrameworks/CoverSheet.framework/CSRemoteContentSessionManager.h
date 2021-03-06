//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/CSRemoteContentSessionPreferencesProvider-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol CSRemoteContentSessionHostDelegate, OS_dispatch_queue, SBFAuthenticationStatusProvider;

@interface CSRemoteContentSessionManager : NSObject <CSRemoteContentSessionPreferencesProvider>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMutableDictionary *_sessionIDToSession;
    NSMutableDictionary *_serviceNameToPreferences;
    id <CSRemoteContentSessionHostDelegate> _forwardingHostDelegate;
    id <SBFAuthenticationStatusProvider> _authenticationStatusProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SBFAuthenticationStatusProvider> authenticationStatusProvider; // @synthesize authenticationStatusProvider=_authenticationStatusProvider;
@property(nonatomic) __weak id <CSRemoteContentSessionHostDelegate> forwardingHostDelegate; // @synthesize forwardingHostDelegate=_forwardingHostDelegate;
- (void)remoteContentSession:(id)arg1 didUpdateWithPreferences:(id)arg2;
- (id)preferencesForRemoteContentSession:(id)arg1;
- (id)_queue_existingSessionsWithDefinition:(id)arg1;
- (id)_queue_existingSessions;
- (id)_queue_createSessionWithDefinition:(id)arg1;
- (void)didInvalidateSessionWithSessionID:(id)arg1;
- (id)createSessionWithDefinition:(id)arg1;
- (id)existingSessionsWithDefinition:(id)arg1;
- (id)existingSessions;
- (id)initWithAuthenticationStatusProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

