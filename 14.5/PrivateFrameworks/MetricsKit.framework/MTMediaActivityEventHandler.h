//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventHandler.h>

@protocol MTMediaActivityEventHandlerDelegate;

@interface MTMediaActivityEventHandler : MTEventHandler
{
}

- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)metricsDataForStopActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6;
- (id)metricsDataForStartActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)didCreateMetricsData:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MTMediaActivityEventHandlerDelegate> delegate; // @dynamic delegate;

@end

