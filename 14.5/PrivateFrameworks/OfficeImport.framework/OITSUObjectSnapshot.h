//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OITSUObjectSnapshot : NSObject
{
    unsigned long long mEntryCount;
    void **mSnapshot;
    NSArray *mCompared;
}

- (void)dealloc;
- (void)p_clear;
- (void)compare;
- (void)calibrate:(id)arg1;
- (id)init;

@end

