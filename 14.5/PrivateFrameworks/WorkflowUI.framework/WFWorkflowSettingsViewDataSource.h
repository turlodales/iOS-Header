//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSMapTable, NSString, WFDatabase, WFHealthFeatureAvailability, WFWorkflow;
@protocol WFWorkflowSettingsViewDataSourceDelegate;

@interface WFWorkflowSettingsViewDataSource : NSObject <UITableViewDataSource>
{
    id <WFWorkflowSettingsViewDataSourceDelegate> _delegate;
    NSString *_tentativeWorkflowName;
    WFWorkflow *_workflow;
    WFDatabase *_database;
    NSArray *_accessResources;
    NSMapTable *_switchToAccessResourceMapTable;
    WFHealthFeatureAvailability *_healthFeatureAvailability;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFHealthFeatureAvailability *healthFeatureAvailability; // @synthesize healthFeatureAvailability=_healthFeatureAvailability;
@property(retain, nonatomic) NSMapTable *switchToAccessResourceMapTable; // @synthesize switchToAccessResourceMapTable=_switchToAccessResourceMapTable;
@property(retain, nonatomic) NSArray *accessResources; // @synthesize accessResources=_accessResources;
@property(retain, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(copy, nonatomic) NSString *tentativeWorkflowName; // @synthesize tentativeWorkflowName=_tentativeWorkflowName;
@property(nonatomic) __weak id <WFWorkflowSettingsViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 helpCellForRow:(long long)arg2;
- (_Bool)shouldShowBedSheetCell;
- (void)toggledAccessResourceSwitch:(id)arg1;
- (id)tableView:(id)arg1 accessResourcesCellForRow:(long long)arg2;
- (long long)accessResourcesCellCount;
- (id)setUpImportQuestionsCell:(id)arg1;
- (id)tableView:(id)arg1 importQuestionsCellForRow:(long long)arg2;
- (long long)importQuestionsCellCount;
- (id)setupShowOnBedSheetCell:(id)arg1;
- (id)setUpAcceptedTypesCell:(id)arg1;
- (id)setUpShowInShareSheetCell:(id)arg1;
- (id)setUpShowInWatchCell:(id)arg1;
- (id)tableView:(id)arg1 showInCellForRow:(long long)arg2;
- (long long)showInCellTypeForRow:(long long)arg1;
- (long long)rowIndexForShowInCellType:(long long)arg1;
- (id)showInCellTypes;
- (id)tableView:(id)arg1 buttonCellForRow:(long long)arg2;
- (long long)buttonCellTypeForRow:(long long)arg1;
- (id)buttonCellTypes;
- (id)tableView:(id)arg1 nameCellForRow:(long long)arg2;
- (long long)sectionWithOffsetForButtonsSection:(long long)arg1;
- (_Bool)showAddToHomeScreen;
- (_Bool)showCustomizeShortcut;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)registerCellsForTableView:(id)arg1;
- (id)sections;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 healthFeatureAvailability:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

