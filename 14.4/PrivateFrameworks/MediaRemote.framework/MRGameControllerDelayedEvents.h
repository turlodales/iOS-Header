//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MRGameControllerDelayedEvents : NSObject
{
    NSMutableDictionary *_events;
}

- (void).cxx_destruct;
- (void)invokeEventsForController:(unsigned long long)arg1 beacuseElement:(int)arg2;
- (id)eventForController:(unsigned long long)arg1 element:(int)arg2;

@end

