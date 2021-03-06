//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _GEOConfigKeyHelper;
@protocol GEOConfigChangeListenerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOConfigChangedListener : NSObject
{
    _GEOConfigKeyHelper *keyHelper;
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    id <GEOConfigChangeListenerDelegate> delegate;
}

+ (id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
+ (id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GEOConfigChangeListenerDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
@property(nonatomic) __weak _GEOConfigKeyHelper *keyHelper; // @synthesize keyHelper;
- (id)description;
- (void)callListener;

@end

