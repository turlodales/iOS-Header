//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitMetric.h"

@interface CPLCloudKitDownloadMetric : CPLCloudKitMetric
{
    unsigned long long _requestedItemCount;
    unsigned long long _expectedSize;
    unsigned long long _downloadedItemCount;
    unsigned long long _downloadedSize;
    unsigned long long _transcodedItemCount;
}

@property(nonatomic) unsigned long long transcodedItemCount; // @synthesize transcodedItemCount=_transcodedItemCount;
@property(nonatomic) unsigned long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(nonatomic) unsigned long long downloadedItemCount; // @synthesize downloadedItemCount=_downloadedItemCount;
@property(nonatomic) unsigned long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) unsigned long long requestedItemCount; // @synthesize requestedItemCount=_requestedItemCount;
- (id)description;
- (void)prepareCKEventMetric:(id)arg1;
- (id)init;

@end

