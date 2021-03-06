//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

#import <HomeUI/HUQuickControlColorInteractionCoordinatorDelegate-Protocol.h>

@class HFColorControlItem, HUQuickControlColorViewProfile, NSIndexPath, NSString;

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate>
{
    unsigned long long _mode;
    NSIndexPath *_selectedColorIndexPath;
    HUQuickControlColorViewController *_colorViewController;
    HUQuickControlColorViewController *_presentingColorViewController;
}

+ (Class)controlItemClass;
- (void).cxx_destruct;
@property(nonatomic) __weak HUQuickControlColorViewController *presentingColorViewController; // @synthesize presentingColorViewController=_presentingColorViewController;
@property(retain, nonatomic) HUQuickControlColorViewController *colorViewController; // @synthesize colorViewController=_colorViewController;
@property(retain, nonatomic) NSIndexPath *selectedColorIndexPath; // @synthesize selectedColorIndexPath=_selectedColorIndexPath;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (struct CGSize)preferredContentSize;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)doneButtonTapped;
- (void)cancelButtonTapped;
- (void)didSelectColorAtIndexPath:(id)arg1;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (void)interactionCoordinator:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)presentFullColorViewForInteractionCoordinator:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2;
- (id)overrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;
- (unsigned long long)_paletteType;
- (void)updateValueFromControlItem;

// Remaining properties
@property(readonly, nonatomic) HFColorControlItem *controlItem; // @dynamic controlItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HUQuickControlColorViewProfile *viewProfile; // @dynamic viewProfile;

@end

