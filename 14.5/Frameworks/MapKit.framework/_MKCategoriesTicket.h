//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceCategoriesTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceCategoriesTicket;

__attribute__((visibility("hidden")))
@interface _MKCategoriesTicket : NSObject <MKMapServiceCategoriesTicket>
{
    id <GEOMapServiceCategoriesTicket> _ticket;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

