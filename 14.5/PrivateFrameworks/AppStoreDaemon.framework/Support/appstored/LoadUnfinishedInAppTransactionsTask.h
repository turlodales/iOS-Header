//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

@class NSArray, NSString, StoreKitClient;

@interface LoadUnfinishedInAppTransactionsTask : AsyncTask
{
    StoreKitClient *_client;
    NSString *_logKey;
    NSArray *_transactions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) StoreKitClient *client; // @synthesize client=_client;
- (void)main;
- (id)initWithClient:(id)arg1;

@end

