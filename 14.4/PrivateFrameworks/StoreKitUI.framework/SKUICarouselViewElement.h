//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIProgressIndicatorViewElement;

__attribute__((visibility("hidden")))
@interface SKUICarouselViewElement : SKUIViewElement
{
    double _displayInterval;
}

@property(readonly, nonatomic) double displayInterval; // @synthesize displayInterval=_displayInterval;
@property(readonly, nonatomic) SKUIProgressIndicatorViewElement *progressIndicatorElement;
- (long long)pageComponentType;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

