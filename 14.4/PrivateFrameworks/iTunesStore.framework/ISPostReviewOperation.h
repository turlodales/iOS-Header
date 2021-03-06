//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStore/ISStoreURLOperationDelegate-Protocol.h>

@class ISReview, NSNumber, NSString;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate>
{
    _Bool _backgroundReview;
    ISReview *_review;
}

@property(retain) ISReview *review; // @synthesize review=_review;
@property(getter=isBackgroundReview) _Bool backgroundReview; // @synthesize backgroundReview=_backgroundReview;
- (id)_httpBody;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

