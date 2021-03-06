//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _matchCategory;
    _Bool _excludeWithoutSentiment;
    _Bool _orderByName;
    _Bool _orderByAscendingDate;
    _Bool _removeNearDuplicates;
    _Bool _isForRecordMonitoring;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    NSSet *_matchingSourceGroupIds;
    NSSet *_matchingSourceDocumentIds;
    unsigned long long _deviceFilter;
    double _decayRate;
    NSString *_matchingName;
    NSSet *_matchingCategories;
    NSSet *_excludingAlgorithms;
    NSString *_matchingContactHandle;
    NSString *_matchingEntityTrie;
    unsigned long long _locationConsumer;
}

+ (id)locationQueryWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
+ (id)_excludingAlgorithmsDescription:(id)arg1;
+ (id)_matchingCategoriesDescription:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool isForRecordMonitoring; // @synthesize isForRecordMonitoring=_isForRecordMonitoring;
@property(nonatomic) _Bool removeNearDuplicates; // @synthesize removeNearDuplicates=_removeNearDuplicates;
@property(nonatomic) _Bool orderByAscendingDate; // @synthesize orderByAscendingDate=_orderByAscendingDate;
@property(nonatomic) _Bool orderByName; // @synthesize orderByName=_orderByName;
@property(nonatomic) unsigned long long locationConsumer; // @synthesize locationConsumer=_locationConsumer;
@property(retain, nonatomic) NSString *matchingEntityTrie; // @synthesize matchingEntityTrie=_matchingEntityTrie;
@property(retain, nonatomic) NSString *matchingContactHandle; // @synthesize matchingContactHandle=_matchingContactHandle;
@property(nonatomic) _Bool excludeWithoutSentiment; // @synthesize excludeWithoutSentiment=_excludeWithoutSentiment;
@property(retain, nonatomic) NSSet *excludingAlgorithms; // @synthesize excludingAlgorithms=_excludingAlgorithms;
@property(retain, nonatomic) NSSet *matchingCategories; // @synthesize matchingCategories=_matchingCategories;
@property(nonatomic) _Bool matchCategory; // @synthesize matchCategory=_matchCategory;
@property(copy, nonatomic) NSString *matchingName; // @synthesize matchingName=_matchingName;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *matchingSourceDocumentIds; // @synthesize matchingSourceDocumentIds=_matchingSourceDocumentIds;
@property(retain, nonatomic) NSSet *matchingSourceGroupIds; // @synthesize matchingSourceGroupIds=_matchingSourceGroupIds;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)customizedDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNamedEntityQuery:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) _Bool overrideDecayRate;

@end

