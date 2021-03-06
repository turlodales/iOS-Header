//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAUserActivity : SADomainObject
{
}

+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userActivity;
@property(nonatomic) _Bool isEligibleForSearch;
@property(nonatomic) _Bool isEligibleForReminders;
@property(nonatomic) _Bool isEligibleForPublicIndexing;
@property(nonatomic) _Bool isEligibleForHandoff;
@property(nonatomic) _Bool isEligibleForDirections;
@property(nonatomic) _Bool isEligibleForAppPunchout;
@property(copy, nonatomic) NSString *internalGUID;
@property(copy, nonatomic) NSArray *eligibileFunctions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

