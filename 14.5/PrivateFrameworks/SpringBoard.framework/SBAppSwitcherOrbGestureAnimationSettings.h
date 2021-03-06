//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBAppSwitcherOrbGestureAnimationSettings : PTSettings
{
    SBFFluidBehaviorSettings *_popToSwitcherSettings;
    SBFFluidBehaviorSettings *_peekingAndPanningSettings;
    SBFFluidBehaviorSettings *_breathingSettings;
    double _response;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(nonatomic) double response; // @synthesize response=_response;
@property(retain, nonatomic) SBFFluidBehaviorSettings *breathingSettings; // @synthesize breathingSettings=_breathingSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *peekingAndPanningSettings; // @synthesize peekingAndPanningSettings=_peekingAndPanningSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *popToSwitcherSettings; // @synthesize popToSwitcherSettings=_popToSwitcherSettings;
- (void)setDefaultValues;

@end

