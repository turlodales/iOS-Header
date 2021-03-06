//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXAssetControllerObserver-Protocol.h>

@class AXAssetController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface AXUltronModelAssetManager : NSObject <AXAssetControllerObserver>
{
    NSMutableArray *_observers;
    AXAssetController *_assetController;
    NSMutableDictionary *_assetsTotalBytesWritten;
    NSMutableDictionary *_assetsTotalTimeExpected;
    NSMutableDictionary *_assetDownloadStalled;
    NSMutableDictionary *_cachedAssets;
    NSDictionary *_modelMap;
    long long _previousReportedSize;
    long long _expectedDownloadSize;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) long long expectedDownloadSize; // @synthesize expectedDownloadSize=_expectedDownloadSize;
@property(nonatomic) long long previousReportedSize; // @synthesize previousReportedSize=_previousReportedSize;
- (void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4 hasRemainingDownloads:(_Bool)arg5;
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(_Bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;
- (void)refresh;
- (void)cacheAsset:(id)arg1;
- (long long)assetStatus;
- (_Bool)isAssetDownloadStalled;
- (long long)totalExpectedTimeOfAllAssets;
- (long long)totalBytesOfAllAssetsWritten;
- (void)updateDownloadingAsset:(id)arg1 totalBytesWritten:(long long)arg2 isStalled:(_Bool)arg3 expectedTimeRemaining:(double)arg4;
- (void)downloadAssets;
- (void)run;
- (long long)totalSizeExpected;
- (long long)totalSizeOccupied;
- (id)localURLForDetector:(id)arg1;
- (void)notifyAssetsState;
- (void)notifyDownloadProgress:(long long)arg1 totalSizeExpected:(long long)arg2 totalRemainingTime:(double)arg3 isStalled:(_Bool)arg4;
- (void)notifyAssetsNotReady;
- (void)notifyAssetsReady;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)soundDetectionTypeForString:(id)arg1;
- (void)_reset;
- (void)initializeModelMap;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

