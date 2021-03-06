//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdID/ADPersonalizedAds_XPC-Protocol.h>
#import <AdID/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface ADPersonalizedAdsService : ADSingleton <NSXPCListenerDelegate, ADPersonalizedAds_XPC>
{
    _Bool _requestInFlight;
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool requestInFlight; // @synthesize requestInFlight=_requestInFlight;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)setPersonalizedAds:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)reconcileDataForRecord:(id)arg1;
- (void)sendPersonalizedAdsAndReconcileDataForRecord:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

