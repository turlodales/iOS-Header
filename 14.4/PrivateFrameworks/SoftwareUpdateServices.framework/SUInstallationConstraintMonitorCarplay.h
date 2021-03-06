//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

#import <SoftwareUpdateServices/CARSessionObserving-Protocol.h>

@class CARSessionStatus, NSString;

@interface SUInstallationConstraintMonitorCarplay : SUInstallationConstraintMonitorBase <CARSessionObserving>
{
    _Bool _queue_CarplayConnected;
    CARSessionStatus *_queue_carSessionStatus;
}

- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)_queue_carplayDidChange;
- (unsigned long long)unsatisfiedConstraints;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

