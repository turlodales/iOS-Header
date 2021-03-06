//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTrafficFeature.h>

@class GEOComposedRouteAnnotation, GEOMiniCard, GEOStyleAttributes;

@interface VKRouteAnnotation : VKTrafficFeature
{
    GEOComposedRouteAnnotation *_routeAnnotation;
    GEOStyleAttributes *_originalStyleAttributes;
}

@property(readonly, nonatomic, getter=_originalStyleAttributes) GEOStyleAttributes *originalStyleAttributes; // @synthesize originalStyleAttributes=_originalStyleAttributes;
- (void)populateDebugNode:(struct DebugTreeNode *)arg1;
- (void)dealloc;
@property(readonly, nonatomic) GEOMiniCard *infoCard;
- (id)initWithRouteAnnotation:(id)arg1 onRoute:(id)arg2;

@end

