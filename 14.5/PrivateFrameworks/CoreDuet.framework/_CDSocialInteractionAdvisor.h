//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionStore;

@interface _CDSocialInteractionAdvisor : NSObject
{
    _CDInteractionStore *_store;
}

- (void).cxx_destruct;
@property(retain) _CDInteractionStore *store; // @synthesize store=_store;
- (id)inSeedPredicateForSeed:(id)arg1;
- (id)recentPredicateForDate:(id)arg1 lambda:(float)arg2 lookAheadWeeks:(int)arg3;
- (void)tuneUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;
- (id)adviseInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)rankContacts:(id)arg1 withSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)keyForModelWithSettings:(id)arg1;
- (id)initWithStore:(id)arg1;

@end

