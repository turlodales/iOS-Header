//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SGKeyValueCacheManager : NSObject
{
    NSString *_basePath;
    NSMutableArray *_cacheFiles;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (void)deleteValueByRecordIdSet:(id)arg1;
- (void)replaceCacheOfType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)cacheOfType:(unsigned long long)arg1;
- (id)cacheOfType:(unsigned long long)arg1 forceReadFromDisk:(_Bool)arg2;
- (id)initInMemory;
- (id)init;
- (id)initWithBasePath:(id)arg1;

@end

