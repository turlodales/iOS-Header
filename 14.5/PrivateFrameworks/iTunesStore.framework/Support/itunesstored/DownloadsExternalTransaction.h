//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadsSession.h"

@class DownloadsChangeset, ExternalDownloadState;

@interface DownloadsExternalTransaction : DownloadsSession
{
    DownloadsChangeset *_changeset;
    ExternalDownloadState *_externalState;
}

@property(readonly, copy, nonatomic) DownloadsChangeset *changeset; // @synthesize changeset=_changeset;
- (void)unionChangeset:(id)arg1;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3;
- (void)setRestoreReason:(id)arg1;
- (void)setExternalPropertyValues:(id)arg1 forDownloadWithID:(long long)arg2;
- (void)setExternalPropertyValues:(id)arg1 forAssetWithID:(long long)arg2;
- (void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;
- (void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;
- (void)removeExternalValuesForDownloadID:(long long)arg1;
- (void)removeExternalValuesForAssetID:(long long)arg1;
- (void)addDownloadChangeTypes:(long long)arg1;
- (void)dealloc;
- (id)initWithSessionDescriptor:(id)arg1;

@end

