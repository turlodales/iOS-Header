//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NSObject-Protocol.h>

@class NRTermsEvent, NSUUID;

@protocol NRTermsAcknowledgementRegistry <NSObject>
- (void)checkForAcknowledgement:(NRTermsEvent *)arg1 forDeviceID:(NSUUID *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)add:(NRTermsEvent *)arg1 forDeviceID:(NSUUID *)arg2 withCompletion:(void (^)(NSError *))arg3;
@end

