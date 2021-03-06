//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation, MKMapItem, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface PlaceSummaryViewModel : NSObject
{
    MKMapItem *_mapItem;
    GEOLocation *_currentLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, copy, nonatomic) NSAttributedString *hours;
@property(readonly, copy, nonatomic) NSString *price;
@property(readonly, copy, nonatomic) NSString *distance;
@property(readonly, copy, nonatomic) NSString *category;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithMapItem:(id)arg1;

@end

