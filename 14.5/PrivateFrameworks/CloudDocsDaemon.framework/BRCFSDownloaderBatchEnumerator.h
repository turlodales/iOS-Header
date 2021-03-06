//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCSyncContext, PQLResultSet;

__attribute__((visibility("hidden")))
@interface BRCFSDownloaderBatchEnumerator : NSObject
{
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
    BRCSyncContext *_syncContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BRCSyncContext *syncContext; // @synthesize syncContext=_syncContext;
- (void)close;
- (long long)completedUnitCount;
- (id)stageID;
- (id)etag;
- (id)nextDocumentItem;
- (id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long *)arg4;

@end

