//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject
{
    unsigned long long _generationCount;
    struct __CFDictionary *_proxyNumberToCount;
    void *_secTaskRef;
    struct os_unfair_lock_s _lock;
    _Bool _secTaskClearedOnce;
}

- (void)dealloc;
- (id)init;

@end

