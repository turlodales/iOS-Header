//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, PKPaymentSetupProduct, PKServiceProviderPurchase;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential
{
    PKPaymentSetupProduct *_product;
    NSString *_productIdentifier;
    PKServiceProviderPurchase *_purchase;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(readonly, copy, nonatomic) NSString *statusDescription;
@property(readonly, copy, nonatomic) NSString *summaryMetadataDescription;
@property(readonly, copy, nonatomic) NSArray *metadata;
- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2;

@end

