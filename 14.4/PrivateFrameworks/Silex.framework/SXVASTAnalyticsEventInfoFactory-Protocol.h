//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class ADMediaAnalyticsEventInfo, ADMediaAnalyticsProgressEventInfo;
@protocol SXVideoMetadata;

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>
- (ADMediaAnalyticsProgressEventInfo *)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id <SXVideoMetadata>)arg2;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfoWithMetadata:(id <SXVideoMetadata>)arg1;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfo;
@end

