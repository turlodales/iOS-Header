//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSString;

@interface SBFaceIDCoachingConditionRecipe : NSObject <SBTestRecipe>
{
}

+ (void)load;
- (void)_setOverrideCoachingEvent:(unsigned long long)arg1;
- (_Bool)_overrideCoachingConditionEnabled;
- (void)_setOverrideCoachingConditionEnabled:(_Bool)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

