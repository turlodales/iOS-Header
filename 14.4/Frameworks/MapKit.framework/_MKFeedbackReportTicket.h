//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceFeedbackReportTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceFeedbackReportTicket;

__attribute__((visibility("hidden")))
@interface _MKFeedbackReportTicket : NSObject <MKMapServiceFeedbackReportTicket>
{
    id <GEOMapServiceFeedbackReportTicket> _ticket;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithCallbackQueue:(id)arg1 handler:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithFeedbackReportTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

