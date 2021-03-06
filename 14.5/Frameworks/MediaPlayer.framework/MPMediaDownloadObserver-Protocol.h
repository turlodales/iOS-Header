//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPMediaDownloadManager, NSArray, NSError;

@protocol MPMediaDownloadObserver <NSObject>

@optional
- (void)downloadManager:(MPMediaDownloadManager *)arg1 didChangeDownloadPausedReasonForAssets:(NSArray *)arg2;
- (void)downloadManager:(MPMediaDownloadManager *)arg1 didCancelAssets:(NSArray *)arg2;
- (void)downloadManager:(MPMediaDownloadManager *)arg1 didFinishAsset:(NSArray *)arg2 withError:(NSError *)arg3;
- (void)downloadManager:(MPMediaDownloadManager *)arg1 didUpdateDownloadProgress:(NSArray *)arg2;
- (void)downloadManager:(MPMediaDownloadManager *)arg1 didEnqueueAssetDownloads:(NSArray *)arg2 didRemoveAssetDownloads:(NSArray *)arg3;
@end

