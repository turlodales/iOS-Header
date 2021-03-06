//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCRelativePath;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAsyncDirectoryEnumerator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    long long _batchSize;
    _Bool _isRecursive;
    int _error;
    BRCRelativePath *_rootPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BRCRelativePath *rootPath; // @synthesize rootPath=_rootPath;
- (void)dealloc;
- (void)scheduleWithProcessBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(_Bool)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4;

@end

