//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Widgets/NSObject-Protocol.h>

@class NSURL, WGWidgetHostingViewController;

@protocol WGWidgetHostingViewControllerHost <NSObject>

@optional
- (_Bool)shouldRemoveSnapshotWhenNotVisibleForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeNonASTCSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeNonCAMLSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeArchivedSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didRemoveSnapshotAtURL:(NSURL *)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didEncounterProblematicSnapshotAtURL:(NSURL *)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
- (long long)largestAvailableDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (long long)userSpecifiedDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
@end

