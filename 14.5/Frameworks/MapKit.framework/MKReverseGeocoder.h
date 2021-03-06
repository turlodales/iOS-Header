//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKPlacemark, MKReverseGeocoderInternal;
@protocol MKReverseGeocoderDelegate;

@interface MKReverseGeocoder : NSObject
{
    MKReverseGeocoderInternal *_internal;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (void)_notifyResult:(id)arg1;
- (void)_notifyNoResults;
- (void)_notifyError:(id)arg1;
@property(readonly, nonatomic, getter=isQuerying) _Bool querying;
@property(readonly, nonatomic) MKPlacemark *placemark;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) __weak id <MKReverseGeocoderDelegate> delegate;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

