//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VenueCategoryCardItem-Protocol.h"

@class GEOSearchCategory, MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface VenueSearchCardItem : NSObject <VenueCategoryCardItem>
{
    MKMapItem *_venueMapItem;
    GEOSearchCategory *_venueSearchCategory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOSearchCategory *venueSearchCategory; // @synthesize venueSearchCategory=_venueSearchCategory;
@property(readonly, nonatomic) MKMapItem *venueMapItem; // @synthesize venueMapItem=_venueMapItem;
@property(readonly, nonatomic) _Bool isVenueItem;
@property(readonly, nonatomic) unsigned long long venueCardID;
@property(readonly, nonatomic) unsigned long long venueID;
- (id)initWithMapItem:(id)arg1 searchCategory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

