//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <mecabra/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface MecabraCandidate : NSObject <NSCopying>
{
    void *_rawCandidate;
}

+ (id)syntheticCandidateFromWords:(id)arg1 withLexicon:(struct Lexicon *)arg2 language:(int)arg3;
- (void)setWeight:(unsigned long long)arg1;
- (id)wordIDs;
- (id)wordReadings;
- (id)words;
- (id)syllablesInDictionaryReading;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInAnalysisString;
- (id)syllablesInString:(id)arg1 syllableLengths:(id)arg2;
- (id)syllabifiedDictionaryReading;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedAnalysisString;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)convertedAnalysisStringForFirstSyllable;
@property(readonly, nonatomic) struct ConversionCandidate *rawConversionCandidate;
- (id)initWithCandidate:(struct MecabraCandidateBase *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CFArray *)copySyllableLengthArrayInDictionaryReading;
- (struct __CFArray *)copySyllableLengthArrayInConvertedAnalysisString;
- (struct __CFArray *)copySyllableLengthArrayInAnalysisString;
- (long long)matchPenalty;
- (unsigned short)matchedLengthType;
- (double)lmProbability;
- (unsigned short)matchType;
- (unsigned short)kind;
- (long long)baseCost;
- (long long)weight;
- (unsigned short)lastPrefixValue;
- (unsigned short)kindAtIndex:(unsigned long long)arg1;
- (unsigned long long)trieValueAtIndex:(unsigned long long)arg1;
- (long long)costAtIndex:(unsigned long long)arg1;
- (unsigned short)rcAttrAtIndex:(unsigned long long)arg1;
- (unsigned short)lcAttrAtIndex:(unsigned long long)arg1;
- (struct __CFArray *)copySyllableLengthArrayForWordAtIndex:(unsigned long long)arg1;
- (_Bool)wordIsFromSystemDictionaryAtIndex:(unsigned long long)arg1;
- (long long)phraseBoundaryAfterWordAtIndex:(long long)arg1;
- (unsigned short)wordDictionaryReadingLengthAtIndex:(unsigned long long)arg1;
- (unsigned short)wordReadingLengthAtIndex:(unsigned long long)arg1;
- (CDStruct_912cb5d2)wordRangeAtIndex:(long long)arg1;
- (unsigned short)wordLengthAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long wordCount;
- (_Bool)setDisplayString:(struct __CFString *)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, nonatomic) NSString *dictionaryReading;
@property(readonly, nonatomic) NSString *convertedAnalysisString;
@property(readonly, nonatomic) NSString *analysisString;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) NSString *surface;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) unsigned long long wubixingType;
@property(readonly, nonatomic) _Bool isWubixingConvertedByPinyin;
@property(readonly, nonatomic) _Bool isAbbreviated;
@property(readonly, nonatomic) _Bool isPartialCandidate;
@property(readonly, nonatomic) _Bool isBilingualCandidate;
@property(readonly, nonatomic) _Bool isRegionalCandidate;
@property(readonly, nonatomic) _Bool isOTAWordlistCandidate;
@property(readonly, nonatomic) _Bool isAutocorrectedCandidate;
@property(readonly, nonatomic) _Bool isFuzzyMatchCandidate;
@property(readonly, nonatomic) _Bool isPredictionCandidate;
@property(readonly, nonatomic) _Bool isUserWordCandidate;
@property(readonly, nonatomic) _Bool isLearningDictionaryCandidate;
@property(readonly, nonatomic) _Bool isPersonName;
@property(readonly, nonatomic) _Bool isEmojiCandidate;
@property(readonly, nonatomic) _Bool isExtensionForCandidateBar;
@property(readonly, nonatomic) _Bool isExtensionCandidate;
@property(readonly, nonatomic) _Bool isSyntheticCandidate;
@property(readonly, nonatomic) _Bool isConversionCandidate;
- (void)dealloc;
@property(readonly, nonatomic) struct MecabraCandidateBase *rawCandidate;

@end

