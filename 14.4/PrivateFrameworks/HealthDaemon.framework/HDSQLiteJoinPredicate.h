//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteTruePredicate.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSSet;

@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <NSCopying>
{
    NSSet *_joinClauses;
}

+ (id)predicateWithJoinClauses:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *joinClauses; // @synthesize joinClauses=_joinClauses;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;

@end

