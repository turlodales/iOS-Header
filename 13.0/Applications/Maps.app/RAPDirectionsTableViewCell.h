//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DirectionsTableViewCell.h"

@class GEOComposedRouteStep, NSLayoutConstraint, Route;

__attribute__((visibility("hidden")))
@interface RAPDirectionsTableViewCell : DirectionsTableViewCell
{
    Route *_route;
    GEOComposedRouteStep *_step;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
- (void)updateHeightForWidth:(double)arg1;
- (void)setRoute:(id)arg1 step:(id)arg2 stepIndex:(unsigned long long)arg3 alignToLeftEdgeIfNoManeuverSign:(_Bool)arg4 size:(long long)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

