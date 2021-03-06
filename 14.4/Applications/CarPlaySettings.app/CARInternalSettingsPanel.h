//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsTablePanel.h"

@class CARDebugPanel, CARSettingsCellSpecifier, NSArray;

@interface CARInternalSettingsPanel : CARSettingsTablePanel
{
    CARSettingsCellSpecifier *_cellSpecifier;
    NSArray *_switches;
    CARDebugPanel *_debugPanel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CARDebugPanel *debugPanel; // @synthesize debugPanel=_debugPanel;
@property(readonly, nonatomic) NSArray *switches; // @synthesize switches=_switches;
- (void)killAllCarPlayProcesses;
- (void)viewDidLoad;
- (id)cellSpecifiers;
- (id)cellSpecifier;
- (id)initWithPanelController:(id)arg1;

@end

