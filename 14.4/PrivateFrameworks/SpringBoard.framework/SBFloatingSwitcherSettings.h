//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class MTLumaDodgePillSettings;

@interface SBFloatingSwitcherSettings : PTSettings
{
    _Bool _showFloats;
    double _switcherCardScale;
    double _cardSpacing;
    double _dimmingAlpha;
    double _leadingEdgeRubberbandingRange;
    double _perCardAdditionalScaleCoefficient;
    double _scaleCurveExponent;
    double _opacityMinimumDistanceThreshold;
    double _opacityFadeDistance;
    double _darkeningMinimumDistanceThreshold;
    double _darkeningFadeDistance;
    double _maximumDarkening;
    double _titleAndIconOpacityMinimumDistanceThreshold;
    double _titleAndIconOpacityFadeDistance;
    double _titleOpacityMinimumDistanceThreshold;
    double _titleOpacityFadeDistance;
    double _overshootPullbackDelayOffscreen;
    double _overshootPullbackDelayOnscreen;
    MTLumaDodgePillSettings *_homeAffordanceSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property _Bool showFloats; // @synthesize showFloats=_showFloats;
@property(retain) MTLumaDodgePillSettings *homeAffordanceSettings; // @synthesize homeAffordanceSettings=_homeAffordanceSettings;
@property double overshootPullbackDelayOnscreen; // @synthesize overshootPullbackDelayOnscreen=_overshootPullbackDelayOnscreen;
@property double overshootPullbackDelayOffscreen; // @synthesize overshootPullbackDelayOffscreen=_overshootPullbackDelayOffscreen;
@property double titleOpacityFadeDistance; // @synthesize titleOpacityFadeDistance=_titleOpacityFadeDistance;
@property double titleOpacityMinimumDistanceThreshold; // @synthesize titleOpacityMinimumDistanceThreshold=_titleOpacityMinimumDistanceThreshold;
@property double titleAndIconOpacityFadeDistance; // @synthesize titleAndIconOpacityFadeDistance=_titleAndIconOpacityFadeDistance;
@property double titleAndIconOpacityMinimumDistanceThreshold; // @synthesize titleAndIconOpacityMinimumDistanceThreshold=_titleAndIconOpacityMinimumDistanceThreshold;
@property double maximumDarkening; // @synthesize maximumDarkening=_maximumDarkening;
@property double darkeningFadeDistance; // @synthesize darkeningFadeDistance=_darkeningFadeDistance;
@property double darkeningMinimumDistanceThreshold; // @synthesize darkeningMinimumDistanceThreshold=_darkeningMinimumDistanceThreshold;
@property double opacityFadeDistance; // @synthesize opacityFadeDistance=_opacityFadeDistance;
@property double opacityMinimumDistanceThreshold; // @synthesize opacityMinimumDistanceThreshold=_opacityMinimumDistanceThreshold;
@property double scaleCurveExponent; // @synthesize scaleCurveExponent=_scaleCurveExponent;
@property double perCardAdditionalScaleCoefficient; // @synthesize perCardAdditionalScaleCoefficient=_perCardAdditionalScaleCoefficient;
@property double leadingEdgeRubberbandingRange; // @synthesize leadingEdgeRubberbandingRange=_leadingEdgeRubberbandingRange;
@property double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
@property double cardSpacing; // @synthesize cardSpacing=_cardSpacing;
@property double switcherCardScale; // @synthesize switcherCardScale=_switcherCardScale;
- (id)archiveValueForKey:(id)arg1;
- (void)setDefaultValues;

@end

