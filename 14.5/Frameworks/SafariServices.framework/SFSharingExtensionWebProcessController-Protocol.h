//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SFSharingExtensionWebProcessController <NSObject>
- (void)finalizeJavaScriptForSharingExtension:(NSString *)arg1 arguments:(NSDictionary *)arg2;
- (void)evaluateJavaScriptForSharingExtension:(NSString *)arg1 extraArguments:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
- (void)prepareJavaScriptWorldForSharingExtension:(NSString *)arg1 javaScript:(NSString *)arg2;
@end

