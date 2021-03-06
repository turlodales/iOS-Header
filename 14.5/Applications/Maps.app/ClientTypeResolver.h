//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ClientTypeResolverCurrentLocationSource, ClientTypeResolverParkedCarSource, ClientTypeResolverPersonalizedItemSource, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ClientTypeResolver : NSObject
{
    ClientTypeResolverCurrentLocationSource *_currentLocationSource;
    ClientTypeResolverParkedCarSource *_parkedCarSource;
    ClientTypeResolverPersonalizedItemSource *_personalizedItemSource;
    NSMutableDictionary *_sources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) ClientTypeResolverPersonalizedItemSource *personalizedItemSource; // @synthesize personalizedItemSource=_personalizedItemSource;
@property(retain, nonatomic) ClientTypeResolverParkedCarSource *parkedCarSource; // @synthesize parkedCarSource=_parkedCarSource;
@property(retain, nonatomic) ClientTypeResolverCurrentLocationSource *currentLocationSource; // @synthesize currentLocationSource=_currentLocationSource;
- (id)sourceWithType:(int)arg1;
- (void)addSource:(id)arg1;
- (_Bool)hasObjectWithType:(int)arg1;
- (id)initWithCurrentLocation:(_Bool)arg1 parkedCar:(_Bool)arg2 personalizedItems:(_Bool)arg3;
- (id)init;

@end

