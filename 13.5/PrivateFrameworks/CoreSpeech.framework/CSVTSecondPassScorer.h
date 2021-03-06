//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSVTSecondPassPhraseScore, NSDictionary;

@interface CSVTSecondPassScorer : NSObject
{
    NSDictionary *_phraseMap;
    CSVTSecondPassPhraseScore *_triggeredPhrase;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSVTSecondPassPhraseScore *triggeredPhrase; // @synthesize triggeredPhrase=_triggeredPhrase;
@property(retain, nonatomic) NSDictionary *phraseMap; // @synthesize phraseMap=_phraseMap;
- (id)description;
- (id)dictionaryRepresentationWithSecondChanceEnabled:(_Bool)arg1;
- (id)bestScoringPhrase;
- (id)getNearMissPhraseWithSecondChanceEnabled:(_Bool)arg1;
- (id)getTriggeredPhraseWithSecondChanceEnabled:(_Bool)arg1;
- (void)updateWithCtcCheckerResults:(id)arg1;
- (void)updateWithNdapiResults:(id)arg1;
- (id)initWithAsset:(id)arg1 firstPassSource:(unsigned long long)arg2;

@end

