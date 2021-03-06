//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebBackgroundTaskController : NSObject
{
    unsigned long long _invalidBackgroundTaskIdentifier;
    CDUnknownBlockType _backgroundTaskStartBlock;
    CDUnknownBlockType _backgroundTaskEndBlock;
}

+ (id)sharedController;
@property(copy, nonatomic) CDUnknownBlockType backgroundTaskEndBlock; // @synthesize backgroundTaskEndBlock=_backgroundTaskEndBlock;
@property(copy, nonatomic) CDUnknownBlockType backgroundTaskStartBlock; // @synthesize backgroundTaskStartBlock=_backgroundTaskStartBlock;
@property(nonatomic) unsigned long long invalidBackgroundTaskIdentifier; // @synthesize invalidBackgroundTaskIdentifier=_invalidBackgroundTaskIdentifier;
- (void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1;
- (unsigned long long)startBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

