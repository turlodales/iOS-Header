//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVideoIntents/NSObject-Protocol.h>

@class AddToWatchListIntent;

@protocol AddToWatchListIntentHandling <NSObject>
- (void)resolveContentForAddToWatchList:(AddToWatchListIntent *)arg1 withCompletion:(void (^)(AddToWatchListContentResolutionResult *))arg2;
- (void)handleAddToWatchList:(AddToWatchListIntent *)arg1 completion:(void (^)(AddToWatchListIntentResponse *))arg2;

@optional
- (void)confirmAddToWatchList:(AddToWatchListIntent *)arg1 completion:(void (^)(AddToWatchListIntentResponse *))arg2;
@end

