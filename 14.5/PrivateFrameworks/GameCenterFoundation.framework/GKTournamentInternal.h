//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKLeaderboardInternal, GKPlayerInternal, GKScoreInternal, GKTournamentDefinitionInternal, GKTournamentParticipantInternal, NSDate, NSString, NSURL;

@interface GKTournamentInternal : GKInternalRepresentation
{
    NSString *_tournamentID;
    GKTournamentDefinitionInternal *_tournamentDefinition;
    NSString *_tournamentName;
    long long _maxReplays;
    long long _minPlayers;
    long long _maxPlayers;
    long long _scoringMethod;
    double _duration;
    long long _randomSeed;
    NSDate *_registrationBeginDate;
    NSDate *_registrationEndDate;
    NSDate *_tournamentBeginDate;
    NSDate *_tournamentEndDate;
    long long _tournamentState;
    GKScoreInternal *_bestScore;
    GKPlayerInternal *_winningPlayer;
    long long _playerCount;
    GKTournamentParticipantInternal *_localParticipant;
    GKLeaderboardInternal *_leaderboard;
    long long _tournamentError;
    NSURL *_inviteURLForMessages;
    long long _tournamentNumber;
    long long _seedingMethod;
    GKPlayerInternal *_customTournamentCreator;
    NSString *_nextTournamentID;
    NSDate *_nextTournamentBeginDate;
}

+ (id)defaultCustomTournamentForTournamentDefinition:(id)arg1;
+ (id)secureCodedPropertyKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *nextTournamentBeginDate; // @synthesize nextTournamentBeginDate=_nextTournamentBeginDate;
@property(retain, nonatomic) NSString *nextTournamentID; // @synthesize nextTournamentID=_nextTournamentID;
@property(retain, nonatomic) GKPlayerInternal *customTournamentCreator; // @synthesize customTournamentCreator=_customTournamentCreator;
@property(nonatomic) long long seedingMethod; // @synthesize seedingMethod=_seedingMethod;
@property(nonatomic) long long tournamentNumber; // @synthesize tournamentNumber=_tournamentNumber;
@property(retain, nonatomic) NSURL *inviteURLForMessages; // @synthesize inviteURLForMessages=_inviteURLForMessages;
@property(nonatomic) long long tournamentError; // @synthesize tournamentError=_tournamentError;
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKTournamentParticipantInternal *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(nonatomic) long long playerCount; // @synthesize playerCount=_playerCount;
@property(retain, nonatomic) GKPlayerInternal *winningPlayer; // @synthesize winningPlayer=_winningPlayer;
@property(retain, nonatomic) GKScoreInternal *bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) long long tournamentState; // @synthesize tournamentState=_tournamentState;
@property(retain, nonatomic) NSDate *tournamentEndDate; // @synthesize tournamentEndDate=_tournamentEndDate;
@property(retain, nonatomic) NSDate *tournamentBeginDate; // @synthesize tournamentBeginDate=_tournamentBeginDate;
@property(retain, nonatomic) NSDate *registrationEndDate; // @synthesize registrationEndDate=_registrationEndDate;
@property(retain, nonatomic) NSDate *registrationBeginDate; // @synthesize registrationBeginDate=_registrationBeginDate;
@property(nonatomic) long long randomSeed; // @synthesize randomSeed=_randomSeed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long scoringMethod; // @synthesize scoringMethod=_scoringMethod;
@property(nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
@property(nonatomic) long long maxReplays; // @synthesize maxReplays=_maxReplays;
@property(retain, nonatomic) NSString *tournamentName; // @synthesize tournamentName=_tournamentName;
@property(retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition; // @synthesize tournamentDefinition=_tournamentDefinition;
@property(retain, nonatomic) NSString *tournamentID; // @synthesize tournamentID=_tournamentID;

@end

