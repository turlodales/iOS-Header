//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/NSObject-Protocol.h>

@class FTBatchTranslationStreamingResponse, NSError;

@protocol FTBatchTranslationResponseDelegate <NSObject>

@optional
- (void)streamFailVerifyBatchTranslationStreamingResponse:(NSError *)arg1;
- (void)streamDidReceiveBatchTranslationStreamingResponse:(FTBatchTranslationStreamingResponse *)arg1;
@end

