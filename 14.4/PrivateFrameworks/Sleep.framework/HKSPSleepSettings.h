//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>
#import <Sleep/HKSPDictionarySerializable-Protocol.h>
#import <Sleep/HKSPObject-Protocol.h>
#import <Sleep/NAEquatable-Protocol.h>
#import <Sleep/NAHashable-Protocol.h>
#import <Sleep/NSMutableCopying-Protocol.h>

@class NSDate, NSSet, NSString;

@interface HKSPSleepSettings : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>
{
    _Bool _watchSleepFeaturesEnabled;
    _Bool _scheduledSleepMode;
    _Bool _sleepTracking;
    _Bool _timeInBedTracking;
    _Bool _bedtimeReminders;
    _Bool _wakeUpResults;
    _Bool _chargingReminders;
    _Bool _springBoardGreetingDisabled;
    unsigned long long _version;
    NSDate *_lastModifiedDate;
    unsigned long long _sleepModeOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)testSleepSettingsWithAllPropertiesSet;
+ (id)testSleepSettings;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool springBoardGreetingDisabled; // @synthesize springBoardGreetingDisabled=_springBoardGreetingDisabled;
@property(readonly, nonatomic) _Bool chargingReminders; // @synthesize chargingReminders=_chargingReminders;
@property(readonly, nonatomic) _Bool wakeUpResults; // @synthesize wakeUpResults=_wakeUpResults;
@property(readonly, nonatomic) _Bool bedtimeReminders; // @synthesize bedtimeReminders=_bedtimeReminders;
@property(readonly, nonatomic) _Bool timeInBedTracking; // @synthesize timeInBedTracking=_timeInBedTracking;
@property(readonly, nonatomic) _Bool sleepTracking; // @synthesize sleepTracking=_sleepTracking;
@property(readonly, nonatomic) unsigned long long sleepModeOptions; // @synthesize sleepModeOptions=_sleepModeOptions;
@property(readonly, nonatomic) _Bool scheduledSleepMode; // @synthesize scheduledSleepMode=_scheduledSleepMode;
@property(readonly, nonatomic) _Bool watchSleepFeaturesEnabled; // @synthesize watchSleepFeaturesEnabled=_watchSleepFeaturesEnabled;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)_equateTo:(id)arg1 builderBuilderBlock:(CDUnknownBlockType)arg2;
- (void)_buildForEquivalenceTo:(id)arg1 builder:(id)arg2;
- (_Bool)isEquivalentTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSSet *significantChanges;
- (void)encodeWithCoder:(id)arg1;
- (void)_migrateForCoder:(id)arg1;
- (_Bool)_needsMigrationForCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)copyFromObject:(id)arg1;
- (id)initFromObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

