//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsCollectionPanel.h"

@class CARSettingsCellSpecifier, CRVehicle, NSArray;

@interface CARWallpaperPanel : CARSettingsCollectionPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;
    CRVehicle *_vehicle;
    NSArray *_sections;
    struct CGSize _cachedEffectiveSectionInsetLayoutSize;
    struct UIEdgeInsets _cachedEffectiveSectionInset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize cachedEffectiveSectionInsetLayoutSize; // @synthesize cachedEffectiveSectionInsetLayoutSize=_cachedEffectiveSectionInsetLayoutSize;
@property(nonatomic) struct UIEdgeInsets cachedEffectiveSectionInset; // @synthesize cachedEffectiveSectionInset=_cachedEffectiveSectionInset;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CRVehicle *vehicle; // @synthesize vehicle=_vehicle;
- (id)_newPreviewPanelForWallpaper:(id)arg1;
- (void)invalidate;
- (struct UIEdgeInsets)effectiveSectionHeaderInset;
- (struct UIEdgeInsets)effectiveSectionInset;
- (struct UIEdgeInsets)sectionInset;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfColumns;
- (id)specifierSections;
- (id)cellSpecifier;
- (id)initWithVehicle:(id)arg1 panelController:(id)arg2;

@end

