//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapServiceThrottlableTicket-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceWiFiQualityLocationSearchTicket <GEOMapServiceThrottlableTicket>
- (void)cancelLocationSearch;
- (void)submitLocationSearchWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

