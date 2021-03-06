//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathFencedExpression : SCRCMathRowExpression
{
    NSString *_openString;
    NSString *_closeString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *closeString; // @synthesize closeString=_closeString;
@property(copy, nonatomic) NSString *openString; // @synthesize openString=_openString;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (id)mathMLAttributes;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (unsigned long long)fractionLevel;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;
- (id)_binomialCoefficientContent;
- (_Bool)_isBinomialCoefficient;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

