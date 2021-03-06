//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <UIKitServices/UISApplicationStateXPCServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBSSerialQueue, NSString;
@protocol UISApplicationStateServiceDelegate;

@interface UISApplicationStateService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface>
{
    BSServiceConnectionListener *_listener;
    FBSSerialQueue *_calloutQueue;
    id <UISApplicationStateServiceDelegate> _delegate;
    struct {
        unsigned int delegateDataSourceForApplicationBundleIdentifier:1;
    } _delegateFlags;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UISApplicationStateServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_dataSourceForApplicationBundleIdentifier:(id)arg1;
- (_Bool)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2 legacyEntitlement:(id)arg3;
- (_Bool)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2;
- (id)_operatingBundleIdentifier;
- (oneway void)setBadgeValue:(id)arg1;
- (void)badgeValueWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)setUsesBackgroundNetwork:(id)arg1;
- (void)usesBackgroundNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)setMinimumBackgroundFetchInterval:(id)arg1;
- (oneway void)setNextWakeIntervalSinceReferenceDate:(id)arg1;
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)initWithCalloutQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

