//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCharacteristic, NSSet;

@interface HFCustomCharacteristicActionSuggestionResult : NSObject
{
    _Bool _isMutuallyExclusiveAction;
    HMCharacteristic *_characteristic;
    id _targetValue;
    NSSet *_matchingExistingActions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMutuallyExclusiveAction; // @synthesize isMutuallyExclusiveAction=_isMutuallyExclusiveAction;
@property(readonly, copy, nonatomic) NSSet *matchingExistingActions; // @synthesize matchingExistingActions=_matchingExistingActions;
@property(readonly, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 matchingActions:(id)arg3;

@end

