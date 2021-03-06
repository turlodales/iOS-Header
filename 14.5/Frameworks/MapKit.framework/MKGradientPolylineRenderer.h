//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPolylineRenderer.h>

@class NSArray;

@interface MKGradientPolylineRenderer : MKPolylineRenderer
{
    NSArray *_colors;
    NSArray *_externallySetColors;
    NSArray *_locations;
    NSArray *_externallySetLocations;
}

+ (Class)_mapkitLeafClass;
- (void).cxx_destruct;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)setColors:(id)arg1 atLocations:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *colors;
@property(readonly, copy, nonatomic) NSArray *locations;
- (void)_updateColorStops;
- (void)_updateVectorGeometry:(id)arg1;
- (_Bool)_canProvideVectorGeometry;

@end

