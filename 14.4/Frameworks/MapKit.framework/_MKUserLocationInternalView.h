//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKUserLocationView.h>

@class MKUserLocationView;

__attribute__((visibility("hidden")))
@interface _MKUserLocationInternalView : _MKUserLocationView
{
    MKUserLocationView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MKUserLocationView *parentView; // @synthesize parentView=_parentView;
- (id)_containerView;
- (id)_mapView;
- (id)_annotationContainer;
- (double)_pointsForDistance:(double)arg1;

@end

