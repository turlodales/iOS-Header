//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class AMSLookupItemOffer, NSString;
@protocol OS_dispatch_queue, WLKInstallable;

@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressHandler;
    id <WLKInstallable> _installable;
    AMSLookupItemOffer *_offer;
}

+ (id)_matchingAppProxyFromProxies:(id)arg1 forInstallable:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSLookupItemOffer *offer; // @synthesize offer=_offer;
@property(readonly, nonatomic) id <WLKInstallable> installable; // @synthesize installable=_installable;
- (_Bool)_canOpenAppWithBundleID:(id)arg1;
- (void)_sendCompletionWithError:(id)arg1;
- (void)_doPurchaseWithAppAdamID:(id)arg1 offer:(id)arg2;
- (void)beginInstallationWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)dealloc;
- (id)initWithInstallable:(id)arg1 offer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

