//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class NMSSHSession, NSError, NSString;

@protocol NMSSHSessionDelegate <NSObject>

@optional
- (_Bool)session:(NMSSHSession *)arg1 shouldConnectToHostWithFingerprint:(NSString *)arg2;
- (void)session:(NMSSHSession *)arg1 didDisconnectWithError:(NSError *)arg2;
- (NSString *)session:(NMSSHSession *)arg1 keyboardInteractiveRequest:(NSString *)arg2;
@end

