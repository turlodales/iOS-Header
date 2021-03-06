//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject
{
    _UILegibilitySettings *_legibilitySettings;
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (id)_emptyPageIndicatorSet;
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;

@end

