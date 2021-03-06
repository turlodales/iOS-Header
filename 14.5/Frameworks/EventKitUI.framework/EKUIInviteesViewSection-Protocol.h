//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView, UITableViewCell;

@protocol EKUIInviteesViewSection <NSObject>
- (NSArray *)actionsForRow:(NSIndexPath *)arg1;
- (void)cancelOutstandingOperations;
- (void)setTableViewCellHook:(UITableViewCell * (^)(unsigned long long))arg1;
- (void)commitEditingStyle:(long long)arg1 forRow:(NSIndexPath *)arg2;
- (NSString *)titleForDeleteConfirmationButtonForRow:(NSIndexPath *)arg1;
- (long long)editingStyleForRow:(NSIndexPath *)arg1;
- (_Bool)canEditRow:(NSIndexPath *)arg1;
- (double)estimatedHeightForRow:(NSIndexPath *)arg1;
- (void)selectRow:(NSIndexPath *)arg1;
- (_Bool)canSelectRow:(NSIndexPath *)arg1;
- (void)reloadAndRegisterReusableCellsWithTableView:(UITableView *)arg1;
- (UITableViewCell *)cellForIndexPath:(NSIndexPath *)arg1 inTableView:(UITableView *)arg2;
- (unsigned long long)numberOfRows;
- (_Bool)sectionShouldBeShown;
- (NSString *)headerTitle;
- (NSString *)debugTitle;

@optional
- (_Bool)hideDivderLineForindexPath:(NSIndexPath *)arg1;
@end

