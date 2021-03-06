//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

#import "TrafficIncidentLayoutManagerObserver-Protocol.h"
#import "TrafficIncidentsOverviewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, TrafficIncidentLayoutManager, TrafficIncidentReport, VKTrafficIncidentFeature;
@protocol HeightProviding, TrafficIncidentsViewControllerDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface TrafficIncidentsViewController : _MKTableViewController <TrafficIncidentsOverviewCellDelegate, TrafficIncidentLayoutManagerObserver>
{
    id <HeightProviding> _heightProvider;
    VKTrafficIncidentFeature *_incident;
    id <TrafficIncidentsViewControllerDelegate> _delegate;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    TrafficIncidentReport *_incidentReport;
    NSMutableArray *_tableViewRows;
    TrafficIncidentLayoutManager *_trafficLayoutManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TrafficIncidentLayoutManager *trafficLayoutManager; // @synthesize trafficLayoutManager=_trafficLayoutManager;
@property(retain, nonatomic) NSMutableArray *tableViewRows; // @synthesize tableViewRows=_tableViewRows;
@property(retain, nonatomic) TrafficIncidentReport *incidentReport; // @synthesize incidentReport=_incidentReport;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <TrafficIncidentsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VKTrafficIncidentFeature *incident; // @synthesize incident=_incident;
- (void)incidentsReportingEnablementDidUpdate;
- (void)_didReceiveIncidentUpdate:(id)arg1;
- (void)_incidentUpvoted:(_Bool)arg1;
- (void)overviewCell:(id)arg1 incidentUpvoted:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isMarzipan;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_incidentsDetailsRow;
- (id)_incidentsOverviewRow;
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;
- (long long)rowForRow:(unsigned long long)arg1;
- (void)updateTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForLightLevel:(long long)arg1;
@property(readonly, nonatomic) id <HeightProviding> heightProvider; // @synthesize heightProvider=_heightProvider;
- (struct CGSize)preferredContentSize;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupRowsWithIncidentReport:(id)arg1;
- (void)_setupRowsWithIncident:(id)arg1;
- (void)_refreshTrafficLayout;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

