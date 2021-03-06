//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCountryConfiguration, GEORouteAttributes, NSString, RouteCollection;

__attribute__((visibility("hidden")))
@interface StartNavigationDetailsBuilder : NSObject
{
    GEOCountryConfiguration *_countryConfiguration;
    GEORouteAttributes *_routeAttributes;
    NSString *_traceRecordingNameOverride;
    RouteCollection *_routeCollection;
    NSString *_tracePlaybackPath;
    struct NavigationDetailsOptions _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *tracePlaybackPath; // @synthesize tracePlaybackPath=_tracePlaybackPath;
@property(readonly, nonatomic) RouteCollection *routeCollection; // @synthesize routeCollection=_routeCollection;
@property(copy, nonatomic) NSString *traceRecordingNameOverride; // @synthesize traceRecordingNameOverride=_traceRecordingNameOverride;
@property(nonatomic) struct NavigationDetailsOptions options; // @synthesize options=_options;
@property(copy, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOCountryConfiguration *countryConfiguration; // @synthesize countryConfiguration=_countryConfiguration;
- (id)buildNavigationDetails;
- (id)initWithTracePlaybackPath:(id)arg1 routeCollection:(id)arg2;
- (id)initWithRouteCollection:(id)arg1;

@end

