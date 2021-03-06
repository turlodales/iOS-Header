//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewInteractionDelegate-Protocol.h>

@class HFColorPalette, NSIndexPath;
@protocol HUQuickControlInteractiveView;

@protocol HUQuickControlColorPaletteViewInteractionDelegate <HUQuickControlViewInteractionDelegate>
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 didSelectColorAtIndexPath:(NSIndexPath *)arg2;
- (void)presentFullColorViewForControlView:(id <HUQuickControlInteractiveView>)arg1 selectedColorIndexPath:(NSIndexPath *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;
@end

