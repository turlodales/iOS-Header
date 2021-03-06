//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface EventMonitorEvent : NSObject <NSCopying>
{
    double _lastOccurrenceCheckTime;
    long long _pollInterval;
    _Bool _shouldKeepDaemonAlive;
}

@property(nonatomic) _Bool shouldKeepDaemonAlive; // @synthesize shouldKeepDaemonAlive=_shouldKeepDaemonAlive;
@property(nonatomic) long long pollInterval; // @synthesize pollInterval=_pollInterval;
@property(nonatomic, getter=_lastOccurrenceCheckTime, setter=_setLastOccurrenceCheckTime:) double _lastOccurrenceCheckTime; // @synthesize _lastOccurrenceCheckTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performAction;
@property(readonly, nonatomic) _Bool hasOccurred;
- (id)init;

@end

