//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, VUIDownloadDataSource;

@protocol VUIDownloadDataSourceDelegate <NSObject>

@optional
- (void)downloadManager:(VUIDownloadDataSource *)arg1 downloadsDidChange:(NSArray *)arg2;
- (void)downloadManager:(VUIDownloadDataSource *)arg1 downloadedFetchDidFinishWithEntities:(NSArray *)arg2;
@end

