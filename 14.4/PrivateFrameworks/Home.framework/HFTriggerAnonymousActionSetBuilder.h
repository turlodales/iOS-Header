//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAbstractBaseActionSetBuilder.h>

@class HFMutableSetDiff, HMTrigger;

@interface HFTriggerAnonymousActionSetBuilder : HFAbstractBaseActionSetBuilder
{
    HMTrigger *_containingTrigger;
    unsigned long long _actionSetType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionSetType; // @synthesize actionSetType=_actionSetType;
@property(retain, nonatomic) HMTrigger *containingTrigger; // @synthesize containingTrigger=_containingTrigger;
- (id)commitItem;
- (id)deleteActionSet;
- (void)updateAction:(id)arg1;
- (void)updateActionBuildersDiff:(id)arg1;
- (void)addAction:(id)arg1 actionSetType:(unsigned long long)arg2;
- (id)getOrCreateActionSet;
- (_Bool)hasActions;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) HFMutableSetDiff *actionBuilders; // @dynamic actionBuilders;

@end

