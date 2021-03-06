//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSArray, NSMutableSet;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController
{
    NSMutableSet *_monthsOfTheYearSet;
    _Bool _prohibitsMultipleMonthsInYearlyRecurrence;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool prohibitsMultipleMonthsInYearlyRecurrence; // @synthesize prohibitsMultipleMonthsInYearlyRecurrence=_prohibitsMultipleMonthsInYearlyRecurrence;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)refreshCells;
- (void)prepareForDisplay;
- (long long)gridViewType;
- (id)cellLabels;
- (id)tableViewCell;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (long long)frequency;
@property(retain, nonatomic) NSArray *monthsOfTheYear;
- (id)initWithDate:(id)arg1;

@end

