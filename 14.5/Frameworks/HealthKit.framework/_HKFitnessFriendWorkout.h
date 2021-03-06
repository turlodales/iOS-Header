//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>

@class HKQuantity, NSString, NSUUID;

@interface _HKFitnessFriendWorkout : HKSample <NSCopying>
{
    _Bool _isWatchWorkout;
    _Bool _isIndoorWorkout;
    NSUUID *_friendUUID;
    unsigned long long _workoutActivityType;
    double _duration;
    HKQuantity *_totalEnergyBurned;
    HKQuantity *_totalBasalEnergyBurned;
    HKQuantity *_totalDistance;
    HKQuantity *_goal;
    unsigned long long _goalType;
    NSString *_bundleID;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
    long long _amm;
    NSString *_seymourCatalogWorkoutIdentifier;
    NSString *_seymourMediaType;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)fitnessFriendWorkoutFromHKWorkout:(id)arg1;
+ (id)fitnessFriendworkoutWithActivityType:(unsigned long long)arg1 friendUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 bundleID:(id)arg11 isWatchWorkout:(_Bool)arg12 isIndoorWorkout:(_Bool)arg13 deviceManufacturer:(id)arg14 deviceModel:(id)arg15 amm:(long long)arg16 seymourCatalogWorkoutIdentifier:(id)arg17 seymourMediaType:(id)arg18;
+ (id)fitnessFriendworkoutWithActivityType:(unsigned long long)arg1 friendUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 bundleID:(id)arg11 isWatchWorkout:(_Bool)arg12 isIndoorWorkout:(_Bool)arg13 deviceManufacturer:(id)arg14 deviceModel:(id)arg15 amm:(long long)arg16 scwi:(id)arg17;
+ (id)fitnessFriendworkoutWithActivityType:(unsigned long long)arg1 friendUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 bundleID:(id)arg11 isWatchWorkout:(_Bool)arg12 isIndoorWorkout:(_Bool)arg13 deviceManufacturer:(id)arg14 deviceModel:(id)arg15 amm:(long long)arg16;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *seymourMediaType; // @synthesize seymourMediaType=_seymourMediaType;
@property(retain, nonatomic) NSString *seymourCatalogWorkoutIdentifier; // @synthesize seymourCatalogWorkoutIdentifier=_seymourCatalogWorkoutIdentifier;
@property(nonatomic) long long amm; // @synthesize amm=_amm;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *deviceManufacturer; // @synthesize deviceManufacturer=_deviceManufacturer;
@property(nonatomic) _Bool isIndoorWorkout; // @synthesize isIndoorWorkout=_isIndoorWorkout;
@property(nonatomic) _Bool isWatchWorkout; // @synthesize isWatchWorkout=_isWatchWorkout;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(retain, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(retain, nonatomic) HKQuantity *totalDistance; // @synthesize totalDistance=_totalDistance;
@property(retain, nonatomic) HKQuantity *totalBasalEnergyBurned; // @synthesize totalBasalEnergyBurned=_totalBasalEnergyBurned;
@property(retain, nonatomic) HKQuantity *totalEnergyBurned; // @synthesize totalEnergyBurned=_totalEnergyBurned;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)hkWorkoutFromFriendWorkout;

@end

