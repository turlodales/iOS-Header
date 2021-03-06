//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOComposedRouteStep, Route, UIView;

@protocol DirectionsStepCell <NSObject>
+ (double)heightForWidth:(double)arg1 route:(Route *)arg2 step:(GEOComposedRouteStep *)arg3 idiom:(long long)arg4;
+ (unsigned long long)signViewIconSize;
+ (CDStruct_afa449f9)cellMetricsForIdiom:(long long)arg1;
@property(retain, nonatomic) UIView *trailingView;
@property(nonatomic) _Bool isSelectedRow;
- (void)setIsDimmedStep:(_Bool)arg1;
- (void)setRoute:(Route *)arg1 step:(GEOComposedRouteStep *)arg2 stepIndex:(unsigned long long)arg3 alignToLeftEdgeIfNoManeuverSign:(_Bool)arg4 size:(long long)arg5;
@end

