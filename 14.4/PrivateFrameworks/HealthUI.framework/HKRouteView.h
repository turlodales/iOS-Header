//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/MKMapViewDelegate-Protocol.h>

@class HKLocationReadings, MKMapView, NSString, UIButton;

@interface HKRouteView : UIView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
    UIButton *_toggleMapTypeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *toggleMapTypeButton; // @synthesize toggleMapTypeButton=_toggleMapTypeButton;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)layoutSubviews;
- (void)setLocationReadings:(id)arg1;
- (void)_displayMapRouteForLocationReadings;
- (void)_addAnnotation:(id)arg1 isStartPoint:(_Bool)arg2;
- (void)_toggleMapType;
- (id)routeImageForSharing;
- (void)_setRouteMapType:(unsigned long long)arg1;
- (void)_clearMapViewIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

