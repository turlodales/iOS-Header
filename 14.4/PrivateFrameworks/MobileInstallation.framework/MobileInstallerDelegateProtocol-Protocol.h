//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError;

@protocol MobileInstallerDelegateProtocol
- (void)delegateMessageDeliveryCompleteWithError:(NSError *)arg1;
- (void)enumerateAppDictionary:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)reportProgress:(NSDictionary *)arg1;
@end

