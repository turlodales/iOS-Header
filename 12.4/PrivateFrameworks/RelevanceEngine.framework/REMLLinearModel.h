//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REMLModel.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel
{
    NSDictionary *_models;
    float _scaleFactor;
    NSDictionary *_nonActionModels;
    float _nonActionScaleFactor;
}

- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (long long)_getNumberOfCoordinates;
- (void)_clearModel;
- (_Bool)_loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (void)_clearCache;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3;
- (_Bool)requiresDirectory;
- (id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2;

@end

