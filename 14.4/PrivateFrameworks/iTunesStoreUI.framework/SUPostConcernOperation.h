//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/ISStoreURLOperationDelegate-Protocol.h>

@class NSNumber, NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSString *_commentText;
    SUConcernItem *_concern;
    unsigned long long _itemIdentifier;
}

@property unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain) SUConcernItem *concern; // @synthesize concern=_concern;
@property(retain) NSString *commentText; // @synthesize commentText=_commentText;
- (id)_httpBody;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (void)dealloc;
- (id)initWithConcern:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

