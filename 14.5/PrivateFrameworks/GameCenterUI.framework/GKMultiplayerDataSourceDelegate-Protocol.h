//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GKMultiplayerParticipant, _TtC12GameCenterUI31GKMultiplayerCollectionViewCell;

@protocol GKMultiplayerDataSourceDelegate
- (_Bool)isCanceling;
- (long long)automatchParticipantStatus;
- (void)didTapRemoveParticipant:(GKMultiplayerParticipant *)arg1;
- (void)didTapInviteOnCell:(_TtC12GameCenterUI31GKMultiplayerCollectionViewCell *)arg1;
- (long long)multiplayerCellLayoutMode;
- (void)didUpdateParticipants;
@end

