//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPTopicReadWriteServerProtocol-Protocol.h>

@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>
{
}

- (void)clearWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteAllTopicsWithTopicId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

