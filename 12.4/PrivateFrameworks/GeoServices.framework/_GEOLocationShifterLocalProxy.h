//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOLocationShifterProxy-Protocol.h>

@class GEOLocationShifterPersistence, NSString, _GEOLocationShiftRequester;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy>
{
    _GEOLocationShiftRequester *_requester;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_prunePersistentCache;
- (void)_doNetworkRequestForLatLng:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 shouldCache:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)locationShiftFunctionVersion;
- (_Bool)isLocationShiftEnabled;
@property(readonly, nonatomic) GEOLocationShifterPersistence *persistentCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

