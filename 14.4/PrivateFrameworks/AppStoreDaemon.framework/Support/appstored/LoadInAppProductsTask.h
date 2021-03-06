//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

@class NSArray, StoreKitClient;

@interface LoadInAppProductsTask : AsyncTask
{
    StoreKitClient *_client;
    NSArray *_productIdentifiers;
    NSArray *_invalidIdentifiers;
    NSArray *_products;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, nonatomic) NSArray *invalidIdentifiers; // @synthesize invalidIdentifiers=_invalidIdentifiers;
@property(readonly, nonatomic) NSArray *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(readonly, nonatomic) StoreKitClient *client; // @synthesize client=_client;
- (id)_parseResponse:(id)arg1 error:(id *)arg2;
- (id)_requestBatches:(id)arg1 error:(id *)arg2;
- (id)_queryDictionary;
- (void)main;
- (id)initWithProductIdentifiers:(id)arg1 client:(id)arg2;

@end

