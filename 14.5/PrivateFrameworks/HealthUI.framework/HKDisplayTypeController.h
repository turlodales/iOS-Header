//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/_HKWheelchairUseCharacteristicCacheObserver-Protocol.h>

@class NSArray, NSDictionary, _HKWheelchairUseCharacteristicCache;

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver>
{
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    NSArray *_displayTypes;
    NSDictionary *_displayTypesByIdentifier;
    NSDictionary *_displayTypesByCategoryIdentifier;
    NSDictionary *_displayTypesByObjectType;
}

+ (id)sharedInstanceForHealthStore:(id)arg1;
+ (id)sharedInstance;
+ (id)controllers;
+ (struct os_unfair_lock_s)controllersLock;
- (void).cxx_destruct;
- (id)displayTypesForCategoryIdentifier:(long long)arg1;
- (id)displayTypeWithIdentifier:(id)arg1;
- (id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1;
- (id)displayTypeForObjectType:(id)arg1;
- (id)allDisplayTypes;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(_Bool)arg2;
- (void)setWheelchairUseCharacteristicCache:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end

