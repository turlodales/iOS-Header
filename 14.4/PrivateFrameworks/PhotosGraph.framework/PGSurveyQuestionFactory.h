//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGQuestionFactory-Protocol.h>

@class NSDictionary, NSString, PGManager;

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory>
{
    _Bool _ignoreExistingQuestions;
    NSDictionary *_existingQuestionsByEntityIdentifier;
    PGManager *_manager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreExistingQuestions; // @synthesize ignoreExistingQuestions=_ignoreExistingQuestions;
@property(retain, nonatomic) PGManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSDictionary *existingQuestionsByEntityIdentifier; // @synthesize existingQuestionsByEntityIdentifier=_existingQuestionsByEntityIdentifier;
- (id)representativeCuratedAssetsFromMomentNode:(id)arg1;
- (id)_assetFromAssets:(id)arg1 closestToLocationCoordinate:(struct CLLocationCoordinate2D)arg2 radius:(double)arg3;
- (id)assetFromMomentNode:(id)arg1 closestToLocationCoordinate:(struct CLLocationCoordinate2D)arg2 radius:(double)arg3;
- (id)curatedAssetsFromMomentNode:(id)arg1;
- (id)keyAssetFromMomentNode:(id)arg1;
- (id)_questionsByEntityIdentifierFromQuestions:(id)arg1;
- (id)fetchExistingQuestions;
- (_Bool)shouldAddQuestion:(id)arg1 toAlreadyGeneratedQuestions:(id)arg2;
- (id)existingQuestionsForEntityIdentifier:(id)arg1;
- (_Bool)questionAlreadyExists:(id)arg1;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long questionOptions;
@property(readonly, nonatomic) unsigned short questionType;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

