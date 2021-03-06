//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class FCFeedGroup, NSString;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    CDUnknownBlockType _headlineFilter;
    NSString *_articleList;
    FCFeedGroup *_group;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCFeedGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) NSString *articleList; // @synthesize articleList=_articleList;
@property(copy, nonatomic) CDUnknownBlockType headlineFilter; // @synthesize headlineFilter=_headlineFilter;
- (void)performOperation;
- (id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3;

@end

