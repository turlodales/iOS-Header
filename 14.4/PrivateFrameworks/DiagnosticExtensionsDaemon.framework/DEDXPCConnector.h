//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/NSXPCListenerDelegate-Protocol.h>

@class DEDXPCInbound, NSString, NSXPCConnection, NSXPCListener;
@protocol DEDXPCConnectorDaemonDelegate, OS_os_log;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>
{
    _Bool _isDaemon;
    _Bool _started;
    NSXPCConnection *_connection;
    id <DEDXPCConnectorDaemonDelegate> _daemonDelegate;
    NSObject<OS_os_log> *_log;
    DEDXPCInbound *_inbound;
    NSXPCListener *_listener;
    unsigned long long _connType;
}

- (void).cxx_destruct;
@property _Bool started; // @synthesize started=_started;
@property _Bool isDaemon; // @synthesize isDaemon=_isDaemon;
@property unsigned long long connType; // @synthesize connType=_connType;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) DEDXPCInbound *inbound; // @synthesize inbound=_inbound;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak id <DEDXPCConnectorDaemonDelegate> daemonDelegate; // @synthesize daemonDelegate=_daemonDelegate;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)_whitelistedXPCInterface;
- (id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2;
- (void)startForApp;
- (_Bool)validateConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startForDaemon;
- (void)start;
- (void)configureXPCInbound:(id)arg1;
- (void)configureDaemonModeWithDelegate:(id)arg1;
- (void)configureConnectionType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

