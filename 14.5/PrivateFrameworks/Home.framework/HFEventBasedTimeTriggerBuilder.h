//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFConcreteTimeTriggerBuilder.h>

@class NSSet;

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder
{
    NSSet *_stagedEvents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *stagedEvents; // @synthesize stagedEvents=_stagedEvents;
- (id)_updateExecuteOnce;
- (id)_updateRecurrences;
- (id)_updateEvents;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (void)_setupWithExistingTrigger:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

