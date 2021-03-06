//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHPatternNetwork;

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStep
{
    _Bool _capitalizationToSplit;
    _Bool _convertToLowercase;
    CHPatternNetwork *_patternFST;
    long long _patternType;
}

@property(nonatomic) _Bool convertToLowercase; // @synthesize convertToLowercase=_convertToLowercase;
@property(nonatomic) _Bool capitalizationToSplit; // @synthesize capitalizationToSplit=_capitalizationToSplit;
@property(nonatomic) long long patternType; // @synthesize patternType=_patternType;
@property(retain, nonatomic) CHPatternNetwork *patternFST; // @synthesize patternFST=_patternFST;
- (void)dealloc;
- (id)process:(id)arg1;
- (id)initWithPatternFst:(id)arg1 patternType:(long long)arg2 capitalizationToSplit:(_Bool)arg3 convertToLowercase:(_Bool)arg4;

@end

