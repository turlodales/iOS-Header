//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBasePlayerCell.h>

@class GKLabel, GKTurnBasedMatch, GKTurnBasedParticipant, NSArray, NSDictionary, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIStackView, UIView, _TtC12GameCenterUI22OverlappingPlayersView;

@interface GKTurnParticipantCell : GKBasePlayerCell
{
    _Bool _isDetail;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipant *_participant;
    SEL _detailPressedAction;
    UIView *_divider;
    GKLabel *_bottomLabel;
    UIButton *_detailButton;
    UIImageView *_statusImageView;
    UIStackView *_textStackView;
    NSLayoutConstraint *_iconLeadingConstraint;
    NSLayoutConstraint *_textStackViewToSuperViewLeadingConstraint;
    NSLayoutConstraint *_textStackViewToIconViewLeadingConstraint;
    NSLayoutConstraint *_statusImageTrailingConstraint;
    NSLayoutConstraint *_textContainerTrailingConstraint;
    NSLayoutConstraint *_detailButtonConstraint;
    NSLayoutConstraint *_overlappingPlayersViewWidthConstraint;
    NSLayoutConstraint *_overlappingPlayersViewTrailingConstraint;
    _TtC12GameCenterUI22OverlappingPlayersView *_overlappingPlayersView;
    UIView *_overlappingPlayersViewContainer;
    UILabel *_additionalPlayerCountLabel;
    NSArray *_constraints;
    NSDictionary *_playerAvatarMapping;
    NSArray *_previousParticipants;
    struct UIEdgeInsets _insets;
}

+ (id)itemHeightList;
+ (double)defaultRowHeight;
+ (void)registerCellClassesForCollectionView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *previousParticipants; // @synthesize previousParticipants=_previousParticipants;
@property(retain, nonatomic) NSDictionary *playerAvatarMapping; // @synthesize playerAvatarMapping=_playerAvatarMapping;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *additionalPlayerCountLabel; // @synthesize additionalPlayerCountLabel=_additionalPlayerCountLabel;
@property(retain, nonatomic) UIView *overlappingPlayersViewContainer; // @synthesize overlappingPlayersViewContainer=_overlappingPlayersViewContainer;
@property(retain, nonatomic) _TtC12GameCenterUI22OverlappingPlayersView *overlappingPlayersView; // @synthesize overlappingPlayersView=_overlappingPlayersView;
@property(retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewTrailingConstraint; // @synthesize overlappingPlayersViewTrailingConstraint=_overlappingPlayersViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewWidthConstraint; // @synthesize overlappingPlayersViewWidthConstraint=_overlappingPlayersViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *detailButtonConstraint; // @synthesize detailButtonConstraint=_detailButtonConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textContainerTrailingConstraint; // @synthesize textContainerTrailingConstraint=_textContainerTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *statusImageTrailingConstraint; // @synthesize statusImageTrailingConstraint=_statusImageTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textStackViewToIconViewLeadingConstraint; // @synthesize textStackViewToIconViewLeadingConstraint=_textStackViewToIconViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textStackViewToSuperViewLeadingConstraint; // @synthesize textStackViewToSuperViewLeadingConstraint=_textStackViewToSuperViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint; // @synthesize iconLeadingConstraint=_iconLeadingConstraint;
@property(retain, nonatomic) UIStackView *textStackView; // @synthesize textStackView=_textStackView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) GKLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(nonatomic) SEL detailPressedAction; // @synthesize detailPressedAction=_detailPressedAction;
@property(retain, nonatomic) GKTurnBasedParticipant *participant; // @synthesize participant=_participant;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (void)updateMarginConstraints;
- (void)detailPressed:(id)arg1;
- (void)configureForDetail;
- (void)updateOverlappingPlayerViewsAvatar;
- (void)configureOverlappingPlayersView;
- (_Bool)needsRefreshOverlappingPlayersView;
- (id)getPlayerIDForAllNonAutomatchedTurnBasedParticipants;
- (void)configureForMatch;
- (void)didUpdateModel;
- (_Bool)matchWantsLocalPlayerAttention;
- (void)establishConstraints;
- (double)getOverlappingPlayerAvatarIconSize;
- (void)updateUIBasedOnTraitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

