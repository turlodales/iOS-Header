//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFChangeCaseIntent;

@protocol WFChangeCaseIntentHandling <NSObject>
- (void)resolveTypeForChangeCase:(WFChangeCaseIntent *)arg1 withCompletion:(void (^)(WFChangeCaseTypeResolutionResult *))arg2;
- (void)resolveTextForChangeCase:(WFChangeCaseIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleChangeCase:(WFChangeCaseIntent *)arg1 completion:(void (^)(WFChangeCaseIntentResponse *))arg2;

@optional
- (void)confirmChangeCase:(WFChangeCaseIntent *)arg1 completion:(void (^)(WFChangeCaseIntentResponse *))arg2;
@end

