//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsPanel.h"

@class CARSettingsCellSpecifier;

@interface CARSettingsCellSpecifierWrapperPanel : CARSettingsPanel
{
    CARSettingsCellSpecifier *_wrappedSpecifier;
}

+ (id)panelWrappingCellSpecifier:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CARSettingsCellSpecifier *wrappedSpecifier; // @synthesize wrappedSpecifier=_wrappedSpecifier;
- (id)cellSpecifier;

@end

