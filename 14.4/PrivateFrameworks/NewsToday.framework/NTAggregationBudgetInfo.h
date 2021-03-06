//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NTPBSectionSlotCostInfo;

@interface NTAggregationBudgetInfo : NSObject <NSCopying>
{
    _Bool _respectMinMaxLimit;
    _Bool _allowSectionTitles;
    NTPBSectionSlotCostInfo *_sectionSlotCostInfo;
    unsigned long long _embedsLimit;
    double _slotsLimit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowSectionTitles; // @synthesize allowSectionTitles=_allowSectionTitles;
@property(nonatomic) double slotsLimit; // @synthesize slotsLimit=_slotsLimit;
@property(nonatomic) _Bool respectMinMaxLimit; // @synthesize respectMinMaxLimit=_respectMinMaxLimit;
@property(nonatomic) unsigned long long embedsLimit; // @synthesize embedsLimit=_embedsLimit;
@property(copy, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo; // @synthesize sectionSlotCostInfo=_sectionSlotCostInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

