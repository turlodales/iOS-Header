//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings
{
    double _hysteresis;
    double _edgeRegionSize;
    double _bottomEdgeRegionSize;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _maximumSwipeDuration;
}

+ (id)settingsControllerModule;
+ (id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
@property(nonatomic) double maximumSwipeDuration; // @synthesize maximumSwipeDuration=_maximumSwipeDuration;
@property(nonatomic) double edgeAngleWindowDecayTime; // @synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime;
@property(nonatomic) double edgeAngleWindow; // @synthesize edgeAngleWindow=_edgeAngleWindow;
@property(nonatomic) double bottomEdgeRegionSize; // @synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize;
@property(nonatomic) double edgeRegionSize; // @synthesize edgeRegionSize=_edgeRegionSize;
@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(nonatomic) double edgeAngleWindowDegreees;
- (void)setDefaultValues;

@end

