//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKTurnBasedInviteViewController, NSError, NSString;

@protocol GKTurnBasedInviteViewControllerDelegate <NSObject>
- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didCreateMatchID:(NSString *)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(GKTurnBasedInviteViewController *)arg1;
@end

