//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Timeline/TLTimelineOperation.h>

@class NSArray, NSDate, NSError;

@interface TLTimelineExtendOperation : TLTimelineOperation
{
    NSDate *_afterDate;
    double _timeout;
    unsigned long long _limit;
    NSArray *_timelineEntries;
    NSError *_extendError;
}

+ (unsigned long long)relativePriority;
- (void).cxx_destruct;
@property(retain) NSError *extendError; // @synthesize extendError=_extendError;
@property(retain) NSArray *timelineEntries; // @synthesize timelineEntries=_timelineEntries;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSDate *afterDate; // @synthesize afterDate=_afterDate;
- (void)main;
- (id)error;
- (id)initWithIdentifiable:(id)arg1 afterDate:(id)arg2 timeout:(double)arg3 entryLimit:(unsigned long long)arg4;

// Remaining properties
@property(copy) CDUnknownBlockType operationCompletionBlock; // @dynamic operationCompletionBlock;
@property(copy) CDUnknownBlockType timelineOperationCompletionBlock; // @dynamic timelineOperationCompletionBlock;

@end

