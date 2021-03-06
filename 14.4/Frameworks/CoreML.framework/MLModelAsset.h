//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModelConfiguration, NSURL;
@protocol MLClassifier, MLModeling, MLRegressor;

@interface MLModelAsset : NSObject
{
    _Bool _ranLoad;
    NSURL *_compiledURL;
    NSObject<MLModeling> *_asset;
    MLModelConfiguration *_loadConfiguration;
}

+ (_Bool)purgeANEIRForModelAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)purgeANEBinaryForModelAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)needsANECompilationForModelAtURL:(id)arg1 result:(_Bool *)arg2 error:(id *)arg3;
+ (id)fetchNetworkURLFromCompiledModelAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)isANESupported;
+ (id)modelAssetWithSpecificationURL:(id)arg1 error:(id *)arg2;
+ (id)modelAssetWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
+ (id)modelAssetWithURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)modelAssetWithURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) MLModelConfiguration *loadConfiguration; // @synthesize loadConfiguration=_loadConfiguration;
@property(retain) NSObject<MLModeling> *asset; // @synthesize asset=_asset;
@property _Bool ranLoad; // @synthesize ranLoad=_ranLoad;
@property(readonly) NSURL *compiledURL; // @synthesize compiledURL=_compiledURL;
- (id)regressorWithError:(id *)arg1;
@property(readonly, nonatomic) id <MLRegressor> regressor;
- (id)classifierWithError:(id *)arg1;
@property(readonly, nonatomic) id <MLClassifier> classifier;
- (id)modelWithError:(id *)arg1;
@property(readonly, nonatomic) id <MLModeling> model;
- (_Bool)load:(id *)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

