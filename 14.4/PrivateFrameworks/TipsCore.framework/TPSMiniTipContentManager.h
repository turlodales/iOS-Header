//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSMiniTipContentManager : NSObject
{
    TPSServiceConnection *_serviceProxy;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) TPSServiceConnection *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (CDUnknownBlockType)_contentWithContentIDCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)_performWithProxyHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_performSyncWithProxyHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)hintDismissedByPerformedOutcomeForIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3;
- (void)hintDismissedByUserForIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3;
- (void)hintDisplayedForIdentifier:(id)arg1 context:(id)arg2;
- (void)personalizationFailedForContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3;
- (void)validateAndPrepareContentForDisplay:(id)arg1 bundleID:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)contentWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (id)init;

@end

