//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener, SNSystemServiceResourceCoordinator;

__attribute__((visibility("hidden")))
@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    SNSystemServiceResourceCoordinator *_coordinator;
}

+ (id)launchWithResourceCoordinator:(id)arg1 onXPCListener:(id)arg2;
+ (id)launchAsMachServiceWithName:(id)arg1;
+ (id)launchDefaultServer;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)connectLocally;
- (void)start;
- (id)initWithResourceCoordinator:(id)arg1 onListener:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

