//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerZoomTransitionSettings : PXSettings
{
    _Bool _showRectsOfInterest;
    _Bool _animateViewControllersViews;
    _Bool _animateEndPointsContents;
    long long _animationType;
    long long _crossfadeType;
    double _transitionDuration;
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _titleCrossfadeAmount;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) _Bool animateEndPointsContents; // @synthesize animateEndPointsContents=_animateEndPointsContents;
@property(nonatomic) _Bool animateViewControllersViews; // @synthesize animateViewControllersViews=_animateViewControllersViews;
@property(nonatomic) _Bool showRectsOfInterest; // @synthesize showRectsOfInterest=_showRectsOfInterest;
@property(nonatomic) double titleCrossfadeAmount; // @synthesize titleCrossfadeAmount=_titleCrossfadeAmount;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) long long crossfadeType; // @synthesize crossfadeType=_crossfadeType;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void)setDefaultValues;
- (id)parentSettings;

@end

