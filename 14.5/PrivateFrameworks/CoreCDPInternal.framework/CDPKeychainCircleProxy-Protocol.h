//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSData;

@protocol CDPKeychainCircleProxy <NSObject>
- (_Bool)requiresInitialSync;
- (_Bool)supportsInteractiveAuth;
- (_Bool)isComplete;
- (NSData *)processIncomingPayload:(NSData *)arg1 error:(id *)arg2;
- (NSData *)initiatingPayload:(id *)arg1;
@end

