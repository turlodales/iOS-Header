//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppPredictionUI/NSObject-Protocol.h>

@class APUIIntentHandlingViewController, INIntent, INIntentResponse, NSString;

@protocol APUIIntentHandlingViewControllerDelegate <NSObject>
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 didComplete:(_Bool)arg2;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(APUIIntentHandlingViewController *)arg1;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 willContinueInAppForIntent:(INIntent *)arg2 completion:(void (^)(void))arg3;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 requiresConfirmationWithResponse:(INIntentResponse *)arg2 confirmationActionTitle:(NSString *)arg3;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 wantsPreferredSize:(struct CGSize)arg2;
@end

