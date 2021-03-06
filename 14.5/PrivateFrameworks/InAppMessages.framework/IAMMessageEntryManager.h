//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IAMMessageEntryManager : NSObject
{
    NSDictionary *_messageEntryByIdentifier;
    NSDictionary *_priorityMessageEntryByIdentifier;
    NSDictionary *_messageEntriesByEventTriggers;
    NSDictionary *_messageEntriesByContextPropertyTriggers;
    NSDictionary *_messageEntriesByUnknownKindTriggers;
    NSDictionary *_messageEntriesByTargetIdentifier;
    NSArray *_messageEntries;
    NSString *_modalTargetIdentifier;
}

+ (void)_addMessageEntry:(id)arg1 toTriggerKeyDictionary:(id)arg2 atKey:(id)arg3;
+ (id)uniqueMessageEntriesInMessageEntriesByTrigger:(id)arg1;
+ (id)messageEntries:(id)arg1 withSatisfiedPresentationTriggerForTriggerContext:(id)arg2;
+ (id)targetIdentifiersForMessageEntries:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *modalTargetIdentifier; // @synthesize modalTargetIdentifier=_modalTargetIdentifier;
@property(copy, nonatomic) NSArray *messageEntries; // @synthesize messageEntries=_messageEntries;
- (void)_updateMessageIndexes;
- (void)addPriorityMessageEntry:(id)arg1;
- (id)messageEntriesByTriggerForEventContext:(id)arg1;
- (id)messageEntriesForContextPropertiesContext:(id)arg1;
- (id)messageEntriesForTargetIdentifier:(id)arg1;
- (id)priorityMessageEntryForIdentifier:(id)arg1;
- (id)messageEntryForIdentifier:(id)arg1;
- (id)initWithModalTargetIdentifier:(id)arg1;

@end

