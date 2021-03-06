//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSTimer;

@interface HFSynchronizedTimer : NSObject
{
    NSTimer *_activeTimer;
    NSMapTable *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *activeTimer; // @synthesize activeTimer=_activeTimer;
- (void)_timerDidFire;
- (void)_updateTimerState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

