//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface QuickTypePFLTrainerMLP : NSObject
{
    NSURL *_seedModelPath;
    struct CFScopedPtr<void *> _model;
    NSNumber *_initialLoss;
    NSNumber *_trainingLoss;
    unsigned long long _batchSize;
    NSNumber *_learningRate;
    NSNumber *_gradientClipMin;
    NSNumber *_gradientClipMax;
    NSNumber *_clippingNorm;
    unsigned long long _normBinCount;
    NSString *_privacyIdentifier;
}

+ (id)reportingStringForModelUpdates:(float *)arg1 count:(unsigned long long)arg2;
+ (struct __CFData *)copyToFlatBuffer:(void *)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *privacyIdentifier; // @synthesize privacyIdentifier=_privacyIdentifier;
@property(readonly, nonatomic) NSNumber *trainingLoss; // @synthesize trainingLoss=_trainingLoss;
@property(readonly, nonatomic) NSNumber *initialLoss; // @synthesize initialLoss=_initialLoss;
@property(nonatomic) unsigned long long normBinCount; // @synthesize normBinCount=_normBinCount;
@property(retain, nonatomic) NSNumber *clippingNorm; // @synthesize clippingNorm=_clippingNorm;
@property(retain, nonatomic) NSNumber *gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(retain, nonatomic) NSNumber *gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(retain, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
- (void)writeModelToURL:(id)arg1;
- (id)getWeightUpdatesAddNoise:(_Bool)arg1 encryptionKey:(id)arg2 recipe:(id)arg3;
- (_Bool)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (id)initWithSeedModelPath:(id)arg1 andPrivacyIdentifier:(id)arg2;

@end

