//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFTimeOffsetPickerViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFTimeTriggerDayOfWeekCellDelegate-Protocol.h>

@class NSArray, NSString, UITableView;
@protocol _CDUserContext;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate>
{
    _Bool _showingPicker;
    id <_CDUserContext> _userContext;
    NSArray *_sections;
    UITableView *_tableView;
    unsigned long long _timeOfDayInterval;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeOfDayInterval; // @synthesize timeOfDayInterval=_timeOfDayInterval;
@property(nonatomic) _Bool showingPicker; // @synthesize showingPicker=_showingPicker;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)currentSunsetTime;
- (id)currentSunriseTime;
@property(readonly, nonatomic) id <_CDUserContext> userContext; // @synthesize userContext=_userContext;
- (id)dateComponentsFromTriggerDays;
- (void)dayOfWeekPickerCell:(id)arg1 didChangeSelectedRecurrences:(id)arg2;
- (void)dismissKeyboard;
- (id)currentDayOfMonth;
- (id)allDaysOfWeek;
- (void)timeOffsetPickerViewControllerDidCancel:(id)arg1;
- (void)timeOffsetPickerViewController:(id)arg1 didSelectOffset:(unsigned long long)arg2;
- (id)calendarFooterText;
- (void)updateCalendarFooterText;
- (void)updateCalendarDayIfNeeded;
- (void)timePickerUpdated:(id)arg1;
- (void)updateTriggerCalendarDayFromDate:(id)arg1;
- (void)updateTriggerTimeFromDate:(id)arg1;
- (void)presentOffsetPickerViewControllerForEvent:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)loadView;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

