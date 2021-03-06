//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCStreaming-Protocol.h>

@class FCCloudContext, NSMutableOrderedSet, NSString, SFMoreResults, SFRankingFeedback;

@interface FCArticleSearchStream : NSObject <FCStreaming>
{
    _Bool _fetching;
    _Bool _finished;
    NSString *_keyboardInputMode;
    double _scale;
    NSString *_query;
    SFMoreResults *_moreResults;
    SFRankingFeedback *_rankingFeedback;
    FCCloudContext *_cloudContext;
    unsigned long long _parsecQueryID;
    NSMutableOrderedSet *_articleSearchResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *articleSearchResults; // @synthesize articleSearchResults=_articleSearchResults;
@property(nonatomic) unsigned long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(retain, nonatomic) SFMoreResults *moreResults; // @synthesize moreResults=_moreResults;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithParsecQueryID:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

