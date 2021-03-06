//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GKTurnBasedEventHandlerDelegate, OS_dispatch_queue;

@interface GKTurnBasedEventHandler : NSObject
{
    _Bool _didBecomeActive;
    NSObject<GKTurnBasedEventHandlerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_lookForEventQueue;
}

+ (id)sharedTurnBasedEventHandler;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue; // @synthesize lookForEventQueue=_lookForEventQueue;
@property(nonatomic) __weak NSObject<GKTurnBasedEventHandlerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didBecomeActive; // @synthesize didBecomeActive=_didBecomeActive;
- (void)lookForEvent;
- (void)callTurnEventForMatch:(id)arg1 userTapped:(_Bool)arg2;
- (id)init;

@end

