//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VMConfiguration : NSObject
{
}

+ (id)metadataDictionaryForSpeechAssetWithLanguage:(id)arg1;
+ (id)confidenceThresholdFromAssetForKey:(id)arg1;
+ (id)confidenceSegmentThresholdFromAsset;
+ (id)confidenceLowQualityThresholdFromAsset;
+ (id)confidenceThresholdFromAsset;
+ (id)confidenceThresholdFromDefaultsForKey:(id)arg1;
+ (float)confidenceSegmentThreshold;
+ (float)confidenceLowQualityThreshold;
+ (float)confidenceThreshold;
+ (id)localeForTranscriptionLanguage;

@end

