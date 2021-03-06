//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class NSArray;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation
{
    _Bool _overrideArticleCachePolicy;
    _Bool _overrideTagCachePolicy;
    _Bool _shouldFilterHeadlinesWithoutSourceChannels;
    id <FCCoreConfiguration> _configuration;
    unsigned long long _articleCachePolicy;
    double _articleMaximumCachedAge;
    unsigned long long _tagCachePolicy;
    double _tagMaximumCachedAge;
    CDUnknownBlockType _interestTokenHandler;
    id <FCContentContext> _context;
    NSArray *_articleIDs;
    NSArray *_ignoreCacheForArticleIDs;
    NSArray *_resultHeadlines;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *resultHeadlines; // @synthesize resultHeadlines=_resultHeadlines;
@property(retain, nonatomic) NSArray *ignoreCacheForArticleIDs; // @synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs;
@property(retain, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType interestTokenHandler; // @synthesize interestTokenHandler=_interestTokenHandler;
@property(nonatomic) _Bool shouldFilterHeadlinesWithoutSourceChannels; // @synthesize shouldFilterHeadlinesWithoutSourceChannels=_shouldFilterHeadlinesWithoutSourceChannels;
@property double tagMaximumCachedAge; // @synthesize tagMaximumCachedAge=_tagMaximumCachedAge;
@property unsigned long long tagCachePolicy; // @synthesize tagCachePolicy=_tagCachePolicy;
@property _Bool overrideTagCachePolicy; // @synthesize overrideTagCachePolicy=_overrideTagCachePolicy;
@property double articleMaximumCachedAge; // @synthesize articleMaximumCachedAge=_articleMaximumCachedAge;
@property unsigned long long articleCachePolicy; // @synthesize articleCachePolicy=_articleCachePolicy;
@property _Bool overrideArticleCachePolicy; // @synthesize overrideArticleCachePolicy=_overrideArticleCachePolicy;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (id)completeFetchOperation;
- (id)fetchRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchConfigWithCompletion:(CDUnknownBlockType)arg1;
- (id)determineAppropriateFetchStepsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;
- (id)init;

@end

