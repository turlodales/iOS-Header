//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TestFlightCore/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol TFFeedbackDataSource;

@protocol TFFeedbackSubmissionService <NSObject>
@property(readonly, nonatomic) unsigned long long maxNumberOfCommentSymbolsAllowed;
@property(readonly, nonatomic) unsigned long long maxNumberOfScreenshotsAllowed;
- (void)submitFeedbackForBundleId:(NSString *)arg1 withContentsOfDataSource:(NSObject<TFFeedbackDataSource> *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

