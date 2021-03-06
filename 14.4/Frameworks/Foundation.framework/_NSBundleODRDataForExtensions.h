//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSBundleODRDataCommon.h>

#import <Foundation/NSXPCListenerDelegate-Protocol.h>
#import <Foundation/_NSBundleResourceRequestAppExtensionProtocol-Protocol.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForExtensions : _NSBundleODRDataCommon <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol>
{
    NSXPCConnection *_connection;
}

- (void)hostApplicationAssetPacksBecameUnavailable:(id)arg1;
- (void)hostApplicationAssetPacksBecameAvailable:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)accessSandboxExtension:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

