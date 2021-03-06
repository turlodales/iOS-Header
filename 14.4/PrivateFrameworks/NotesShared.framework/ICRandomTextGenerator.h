//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject
{
    unsigned long long _language;
    ICRandomNumberGenerator *_randomNumberGenerator;
}

+ (id)sentencePunctuationForLanguage:(unsigned long long)arg1 endOfParagraph:(_Bool)arg2;
+ (_Bool)hasSpacesBetweenWordsForLanguage:(unsigned long long)arg1;
+ (id)wordsForLanguage:(unsigned long long)arg1;
+ (id)loadWordsForLanguage:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ICRandomNumberGenerator *randomNumberGenerator; // @synthesize randomNumberGenerator=_randomNumberGenerator;
@property(nonatomic) unsigned long long language; // @synthesize language=_language;
- (id)generateMinSentences:(unsigned long long)arg1 maxSentences:(unsigned long long)arg2 minWords:(unsigned long long)arg3 maxWords:(unsigned long long)arg4;
- (id)generateWordsWithMinLength:(unsigned long long)arg1;
- (id)generateMinWords:(unsigned long long)arg1 maxWords:(unsigned long long)arg2;
- (id)generateWords:(unsigned long long)arg1 minLength:(unsigned long long)arg2;
- (id)paragraph;
- (id)sentence;
- (id)lineOfText;
- (id)word;
@property(readonly, nonatomic) _Bool isRightToLeftLanguage;
- (id)initWithRandomNumberGenerator:(id)arg1;

@end

