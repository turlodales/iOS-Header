//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIAccountButtonsViewElement, SKUILink;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsComponent : SKUIPageComponent
{
    SKUILink *_ecommerceLink;
    _Bool _hidesTermsAndConditions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hidesTermsAndConditions; // @synthesize hidesTermsAndConditions=_hidesTermsAndConditions;
@property(retain, nonatomic) SKUILink *ECommerceLink; // @synthesize ECommerceLink=_ecommerceLink;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIAccountButtonsViewElement *viewElement; // @dynamic viewElement;

@end

