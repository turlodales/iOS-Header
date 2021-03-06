//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsPanel.h"

@class CARSettingsPanelTableSource, NSArray, NSString, UITableView;

@interface CARSettingsTablePanel : CARSettingsPanel
{
    _Bool _showCellImages;
    NSArray *_cellSpecifiers;
    UITableView *_tableView;
    CARSettingsPanelTableSource *_tableSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CARSettingsPanelTableSource *tableSource; // @synthesize tableSource=_tableSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) _Bool showCellImages; // @synthesize showCellImages=_showCellImages;
@property(readonly, nonatomic) NSArray *cellSpecifiers; // @synthesize cellSpecifiers=_cellSpecifiers;
@property(copy, nonatomic) NSString *sectionFooter;
- (void)reloadSpecifiers;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

