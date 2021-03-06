//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKTransitLineMarker-Protocol.h>

@class NSString;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker>
{
    id <GEOTransitLine> _line;
    struct CLLocationCoordinate2D _locationHint;
}

- (void).cxx_destruct;
- (id)artwork;
- (id)labelText;
- (id)mapItemIdentifier;
- (id)initWithGEOTransitLine:(id)arg1 locationHint:(struct CLLocationCoordinate2D)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

