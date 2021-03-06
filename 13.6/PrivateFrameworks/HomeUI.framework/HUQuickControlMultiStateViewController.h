//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController
{
}

+ (Class)controlItemClass;
- (_Bool)_shouldUseWheelPickerView;
- (id)controlToViewValueTransformer;
- (_Bool)_isCharacteristicTypeRotationDirection;
- (id)createViewProfile;
- (id)createInteractionCoordinator;
- (void)viewWillAppear:(_Bool)arg1;
- (void)modelValueDidChange;
- (id)overrideStatusText;
- (_Bool)_useOverrideStatusText;

// Remaining properties
@property(readonly, nonatomic) HFMultiStateControlItem *controlItem; // @dynamic controlItem;

@end

