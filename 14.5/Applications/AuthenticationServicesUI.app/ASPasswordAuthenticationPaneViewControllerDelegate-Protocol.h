//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASPasswordAuthenticationPaneViewController, NSString;

@protocol ASPasswordAuthenticationPaneViewControllerDelegate <NSObject>
- (void)passwordAuthenticationViewController:(ASPasswordAuthenticationPaneViewController *)arg1 validateUserEnteredPIN:(NSString *)arg2 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg3;
@end

