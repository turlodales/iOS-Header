//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKAnnotationContainerViewDelegate-Protocol.h>
#import <MapKit/MKAnnotationManagerDelegate-Protocol.h>
#import <MapKit/MKAnnotationMarkerContainer-Protocol.h>
#import <MapKit/MKLocationManagerObserver-Protocol.h>

@class MKAnnotationContainerView, MKAnnotationManager, MKAnnotationView, MKMapCamera, MKMapSnapshot, MKMapSnapshotOptions, MKMapSnapshotter, MKUserLocation, NSArray, NSMutableArray, NSString, UIImageView;
@protocol _MKStaticMapViewDelegate;

@interface _MKStaticMapView : UIView <MKAnnotationContainerViewDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKLocationManagerObserver>
{
    id <_MKStaticMapViewDelegate> _delegate;
    MKMapSnapshotOptions *_snapshotOptions;
    UIImageView *_imageView;
    MKMapSnapshotter *_currentSnapshotter;
    MKMapSnapshot *_gridSnapshot;
    MKMapSnapshot *_snapshot;
    MKAnnotationManager *_annotationManager;
    MKAnnotationContainerView *_annotationContainer;
    _Bool _showsUserLocation;
    MKUserLocation *_userLocation;
    MKAnnotationView *_userLocationView;
    NSMutableArray *_currentUpdateAddedAnnotations;
    _Bool _currentUpdateRemovedCustomFeatureAnnotation;
    unsigned long long _snapshotGeneration;
    _Bool _loading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
- (_Bool)annotationContainer:(id)arg1 isAnnotationView:(id)arg2 validForDisplayAtPoint:(struct CGPoint)arg3;
- (struct CGRect)annotationContainerVisibleRect:(id)arg1;
- (struct CGRect)visibleRectInView:(id)arg1;
- (struct CGRect)visibleCenteringRectInView:(id)arg1;
- (void)annotationContainerDidDropPins:(id)arg1;
- (void)annotationContainerWillDropPins:(id)arg1;
- (void)annotationContainerDidAnimateBubble:(id)arg1;
- (void)annotationContainerWillAnimateBubble:(id)arg1;
- (double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(struct CLLocationCoordinate2D)arg2 maxDistance:(double *)arg3;
- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(struct CLLocationCoordinate2D)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)annotationContainer:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;
- (void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)annotationContainer:(id)arg1 requestRemovingClusterAnnotationView:(id)arg2 updateVisible:(_Bool)arg3;
- (id)annotationContainer:(id)arg1 requestAddingClusterForAnnotationViews:(id)arg2;
- (_Bool)annotationContainerIsRotated:(id)arg1;
- (_Bool)annotationContainerShouldAlignToPixels:(id)arg1;
- (_Bool)annotationManager:(id)arg1 canSelectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
- (id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
- (void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)arg1;
- (void)annotationManager:(id)arg1 didRemoveAnnotationRepresentations:(id)arg2;
- (void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(struct CLLocationCoordinate2D)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)deselectAnnotationRepresentation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationRepresentation:(id)arg1 animated:(_Bool)arg2;
- (void)removeAnnotationRepresentation:(id)arg1;
- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)locationManagerUpdatedLimitsPrecisionState:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)_showAllAnnotations;
- (void)_hideAllAnnotations;
- (void)_startSnapshotRequest;
- (void)_updateSnapshot:(_Bool)arg1;
- (void)_displayGridWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)_incrementSnapshotGeneration;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
@property(copy, nonatomic) MKMapCamera *camera;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect;
@property(nonatomic) CDStruct_b7cb895d region;
@property(readonly, nonatomic) NSArray *annotations;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

