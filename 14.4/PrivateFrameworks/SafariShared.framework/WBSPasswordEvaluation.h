//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WBSPasswordPatternMatch;

@interface WBSPasswordEvaluation : NSObject
{
    double _guessesRequired;
    NSString *_password;
    NSArray *_patternMatches;
    long long _evaluationType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long evaluationType; // @synthesize evaluationType=_evaluationType;
@property(readonly, copy, nonatomic) NSArray *patternMatches; // @synthesize patternMatches=_patternMatches;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
- (id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)arg1 includePatternMatches:(_Bool)arg2;
@property(readonly, nonatomic) NSString *userFeedbackString;
- (id)_passwordFeedbackString;
- (_Bool)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)arg1;
- (id)_bestPatternMatchOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) WBSPasswordPatternMatch *bestPatternMatchForUserFeedback;
- (unsigned long long)_userFeedbackLengthScoreForPatternMatch:(id)arg1;
@property(readonly, nonatomic) double guessesRequired; // @synthesize guessesRequired=_guessesRequired;
@property(readonly, nonatomic) _Bool userShouldBeShownActiveWarning;
@property(readonly, nonatomic) _Bool userShouldBeShownPassiveWarning;
@property(readonly, nonatomic) unsigned long long strength;
- (id)initWithEvaluationType:(long long)arg1 password:(id)arg2 patternMatches:(id)arg3 guessesRequired:(double)arg4;

@end

