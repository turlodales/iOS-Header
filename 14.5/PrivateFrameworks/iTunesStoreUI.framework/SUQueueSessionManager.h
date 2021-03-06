//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SUQueueSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_downloadManagers;
    NSMutableArray *_preorderManagers;
}

- (id)_queueSessionWithQueue:(id)arg1 fromArray:(id)arg2;
- (id)_queueSessionWithManagerOptions:(id)arg1 fromArray:(id)arg2;
- (id)_queueSessionWithDownloadKinds:(id)arg1 fromArray:(id)arg2;
- (void)_endQueueSession:(id)arg1 fromArray:(id)arg2;
- (void)endPreorderManagerSessionWithManager:(id)arg1;
- (void)endDownloadManagerSessionForManager:(id)arg1;
- (id)beginPreorderManagerSessionWithItemKinds:(id)arg1;
- (id)beginDownloadManagerSessionWithManagerOptions:(id)arg1;
- (id)beginDownloadManagerSessionWithDownloadKinds:(id)arg1;
- (id)beginDownloadManagerSessionForDownloadKind:(id)arg1;
- (void)dealloc;
- (id)init;

@end

