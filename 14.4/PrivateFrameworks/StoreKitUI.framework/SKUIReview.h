//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIReview : NSObject <SKUICacheCoding>
{
    NSString *_body;
    NSString *_dateString;
    float _rating;
    NSString *_reviewer;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *reviewer; // @synthesize reviewer=_reviewer;
@property(readonly, nonatomic) float rating; // @synthesize rating=_rating;
@property(readonly, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)formattedBylineWithClientContext:(id)arg1;
- (id)initWithReviewDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

