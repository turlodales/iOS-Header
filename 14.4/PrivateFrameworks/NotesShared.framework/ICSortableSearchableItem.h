//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem, ICRankingQueriesDefinition, NSArray, NSDate, NSDictionary, NSString;

@interface ICSortableSearchableItem : NSObject
{
    _Bool _isPrefixMatch;
    _Bool _needsLazyInitialization;
    NSDictionary *_highlightInfo;
    CSSearchableItem *_searchableItem;
    double _rankingScore;
    NSArray *_attachmentUniqueIdentifiers;
    unsigned long long _relevanceBitField;
    unsigned long long _modificationDateBucket;
    NSDate *_modificationDate;
    NSDate *_creationDate;
    unsigned long long _searchResultType;
    NSString *_searchString;
    ICRankingQueriesDefinition *_rankingQueriesDefinition;
    NSString *_language;
}

+ (id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsLazyInitialization; // @synthesize needsLazyInitialization=_needsLazyInitialization;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition; // @synthesize rankingQueriesDefinition=_rankingQueriesDefinition;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) unsigned long long searchResultType; // @synthesize searchResultType=_searchResultType;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) unsigned long long modificationDateBucket; // @synthesize modificationDateBucket=_modificationDateBucket;
@property(readonly, nonatomic) unsigned long long relevanceBitField; // @synthesize relevanceBitField=_relevanceBitField;
@property(readonly, nonatomic) NSArray *attachmentUniqueIdentifiers; // @synthesize attachmentUniqueIdentifiers=_attachmentUniqueIdentifiers;
@property(readonly, nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(readonly, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool isPrefixMatch; // @synthesize isPrefixMatch=_isPrefixMatch;
@property(readonly, nonatomic) NSDictionary *highlightInfo; // @synthesize highlightInfo=_highlightInfo;
- (void)lazilyInitializeHighlightInfoAndIsPrefixMatchIfNecessary;
- (id)initWithSearchableItem:(id)arg1 searchString:(id)arg2 rankingQueriesDefinition:(id)arg3 rankingScore:(double)arg4 attachmentUniqueIdentifiers:(id)arg5 language:(id)arg6;
- (id)initWithSearchableItem:(id)arg1 highlightInfo:(id)arg2 rankingScore:(double)arg3 attachmentUniqueIdentifiers:(id)arg4;

@end

