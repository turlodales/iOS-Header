//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject
{
    NSMutableArray *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)broadcastCardSnippet:(id)arg1;
- (_Bool)isTrackingObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

