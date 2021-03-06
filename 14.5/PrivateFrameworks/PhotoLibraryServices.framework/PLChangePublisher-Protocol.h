//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSObject, PLClientServerTransaction, PLDelayedSaveActionsDetail;
@protocol OS_xpc_object;

@protocol PLChangePublisher <NSObject>
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (PLClientServerTransaction *)publishChangeEvent:(NSObject<OS_xpc_object> *)arg1 delayedSaveActionsDetail:(PLDelayedSaveActionsDetail *)arg2 transaction:(PLClientServerTransaction *)arg3;
@end

