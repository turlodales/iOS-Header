//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class EKTravelEngineHypothesis, NSString;
@protocol CALNTravelEngine;

@protocol CALNTravelEngineDelegate <NSObject>
- (void)travelEngine:(id <CALNTravelEngine>)arg1 authorizationChanged:(_Bool)arg2;
- (void)travelEngine:(id <CALNTravelEngine>)arg1 eventSignificantlyChangedWithEventExternalURL:(NSString *)arg2;
- (void)travelEngine:(id <CALNTravelEngine>)arg1 receivedHypothesis:(EKTravelEngineHypothesis *)arg2 eventExternalURL:(NSString *)arg3;
@end

