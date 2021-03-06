//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKInviteInternal, GKMatchRequestInternal, GKPlayerInternal, NSArray, NSData, NSError, NSString;

@protocol GKMatchmakerServiceProtocol <GKExtensionProtocol>

@optional
- (void)setFailedWithError:(NSError *)arg1;
- (void)applicationWillEnterForeground;
- (void)setNearbyPlayer:(NSString *)arg1 reachable:(_Bool)arg2;
- (void)inviterCancelled;
- (void)setAutomatchFailedWithError:(NSError *)arg1;
- (void)setInvitesFailedWithError:(NSError *)arg1;
- (void)setPlayer:(GKPlayerInternal *)arg1 sentData:(NSData *)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 connected:(_Bool)arg2;
- (void)setConnectingStateForPlayer:(GKPlayerInternal *)arg1;
- (void)setPlayer:(GKPlayerInternal *)arg1 responded:(long long)arg2;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setDefaultInvitationMessage:(NSString *)arg1;
- (void)setExistingPlayers:(NSArray *)arg1;
- (void)setAcceptedInviteInternal:(GKInviteInternal *)arg1;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
- (void)setMatchmakingMode:(long long)arg1;
- (void)setHosted:(_Bool)arg1;
@end

