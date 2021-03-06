//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FontServices/FontServicesWebKitSupportClientProtocol-Protocol.h>
#import <FontServices/FontServicesWebKitSupportServerProtocol-Protocol.h>
#import <FontServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;

@interface FSWebKitProcessSupportManager : NSObject <FontServicesWebKitSupportClientProtocol, FontServicesWebKitSupportServerProtocol, NSXPCListenerDelegate>
{
    NSXPCConnection *_hostConnection;
    NSXPCListener *_serverListener;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListener *serverListener; // @synthesize serverListener=_serverListener;
@property(retain, nonatomic) NSXPCConnection *hostConnection; // @synthesize hostConnection=_hostConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)ping2:(CDUnknownBlockType)arg1;
- (void)userInstalledFontsInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)checkin;
- (id)initWithXPCEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

