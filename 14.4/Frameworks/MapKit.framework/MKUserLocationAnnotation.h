//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKAnnotationPrivate-Protocol.h>

@class CLLocation, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationAnnotation : NSObject <MKAnnotationPrivate>
{
    struct CLLocationCoordinate2D _coordinate;
    CLLocation *_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long representation;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

