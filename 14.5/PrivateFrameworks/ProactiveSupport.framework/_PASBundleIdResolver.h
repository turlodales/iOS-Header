//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject
{
    NSString *_exePath;
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (id)bundleIdentifierOrProcessName:(_Bool *)arg1;
- (void)_populateResultWithLockWitness:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;

@end

