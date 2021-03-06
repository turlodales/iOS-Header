//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCHeadlinesUpdateOperation : FCOperation
{
    NSArray *_headlines;
    id <FCContentContext> _context;
    id <FCCoreConfiguration> _configuration;
    double _maxArticleAge;
    CDUnknownBlockType _updateCompletion;
    NSDictionary *_resultHeadlinesByArticleID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *resultHeadlinesByArticleID; // @synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID;
@property(copy, nonatomic) CDUnknownBlockType updateCompletion; // @synthesize updateCompletion=_updateCompletion;
@property(nonatomic) double maxArticleAge; // @synthesize maxArticleAge=_maxArticleAge;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

