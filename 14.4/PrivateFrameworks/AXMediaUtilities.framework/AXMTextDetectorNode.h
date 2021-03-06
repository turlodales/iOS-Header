//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMSemanticTextFactory, AXMTextLayoutManager;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    AXMSemanticTextFactory *_semanticTextFactory;
    AXMTextLayoutManager *_textLayoutManager;
}

+ (id)filterPreferredDetectionLanguages:(id)arg1 withSupportedDetectionLanguages:(id)arg2;
+ (id)supportedDetectionLanguagesForLevel:(long long)arg1;
+ (id)textDetectionLanguagesFromOptions:(id)arg1;
+ (long long)recognitionLevelFromOptions:(id)arg1;
+ (id)effectiveLanguagesFromOptions:(id)arg1;
+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) AXMTextLayoutManager *textLayoutManager; // @synthesize textLayoutManager=_textLayoutManager;
@property(retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory; // @synthesize semanticTextFactory=_semanticTextFactory;
- (id)_textDetectionOptions:(id)arg1;
- (id)_textsForObservations:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (_Bool)shouldEvaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (void)nodeInitialize;

@end

