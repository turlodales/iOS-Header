//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUpUI/NSObject-Protocol.h>

@class FLSpecifierTapHandler, UIViewController;

@protocol FLSpecifierTapHandlerDelegate <NSObject>
- (void)startPresentingForHandler:(FLSpecifierTapHandler *)arg1 withRemoteController:(UIViewController *)arg2;

@optional
- (void)preflightNetworkConnectivityForHandler:(FLSpecifierTapHandler *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

