//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL, SSMetricsEventController;

@interface SSMetricsEventReportingSession : NSObject
{
    long long _insertTimestamp;
    NSURL *_reportingURL;
    NSArray *_unreportedEvents;
    NSMutableArray *_unreportedEventPIDs;
    SSMetricsEventController *_eventController;
    NSString *_sessionCanaryIdentifier;
    _Bool _suppressUserInfo;
}

- (void).cxx_destruct;
- (void)_writeString:(id)arg1 toData:(id)arg2;
- (id)_unreportedEvents;
- (long long)_estimateSizeOfJsonObject:(id)arg1;
- (id)writeEventsToStream:(id)arg1 uncompressedMaxSize:(long long)arg2;
- (id)writeEventsToStream:(id)arg1;
- (id)sessionCanaryIdentifier;
- (_Bool)markEventsAsReported;
- (_Bool)anyUnreportedEvents;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressDSID:(_Bool)arg3 eventController:(id)arg4;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressUserInfo:(_Bool)arg3 eventController:(id)arg4;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3;

@end

