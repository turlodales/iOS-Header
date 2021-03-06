//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSSecureCoding-Protocol.h>

@class GKTournament, NSString, UIColor;

@interface GKTournamentViewRequest : NSObject <NSSecureCoding>
{
    GKTournament *_tournament;
    long long _playerGroup;
    long long _viewType;
    long long _appearanceStyle;
    UIColor *_tintColor;
    UIColor *_secondaryTintColor;
    NSString *_tournamentDefinitionID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tournamentDefinitionID; // @synthesize tournamentDefinitionID=_tournamentDefinitionID;
@property(retain, nonatomic) UIColor *secondaryTintColor; // @synthesize secondaryTintColor=_secondaryTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) long long playerGroup; // @synthesize playerGroup=_playerGroup;
@property(retain, nonatomic) GKTournament *tournament; // @synthesize tournament=_tournament;
- (id)initWithViewType:(long long)arg1 tournamentDefinitionID:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

