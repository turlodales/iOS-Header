//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCClientZone;

@protocol BRCClientZoneDelegate <NSObject>
- (void)didInitialSyncDownForClientZone:(BRCClientZone *)arg1;
- (void)willInitialSyncDownForClientZone:(BRCClientZone *)arg1;
- (void)didChangeSyncStatusForZoneHealthForContainer:(BRCClientZone *)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(BRCClientZone *)arg1;
@end

