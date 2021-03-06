//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLModelRegressor, PMLSparseMatrix;

@interface PMLTrainingStoredSessionBatch : NSObject
{
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_outcomes;
    unsigned long long _count;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) PMLModelRegressor *outcomes; // @synthesize outcomes=_outcomes;
@property(readonly, nonatomic) PMLSparseMatrix *covariates; // @synthesize covariates=_covariates;
- (id)minibatchStatsForPositiveLabels:(id)arg1;
- (id)minibatchStats;
- (id)minibatchStatsForPositiveLabel:(unsigned long long)arg1;
- (id)initWithCovariates:(id)arg1 outcomes:(id)arg2;

@end

