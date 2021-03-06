//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLTreeEnsembleXGBoostClassifier.h>

#import <CoreML/MLUpdatable-Protocol.h>

@class MLParameterContainer, MLUpdateProgressHandlers, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MLTreeEnsembleXGBoostUpdateEngine : MLTreeEnsembleXGBoostClassifier <MLUpdatable>
{
    _Bool _continueWithUpdate;
    _Bool _personalization;
    MLUpdateProgressHandlers *_progressHandlers;
    NSObject<OS_dispatch_queue> *_progressHandlersDispatchQueue;
    MLParameterContainer *_parameterContainer;
    unsigned long long _numDimensions;
    shared_ptr_0841df90 _mmappedModel;
    vector_ebb6ef3e _classesByString;
    vector_bbba3654 _classesByInt;
    vector_aab22ae2 _cachedModel;
}

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) vector_aab22ae2 cachedModel; // @synthesize cachedModel=_cachedModel;
@property(nonatomic) shared_ptr_0841df90 mmappedModel; // @synthesize mmappedModel=_mmappedModel;
@property(nonatomic) unsigned long long numDimensions; // @synthesize numDimensions=_numDimensions;
@property(nonatomic) vector_bbba3654 classesByInt; // @synthesize classesByInt=_classesByInt;
@property(nonatomic) vector_ebb6ef3e classesByString; // @synthesize classesByString=_classesByString;
@property(retain, nonatomic) MLParameterContainer *parameterContainer; // @synthesize parameterContainer=_parameterContainer;
@property(nonatomic) _Bool personalization; // @synthesize personalization=_personalization;
@property(nonatomic) _Bool continueWithUpdate; // @synthesize continueWithUpdate=_continueWithUpdate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue; // @synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue;
@property(retain, nonatomic) MLUpdateProgressHandlers *progressHandlers; // @synthesize progressHandlers=_progressHandlers;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)cancelUpdate;
- (void)resumeUpdate;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (id)parameterValueForKey:(id)arg1;
- (_Bool)setBoosterParameters:(void *)arg1 error:(id *)arg2;
- (void)updateModelWithData:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (id)updateParameters;
- (id)loadParameterDescriptionsAndContainerFromConfiguration:(id)arg1 modelDescription:(id)arg2 error:(id *)arg3;
- (id)initWithCompiledArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

