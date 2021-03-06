//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PKPaletteOptionButtonCell, PKPaletteOptionSwitchCell, UIStackView, UITraitCollection;
@protocol PKPaletteMoreOptionsViewControllerDelegate;

@interface PKPaletteMoreOptionsViewController : UIViewController
{
    _Bool _shouldShowAutoMinimizeOption;
    _Bool _shouldShowFingerDrawsOption;
    _Bool _autoHideOn;
    _Bool _isFingerDrawsOn;
    _Bool _shouldShowTapToRadarOption;
    _Bool _shouldShowOpenPencilSettingsOption;
    id <PKPaletteMoreOptionsViewControllerDelegate> _delegate;
    UITraitCollection *_externalTraitCollection;
    NSArray *_stackViewPositioningConstraints;
    UIStackView *_stackView;
    PKPaletteOptionSwitchCell *_autoMinimizeCell;
    PKPaletteOptionSwitchCell *_shapesCell;
    PKPaletteOptionSwitchCell *_fingerDrawsCell;
    PKPaletteOptionButtonCell *_tapToRadarCell;
    PKPaletteOptionButtonCell *_openPencilSettingsCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaletteOptionButtonCell *openPencilSettingsCell; // @synthesize openPencilSettingsCell=_openPencilSettingsCell;
@property(retain, nonatomic) PKPaletteOptionButtonCell *tapToRadarCell; // @synthesize tapToRadarCell=_tapToRadarCell;
@property(retain, nonatomic) PKPaletteOptionSwitchCell *fingerDrawsCell; // @synthesize fingerDrawsCell=_fingerDrawsCell;
@property(retain, nonatomic) PKPaletteOptionSwitchCell *shapesCell; // @synthesize shapesCell=_shapesCell;
@property(retain, nonatomic) PKPaletteOptionSwitchCell *autoMinimizeCell; // @synthesize autoMinimizeCell=_autoMinimizeCell;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSArray *stackViewPositioningConstraints; // @synthesize stackViewPositioningConstraints=_stackViewPositioningConstraints;
@property(retain, nonatomic) UITraitCollection *externalTraitCollection; // @synthesize externalTraitCollection=_externalTraitCollection;
@property(nonatomic) _Bool shouldShowOpenPencilSettingsOption; // @synthesize shouldShowOpenPencilSettingsOption=_shouldShowOpenPencilSettingsOption;
@property(nonatomic) _Bool shouldShowTapToRadarOption; // @synthesize shouldShowTapToRadarOption=_shouldShowTapToRadarOption;
@property(nonatomic) _Bool isFingerDrawsOn; // @synthesize isFingerDrawsOn=_isFingerDrawsOn;
@property(nonatomic, getter=isAutoHideOn) _Bool autoHideOn; // @synthesize autoHideOn=_autoHideOn;
@property(nonatomic) _Bool shouldShowFingerDrawsOption; // @synthesize shouldShowFingerDrawsOption=_shouldShowFingerDrawsOption;
@property(nonatomic) _Bool shouldShowAutoMinimizeOption; // @synthesize shouldShowAutoMinimizeOption=_shouldShowAutoMinimizeOption;
@property(nonatomic) __weak id <PKPaletteMoreOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_contentSizeMinWidth;
- (void)_updateContentSize;
- (void)_removeCell:(id)arg1;
- (void)_installCell:(id)arg1;
- (_Bool)_isCellInstalled:(id)arg1;
- (void)_reloadItems;
- (void)_handleOpenPencilSettingsCellTapped;
- (_Bool)_shouldRemoveOpenPencilSettingsCell;
- (_Bool)_shouldInstallOpenPencilSettingsCell;
- (id)_makeOpenPencilSettingsCell;
- (void)_handleTapToRadarCellTapped;
- (_Bool)_shouldRemoveTapToRadarCell;
- (_Bool)_shouldInstallTapToRadarCell;
- (id)_makeTapToRadarCell;
- (void)_fingerDrawsCellDidChangeValue:(id)arg1;
- (void)_autoMinimizeCellDidChangeValue:(id)arg1;
- (void)_updateFingerDrawsCell;
- (void)_updateAutoMinimizeCell;
- (id)_makeAutoMinimizeCell;
- (void)updateUIForTraitCollection:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;

@end

