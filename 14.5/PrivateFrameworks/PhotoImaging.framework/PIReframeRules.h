//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURuleSystem.h>

@interface PIReframeRules : NURuleSystem
{
}

+ (id)pregateRulesSystemWithConstants:(id)arg1;
+ (id)sharedPregateRules;
+ (id)factCandidateForHorizon;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForReframe;
+ (id)factCandidateForVideo;
+ (id)factCandidateForStill;
@property(readonly) _Bool isCandidateForHorizon;
@property(readonly) _Bool isCandidateForPerspective;
@property(readonly) _Bool isCandidateForReframe;

@end

