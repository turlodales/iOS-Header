//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKOverlayRoomViewController.h>

@class NSMutableArray, NSNumber, NSString;

@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController
{
    NSNumber *_preferredOverlayIndex;
    NSString *_quantityTypeIdentifier;
    NSMutableArray *_contextDelegates;
    long long _preferredOverlay;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_buildGranularAverageDataSourceTitleFromTimeScope;
- (CDUnknownBlockType)_buildAverageDataSourceTitleFromTimeScope;
- (id)_buildWalkingAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)showAllFiltersButtonTitle;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5;

@end

