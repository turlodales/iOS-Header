//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class APClientInfo, APContext, NSArray, NSUUID;

@protocol APPCControllerDaemonInterface
- (void)proxyURLWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)finishedWithRequestsForRequester:(NSUUID *)arg1;
- (void)requestPromotedContentOfTypes:(NSArray *)arg1 forRequester:(NSUUID *)arg2 forContext:(APContext *)arg3 withClientInfo:(APClientInfo *)arg4 completionHandler:(void (^)(void))arg5;
@end

