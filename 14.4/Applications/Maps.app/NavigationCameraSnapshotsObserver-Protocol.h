//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NavigationCameraSnapshotManager;

@protocol NavigationCameraSnapshotsObserver <NSObject>
- (void)cameraSnapshotsManager:(NavigationCameraSnapshotManager *)arg1 didRemoveAtIndex:(unsigned long long)arg2 fromTraceFile:(NSString *)arg3;
- (void)cameraSnapshotsManager:(NavigationCameraSnapshotManager *)arg1 didInsertAtIndex:(unsigned long long)arg2 toTraceFile:(NSString *)arg3;
@end

