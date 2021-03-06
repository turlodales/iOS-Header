//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriAudioInternal/NSObject-Protocol.h>

@class INUpdateMediaAffinityIntent;

@protocol INUpdateMediaAffinityIntentHandling <NSObject>
- (void)handleUpdateMediaAffinity:(INUpdateMediaAffinityIntent *)arg1 completion:(void (^)(INUpdateMediaAffinityIntentResponse *))arg2;

@optional
- (void)resolveAffinityTypeForUpdateMediaAffinity:(INUpdateMediaAffinityIntent *)arg1 withCompletion:(void (^)(INMediaAffinityTypeResolutionResult *))arg2;
- (void)resolveMediaItemsForUpdateMediaAffinity:(INUpdateMediaAffinityIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmUpdateMediaAffinity:(INUpdateMediaAffinityIntent *)arg1 completion:(void (^)(INUpdateMediaAffinityIntentResponse *))arg2;
@end

