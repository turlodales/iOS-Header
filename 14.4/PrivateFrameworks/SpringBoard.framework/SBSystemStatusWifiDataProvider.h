//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSString, STWifiStatusDomainPublisher;

@interface SBSystemStatusWifiDataProvider : NSObject <BSInvalidatable>
{
    _Bool _wifiActive;
    _Bool _fallingBackToCellular;
    STWifiStatusDomainPublisher *_wifiDataPublisher;
    void *_cellularFallbackWatcher;
}

- (void).cxx_destruct;
@property(nonatomic) void *cellularFallbackWatcher; // @synthesize cellularFallbackWatcher=_cellularFallbackWatcher;
@property(nonatomic, getter=isFallingBackToCellular) _Bool fallingBackToCellular; // @synthesize fallingBackToCellular=_fallingBackToCellular;
@property(nonatomic, getter=isWifiActive) _Bool wifiActive; // @synthesize wifiActive=_wifiActive;
@property(readonly, nonatomic) STWifiStatusDomainPublisher *wifiDataPublisher; // @synthesize wifiDataPublisher=_wifiDataPublisher;
- (void)_updateWifiActive;
- (void)_updateData;
- (void)_registerForNotifications;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

