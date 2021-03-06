//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDChangePropagationMap-Protocol.h>

@class NSMutableSet, NSString, TSUNoCopyDictionary;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap>
{
    TSUNoCopyDictionary *mDictionary;
    NSMutableSet *mClassesOfChangedPrototypes;
}

- (id)prototypePassingTest:(CDUnknownBlockType)arg1;
- (id)prototypeChangeForPrototype:(id)arg1;
- (void)p_addClassesForPrototype:(id)arg1;
- (_Bool)hasAnyChangesForPrototypesOfClasses:(id)arg1;
- (void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3;
- (void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3;
- (void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4;
- (void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

