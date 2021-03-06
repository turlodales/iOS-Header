//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@class NSObject, STUsageDetailsViewModel;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider
{
    STUsageDetailsViewModel *_usageDetailsViewModel;
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) STUsageDetailsViewModel *usageDetailsViewModel; // @synthesize usageDetailsViewModel=_usageDetailsViewModel;
- (void)showMostUsedDetailListController:(id)arg1;
- (id)totalUsageDescription:(id)arg1;
- (id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2;

@end

