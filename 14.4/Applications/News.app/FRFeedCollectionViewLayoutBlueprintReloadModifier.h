//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class NFLFeedSettings, NSArray, NSString;

@interface FRFeedCollectionViewLayoutBlueprintReloadModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    _Bool _waitable;
    NSArray *_headlineIDs;
    unsigned long long _modification;
    NSString *_identifier;
    long long _priority;
    NFLFeedSettings *_feedSettings;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) _Bool waitable; // @synthesize waitable=_waitable;
@property(retain, nonatomic) NSArray *headlineIDs; // @synthesize headlineIDs=_headlineIDs;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithHeadlineIDs:(id)arg1 feedSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

