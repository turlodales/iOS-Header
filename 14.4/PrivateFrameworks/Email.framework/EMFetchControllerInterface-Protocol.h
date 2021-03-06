//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class NSArray, NSSet, NSString;

@protocol EMFetchControllerInterface <NSObject>
- (NSString *)diagnosticInformation;
- (void)setCurrentSuppressionContexts:(NSSet *)arg1 suppressedContexts:(NSSet *)arg2;
- (void)resetPushStateWithCompletion:(void (^)(_Bool, _Bool, int, NSError *))arg1;
- (void)downloadMessageBodiesWithCompletion:(void (^)(NSError *))arg1;
- (void)performFetchOfType:(int)arg1 mailboxName:(NSString *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (void)performFetchOfType:(int)arg1 mailboxObjectIds:(NSArray *)arg2;
- (void)performFetchOfType:(int)arg1 accountIds:(NSArray *)arg2;
- (void)performFetchOfType:(int)arg1;
@end

