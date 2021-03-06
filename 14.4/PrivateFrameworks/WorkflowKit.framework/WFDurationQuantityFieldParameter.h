//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter
{
}

+ (unsigned long long)calendarUnitFromUnitString:(id)arg1;
+ (_Bool)unitStringIsDurationUnit:(id)arg1;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)defaultSerializedRepresentation;
- (id)stateForDuration:(double)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (_Bool)parameterStateIsValid:(id)arg1;
@property(nonatomic) unsigned long long possibleCalendarUnits;
- (id)initWithDefinition:(id)arg1;

@end

