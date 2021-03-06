//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PGManager;
@protocol PGGraphDataModelEnrichmentManagerDelegate;

@interface PGGraphDataModelEnrichmentManager : NSObject
{
    NSArray *_enrichmentProcessors;
    long long _enrichmentContext;
    PGManager *_manager;
    id <PGGraphDataModelEnrichmentManagerDelegate> _delegate;
}

+ (id)enrichmentProcessorsForDataModelEnrichmentContext:(long long)arg1;
+ (id)liveUpdateEnrichmentProcessors;
+ (id)lightWeightEnrichmentProcessors;
+ (id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)arg1;
+ (id)weeklyEnrichmentProcessors;
+ (id)backgroundEnrichmentProcessors;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PGGraphDataModelEnrichmentManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) long long enrichmentContext; // @synthesize enrichmentContext=_enrichmentContext;
@property(readonly, nonatomic) NSArray *enrichmentProcessors; // @synthesize enrichmentProcessors=_enrichmentProcessors;
- (_Bool)_enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id *)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)enrichDataModelWithError:(id *)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)enrichDataModelForHighlightUUIDs:(id)arg1 withError:(id *)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id *)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)initWithManager:(id)arg1 enrichmentProcessors:(id)arg2;
- (id)initWithManager:(id)arg1 enrichmentContext:(long long)arg2;

@end

