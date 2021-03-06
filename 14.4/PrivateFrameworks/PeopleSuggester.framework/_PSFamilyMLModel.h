//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _PSFamilyMLModel : NSObject
{
    NSDictionary *_models;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *models; // @synthesize models=_models;
- (id)getPredictionFromModel:(id)arg1 withInputFeatures:(id)arg2;
- (id)ensemblePredictionForInputFeatures:(id)arg1;
- (id)defaultPredictionForInputFeatures:(id)arg1;
- (id)loadModelFromUrlResource:(id)arg1;
- (id)getModelWithModelName:(id)arg1;
- (id)defaultModelForPrediction;
- (id)getFeatureDictsForContacts:(id)arg1;
- (id)getFeatureDictForContact:(id)arg1;
- (id)familyRelationsOfContacts:(id)arg1 featureDicts:(id)arg2;
- (id)predictionsForContacts:(id)arg1 featureDicts:(id)arg2;
- (id)predictionsForContacts:(id)arg1;
- (id)predictionForContact:(id)arg1;
- (id)familiesPredictionForContacts:(id)arg1 withMaxSuggestion:(long long)arg2;
- (id)familyProbability:(id)arg1;
- (_Bool)isFamilyContact:(id)arg1;
- (id)initWithModels:(id)arg1;
- (id)init;

@end

