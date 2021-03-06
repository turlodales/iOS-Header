//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RoutePlanningOutlineSection.h"

@class PreferenceValuesDataSource;
@protocol RoutePlanningActionDelegate;

__attribute__((visibility("hidden")))
@interface RoutePlanningActionsOutlineSection : RoutePlanningOutlineSection
{
    PreferenceValuesDataSource *_dataSource;
    long long _transportType;
    id <RoutePlanningActionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RoutePlanningActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (_Bool)shouldHighlightItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)viewForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (_Bool)updateWithTransportType:(long long)arg1;
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;

@end

