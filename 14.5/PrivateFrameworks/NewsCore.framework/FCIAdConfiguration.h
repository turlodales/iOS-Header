//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NTPBIAdConfig;

@interface FCIAdConfiguration : NSObject
{
    NTPBIAdConfig *_pbConfig;
    NSDictionary *_configDict;
    _Bool _segmentsEnabled;
    _Bool _preRequestPolicyValidationEnabled;
    double _segmentsThreshold;
    long long _segmentsSubmissionFrequency;
    long long _segmentsHistoryWindowInterval;
    long long _segmentsMinimumArticleCount;
    long long _segmentsMinimumEventCount;
    double _segmentsMinRelativeRate;
    NSArray *_iAdSegmentIDs;
    NSDictionary *_adStatusConditionsByType;
    double _feedNumberofViewportsBetweenAds;
    double _articleNumberofViewportsBetweenAds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPreRequestPolicyValidationEnabled) _Bool preRequestPolicyValidationEnabled; // @synthesize preRequestPolicyValidationEnabled=_preRequestPolicyValidationEnabled;
@property(readonly, nonatomic) double articleNumberofViewportsBetweenAds; // @synthesize articleNumberofViewportsBetweenAds=_articleNumberofViewportsBetweenAds;
@property(readonly, nonatomic) double feedNumberofViewportsBetweenAds; // @synthesize feedNumberofViewportsBetweenAds=_feedNumberofViewportsBetweenAds;
@property(readonly, nonatomic) NSDictionary *adStatusConditionsByType; // @synthesize adStatusConditionsByType=_adStatusConditionsByType;
@property(readonly, nonatomic) NSArray *iAdSegmentIDs; // @synthesize iAdSegmentIDs=_iAdSegmentIDs;
@property(readonly, nonatomic) double segmentsMinRelativeRate; // @synthesize segmentsMinRelativeRate=_segmentsMinRelativeRate;
@property(readonly, nonatomic) long long segmentsMinimumEventCount; // @synthesize segmentsMinimumEventCount=_segmentsMinimumEventCount;
@property(readonly, nonatomic) long long segmentsMinimumArticleCount; // @synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount;
@property(readonly, nonatomic) long long segmentsHistoryWindowInterval; // @synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval;
@property(readonly, nonatomic) long long segmentsSubmissionFrequency; // @synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency;
@property(readonly, nonatomic) double segmentsThreshold; // @synthesize segmentsThreshold=_segmentsThreshold;
@property(readonly, nonatomic, getter=areSegmentsEnabled) _Bool segmentsEnabled; // @synthesize segmentsEnabled=_segmentsEnabled;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBIAdConfig:(id)arg1;

@end

