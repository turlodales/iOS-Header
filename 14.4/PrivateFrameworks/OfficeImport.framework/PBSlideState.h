//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBSlideState : NSObject
{
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (void).cxx_destruct;
- (unsigned int)generateGroupId;
- (id)buildOrderMap;
- (void)addBuild:(id)arg1 order:(unsigned int)arg2;
- (void)reset;
- (id)init;

@end

