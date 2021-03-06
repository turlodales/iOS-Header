//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class NSString, NSURL, PLForegroundMonitor, PLPhotoAnalysisServiceClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate>
{
    _Bool _didTransitionToOpportunisticDisallowed;
    _Bool _photosAppInForeground;
    _Bool _cameraAppInForeground;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_bonusTimer;
    PLForegroundMonitor *_foregroundMonitor;
    PLPhotoAnalysisServiceClient *_photoAnalysisServiceClient;
    long long _faceQuickClassificationRequestID;
    NSURL *_photoLibraryURL;
}

+ (_Bool)_photoanalysisdIsRunning;
+ (_Bool)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
- (void).cxx_destruct;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3;
- (_Bool)shouldScheduleUserInitiatedAnalysisForAssets;
- (void)informCameraAppForegroundState:(_Bool)arg1;
- (void)informCameraAppCameraViewControllerVisibilityChanged:(_Bool)arg1;
- (void)informOpportunisticTasksAllowed:(_Bool)arg1;
- (id)initWithPhotoAnalysisClient:(id)arg1 photoLibraryURL:(id)arg2;
- (void)_addBonusTime;
- (void)_disableAutoFGAndUserFGConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

