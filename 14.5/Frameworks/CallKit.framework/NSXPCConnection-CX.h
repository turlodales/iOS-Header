//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class NSSet, NSString;

@interface NSXPCConnection (CX)
- (_Bool)cx_clientSandboxCanAccessFileURL:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *cx_capabilities;
@property(readonly, nonatomic, getter=cx_isProcessOnDemandInstallCapable) _Bool cx_processOnDemandInstallCapable;
@property(readonly, copy, nonatomic) NSString *cx_processName;
@property(readonly, copy, nonatomic) NSString *cx_developerTeamIdentifier;
@property(readonly, copy, nonatomic) NSString *cx_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *cx_applicationIdentifier;
@end

