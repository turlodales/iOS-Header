//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHPostprocessingStep.h>

@class NSCharacterSet;

@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStep
{
    NSCharacterSet *_openingBracketCharacters;
    NSCharacterSet *_closingBracketCharacters;
    NSCharacterSet *_openingQuoteCharacters;
    NSCharacterSet *_closingQuoteCharacters;
    NSCharacterSet *_symmetricQuoteCharacters;
}

@property(retain, nonatomic) NSCharacterSet *symmetricQuoteCharacters; // @synthesize symmetricQuoteCharacters=_symmetricQuoteCharacters;
@property(retain, nonatomic) NSCharacterSet *closingQuoteCharacters; // @synthesize closingQuoteCharacters=_closingQuoteCharacters;
@property(retain, nonatomic) NSCharacterSet *openingQuoteCharacters; // @synthesize openingQuoteCharacters=_openingQuoteCharacters;
@property(retain, nonatomic) NSCharacterSet *closingBracketCharacters; // @synthesize closingBracketCharacters=_closingBracketCharacters;
@property(retain, nonatomic) NSCharacterSet *openingBracketCharacters; // @synthesize openingBracketCharacters=_openingBracketCharacters;
- (id)process:(id)arg1;
- (void)dealloc;
- (id)init;

@end

