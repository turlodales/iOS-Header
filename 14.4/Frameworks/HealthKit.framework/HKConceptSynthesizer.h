//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKConceptSynthesizer : NSObject
{
}

+ (id)adHocCodingForCodingCollection:(id)arg1;
+ (id)_synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 prioritizedCodingSystems:(id)arg3;
+ (id)enumerateCodingsBySystem:(id)arg1 prioritizingCodingSystems:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)bestCodingSystemForDisplayForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)bestDisplayNameForCodingCollection:(id)arg1;
+ (id)synthesizeInMemoryConceptForCodingCollection:(id)arg1;
+ (id)bestDisplayNameForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2;
+ (id)privateCodeCreationCodingSortDescriptors;
+ (id)proritizedCodingSystemsForDisplay;

@end

