//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider
{
    RERelevanceCondition *_condition;
}

- (void).cxx_destruct;
- (float)_evaluateCondition;
@property(readonly, nonatomic) RERelevanceCondition *condition;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRelevanceCondition:(id)arg1;

@end

