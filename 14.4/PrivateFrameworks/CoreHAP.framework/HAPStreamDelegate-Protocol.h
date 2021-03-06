//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPRelayStream, NSData, NSError, NSString;

@protocol HAPStreamDelegate <NSObject>
- (void)stream:(HAPRelayStream *)arg1 didReceiveData:(NSData *)arg2 withIdentifier:(NSString *)arg3;
- (void)stream:(HAPRelayStream *)arg1 didFailToWriteDataWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)stream:(HAPRelayStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)streamDidResume:(HAPRelayStream *)arg1;
- (void)streamDidSuspend:(HAPRelayStream *)arg1;
@end

