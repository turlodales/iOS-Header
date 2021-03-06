//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHPostprocessingStep.h>

@class NSCharacterSet, NSDictionary;

@interface CHNumberFieldResultReorderingStep : CHPostprocessingStep
{
    NSCharacterSet *_allowedCharacters;
    NSDictionary *_characterReplacements;
}

+ (id)tokenRowAsString:(id)arg1;
@property(retain, nonatomic) NSDictionary *characterReplacements; // @synthesize characterReplacements=_characterReplacements;
@property(retain, nonatomic) NSCharacterSet *allowedCharacters; // @synthesize allowedCharacters=_allowedCharacters;
- (id)process:(id)arg1;
- (long long)compareStringForPhoneNumberCompatibility:(id)arg1 with:(id)arg2;
- (long long)countUnallowedCharactersInString:(id)arg1;
- (void)dealloc;
- (id)initForDigitFields;
- (id)initForPhoneNumberFields;

@end

