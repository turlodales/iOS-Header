//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBIconViewDelegate-Protocol.h>
#import <SpringBoard/SBIconViewProviding-Protocol.h>

@class NSString, SBFloatingDockViewController, SBIconController, SBRootFolderController, SBWallpaperController, _SBHomeScreenFolderDelegate;
@protocol SBDockOffscreenFractionModifying;

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding, SBIconViewDelegate>
{
    UIView *_folderContent;
    UIView *_floatingDock;
    UIView *_statusBar;
    SBRootFolderController *_rootFolderController;
    _SBHomeScreenFolderDelegate *_folderDelegate;
    SBIconController *_iconController;
    SBWallpaperController *_wallpaperController;
    SBFloatingDockViewController *_floatingDockViewController;
    unsigned long long _snapshotOptions;
    id <SBDockOffscreenFractionModifying> _dockOffscreenModifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SBDockOffscreenFractionModifying> dockOffscreenModifier; // @synthesize dockOffscreenModifier=_dockOffscreenModifier;
@property(readonly, nonatomic) unsigned long long snapshotOptions; // @synthesize snapshotOptions=_snapshotOptions;
@property(readonly, nonatomic) SBFloatingDockViewController *floatingDockViewController; // @synthesize floatingDockViewController=_floatingDockViewController;
@property(readonly, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
- (id)backgroundViewForComponentsOfIconView:(id)arg1;
- (id)behaviorDelegateForIconView:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (_Bool)isIconViewRecycled:(id)arg1;
- (void)recycleIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 options:(unsigned long long)arg4 wallpaperImage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

