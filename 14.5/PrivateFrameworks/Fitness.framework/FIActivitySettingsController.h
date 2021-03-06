//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/NSCopying-Protocol.h>

@class HKHealthStore, HKQuantity, NSDate, NSMutableDictionary;

@interface FIActivitySettingsController : NSObject <NSCopying>
{
    HKHealthStore *_healthStore;
    NSMutableDictionary *_dirtyPropertiesMap;
    NSDate *_dateOfBirth;
    HKQuantity *_height;
    HKQuantity *_weight;
    long long _biologicalSex;
    long long _wheelchairUse;
    CDUnknownBlockType _updateHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) HKQuantity *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) HKQuantity *height; // @synthesize height=_height;
@property(retain, nonatomic) NSDate *dateOfBirth; // @synthesize dateOfBirth=_dateOfBirth;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) HKQuantity *leanBodyMass;
@property(readonly) unsigned long long experienceType;
- (_Bool)commmitWithError:(id *)arg1;
- (_Bool)_logAndNilError:(id *)arg1 operationDescription:(id)arg2;
- (void)populateExistingCharacteristics;
- (_Bool)_commitValue:(id)arg1 forPropertyKey:(id)arg2 error:(id *)arg3;
- (void)_setUncommitedValue:(id)arg1 forPropertyKey:(id)arg2;
- (_Bool)_hasDirtyPropertyForPropertyKey:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end

