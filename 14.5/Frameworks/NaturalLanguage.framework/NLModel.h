//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NLModelConfiguration, NLModelImpl, NSData, NSDictionary;
@protocol OS_dispatch_queue;

@interface NLModel : NSObject
{
    NLModelConfiguration *_configuration;
    NSDictionary *_infoDictionary;
    NLModelImpl *_modelImpl;
    NSData *_data;
    MLModel *_mlModel;
    void *_container;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

+ (id)modelWithData:(id)arg1 error:(id *)arg2;
+ (id)modelWithMLModel:(id)arg1 error:(id *)arg2;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)testResultsWithDataSet:(id)arg1;
- (id)testResultsWithDataProvider:(id)arg1;
- (id)sequenceTestResultsWithDataProvider:(id)arg1;
- (id)classifierTestResultsWithDataProvider:(id)arg1;
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelArraysForTokenArrays:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)embeddingData;
- (id)embedding;
- (id)gazetteer;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)labelArray;
- (id)labelMap;
- (unsigned long long)systemVersion;
- (id)mlModel;
@property(readonly, copy) NLModelConfiguration *configuration;
- (_Bool)writeMLModelToURL:(id)arg1 atomically:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2 error:(id *)arg3;
- (id)data;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;
- (id)initWithClassifierMLModel:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 mlModel:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 modelImpl:(id)arg2;

@end

