//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HMActionSet, HMHome, NSString;
@protocol HFHomeKitObject, HFServiceLikeItem;

@interface HFActionSetSuggestionItem : HFItem <HFHomeKitItemProtocol>
{
    _Bool _includeExistingActionSets;
    _Bool _persistAddedSuggestions;
    _Bool _hasEverHadValidSuggestion;
    HMHome *_home;
    HMActionSet *_actionSet;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEverHadValidSuggestion; // @synthesize hasEverHadValidSuggestion=_hasEverHadValidSuggestion;
@property(nonatomic) _Bool persistAddedSuggestions; // @synthesize persistAddedSuggestions=_persistAddedSuggestions;
@property(nonatomic) _Bool includeExistingActionSets; // @synthesize includeExistingActionSets=_includeExistingActionSets;
@property(copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
@property(readonly, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

