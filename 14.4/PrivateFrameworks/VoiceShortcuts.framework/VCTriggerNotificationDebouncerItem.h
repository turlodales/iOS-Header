//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, WFConfiguredTrigger, WFDebouncer, WFWorkflowReference;

@interface VCTriggerNotificationDebouncerItem : NSObject
{
    WFConfiguredTrigger *_configuredTrigger;
    WFWorkflowReference *_reference;
    WFDebouncer *_debouncer;
    NSSet *_triggerEventIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *triggerEventIDs; // @synthesize triggerEventIDs=_triggerEventIDs;
@property(readonly, nonatomic) WFDebouncer *debouncer; // @synthesize debouncer=_debouncer;
@property(readonly, nonatomic) WFWorkflowReference *reference; // @synthesize reference=_reference;
@property(readonly, nonatomic) WFConfiguredTrigger *configuredTrigger; // @synthesize configuredTrigger=_configuredTrigger;
- (id)description;
- (id)initWithConfiguredTrigger:(id)arg1 reference:(id)arg2 triggerEventIDs:(id)arg3 debouncer:(id)arg4;

@end

