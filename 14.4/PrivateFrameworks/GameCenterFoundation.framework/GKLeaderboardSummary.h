//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKLeaderboardSummaryInternal;

@interface GKLeaderboardSummary : NSObject
{
    GKLeaderboardSummaryInternal *_internal;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GKLeaderboardSummaryInternal *internal; // @synthesize internal=_internal;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long friendRank; // @dynamic friendRank;
@property(nonatomic) unsigned long long rank; // @dynamic rank;
@property(nonatomic) unsigned long long scoreValue; // @dynamic scoreValue;
@property(nonatomic) unsigned long long totalEntries; // @dynamic totalEntries;
@property(nonatomic) unsigned long long totalFriendEntries; // @dynamic totalFriendEntries;

@end

