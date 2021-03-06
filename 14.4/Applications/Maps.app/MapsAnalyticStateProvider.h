//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsAnalyticStateProvider : NSObject
{
}

+ (void)updatePreciseLocationInformation;
+ (void)updateCycleOptionsInformation:(id)arg1;
+ (void)updateDriveOptionsInformation:(id)arg1;
+ (void)updateButtonsInformationMunin:(_Bool)arg1;
+ (void)updateButtonsInformationAQI:(_Bool)arg1 weather:(_Bool)arg2;
+ (void)updateSettingsInformation;
+ (void)updateMapSettingsInformationLabels:(_Bool)arg1 traffic:(_Bool)arg2;
+ (void)updateLayoutInformation:(id)arg1;
+ (void)updateSuggestionSearchInformation:(id)arg1 searchText:(id)arg2 searchIndex:(int)arg3 searchfieldType:(int)arg4 suggestionsAcsequencenumber:(int)arg5;
+ (void)updateTouristInformation;
+ (void)updateMapViewInformation:(id)arg1;
+ (void)updateLocaleInformation:(id)arg1;
+ (void)clearSharedState;
+ (id)serialQueue;

@end

