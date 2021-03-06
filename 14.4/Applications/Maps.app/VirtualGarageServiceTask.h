//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AuxiliaryTask-Protocol.h"
#import "GEOConfigChangeListenerDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VirtualGarageServiceTask : NSObject <GEOConfigChangeListenerDelegate, AuxiliaryTask>
{
    _Bool _usesVirtualGarage;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

+ (long long)creationPreference;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(nonatomic) _Bool usesVirtualGarage; // @synthesize usesVirtualGarage=_usesVirtualGarage;
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;
- (void)_mapsTerminated:(id)arg1;
- (void)_tearDownVirtualGarage;
- (void)_setupVirtualGarageIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

