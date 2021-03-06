//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class FPXDomainContext, FPXSpotlightIndexer, NSArray, NSData, NSError;

__attribute__((visibility("hidden")))
@interface FPXIndexOneBatchOperation : FPOperation
{
    FPXSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    _Bool _isInitialIndexing;
    _Bool _isOutOfBandIndexing;
    unsigned long long _logSection;
    NSArray *_updatedItems;
    NSArray *_deletedItemIDs;
    NSData *_nextAnchor;
    NSError *_fetchError;
    CDUnknownBlockType _canIndexFromCurrentState;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType canIndexFromCurrentState; // @synthesize canIndexFromCurrentState=_canIndexFromCurrentState;
@property(retain, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(retain, nonatomic) NSData *nextAnchor; // @synthesize nextAnchor=_nextAnchor;
@property(retain, nonatomic) NSArray *deletedItemIDs; // @synthesize deletedItemIDs=_deletedItemIDs;
@property(retain, nonatomic) NSArray *updatedItems; // @synthesize updatedItems=_updatedItems;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithIndexer:(id)arg1 isInitialIndexing:(_Bool)arg2 isOutOfBandIndexing:(_Bool)arg3 queue:(id)arg4;

@end

