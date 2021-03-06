//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

#import <SiriUI/MKMapViewDelegate-Protocol.h>

@class CLGeocoder, CLPlacemark, MKMapView, MKPinAnnotationView, NSString, UIButton, UILabel, UITapGestureRecognizer;
@protocol SiriUIMapTemplateModel, SiriUIMapTemplateViewDelegate;

@interface SiriUIMapTemplateView : SiriUIBaseTemplateView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    UILabel *_footnoteDescriptorLabel;
    UILabel *_footnoteLabel;
    MKPinAnnotationView *_pinAnnotationView;
    UIButton *_mapButton;
    CLPlacemark *_currentPlacemark;
    CLGeocoder *_geocoder;
    _Bool _needsToNotifyDelegateOfLocationUpdate;
    UITapGestureRecognizer *_tapRecognizer;
    id <SiriUIMapTemplateViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUIMapTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleTapGesture:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)_mapButtonPressed:(id)arg1;
- (id)_configuredLabel;
- (id)_configuredFootnoteLabel;
- (id)_configuredFootnoteDescriptorLabel;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1;
- (void)prepareForDismissal;
- (void)layoutSubviews;
- (double)desiredHeight;
- (void)reloadData;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SiriUIMapTemplateModel> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

