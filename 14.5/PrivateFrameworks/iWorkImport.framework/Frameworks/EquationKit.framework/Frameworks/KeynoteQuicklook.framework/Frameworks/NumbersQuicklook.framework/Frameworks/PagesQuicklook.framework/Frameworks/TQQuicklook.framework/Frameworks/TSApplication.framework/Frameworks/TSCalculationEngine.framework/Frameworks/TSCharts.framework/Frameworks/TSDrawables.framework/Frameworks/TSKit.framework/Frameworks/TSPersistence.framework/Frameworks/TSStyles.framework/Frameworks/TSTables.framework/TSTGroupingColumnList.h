//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSosBase.h>

#import <TSTables/NSCopying-Protocol.h>

@class NSArray;

@interface TSTGroupingColumnList : TSKSosBase <NSCopying>
{
    NSArray *_groupingColumns;
}

- (void).cxx_destruct;
- (void)encodeToArchive:(struct GroupColumnListArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct GroupColumnListArchive *)arg1;
- (void)replaceRuleAtGroupLevel:(unsigned char)arg1 withRule:(id)arg2;
- (void)changeGroupingTypeForGroupLevel:(unsigned char)arg1 toType:(int)arg2;
- (void)moveRuleFromGroupLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2;
- (void)removeRuleAtGroupLevel:(unsigned char)arg1;
- (void)addRule:(id)arg1 atGroupLevel:(unsigned char)arg2;
- (void)replaceRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2;
- (void)changeGroupingTypeForRuleIndex:(unsigned long long)arg1 toType:(int)arg2;
- (void)moveRuleFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeRuleAtIndex:(unsigned long long)arg1;
- (void)addRule:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isGroupingColumnUidsEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)p_isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ruleAtGroupLevel:(unsigned char)arg1;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
@property(readonly, nonatomic) NSArray *groupingColumns;
- (id)initWithGroupingColumns:(id)arg1;
- (id)init;

@end

