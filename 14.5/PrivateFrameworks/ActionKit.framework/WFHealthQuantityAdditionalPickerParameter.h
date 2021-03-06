//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKQuantityType, NSArray;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HKQuantityType *_quantityType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)importQuestionBehavior;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedLabel;
- (_Bool)isHidden;
- (void)updatePossibleStates;
- (id)defaultSerializedRepresentation;
- (id)possibleStates;

@end

