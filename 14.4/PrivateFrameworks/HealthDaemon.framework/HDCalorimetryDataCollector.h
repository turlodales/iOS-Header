//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector
{
}

+ (_Bool)isCoreMotionCaloriePushModelEnabled;
+ (_Bool)supportsCollectionForProfile:(id)arg1;
+ (_Bool)isNatalimeterAvailable;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (id)initWithProfile:(id)arg1;

@end

