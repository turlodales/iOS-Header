//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsRequest, GEOETARequest, GEOQuickETARequest, NSString;

@interface GEOQuickETARequester : NSObject
{
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRequest *_directionsETARequest;
    NSString *_loggingFacility;
}

+ (_Bool)requestETAFromOrigin:(id)arg1 toDestinations:(id)arg2 transportType:(int)arg3 timepoint:(struct GEOTimepoint)arg4 includeDistance:(_Bool)arg5 commonOptions:(id)arg6 automobileOptions:(id)arg7 walkingOptions:(id)arg8 transitOptions:(id)arg9 cyclingOptions:(id)arg10 auditToken:(id)arg11 handler:(CDUnknownBlockType)arg12 callbackQueue:(id)arg13;
+ (_Bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)cancel;
- (void)calculateETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithResponseHandler:(CDUnknownBlockType)arg3;
- (void)calculateETAFromAPI:(_Bool)arg1 WithResponseHandler:(CDUnknownBlockType)arg2;
- (void)calculateETAWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_calculateRoutingETAWithSummary:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_calculateRoutingETAWithHandler:(CDUnknownBlockType)arg1;
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithHandler:(CDUnknownBlockType)arg3;
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 WithHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

@end

