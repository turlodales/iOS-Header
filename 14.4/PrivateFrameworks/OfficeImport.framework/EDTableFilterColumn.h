//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDTableFilterColumn : NSObject
{
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (void).cxx_destruct;
- (id)description;
- (void)setFiltersRelation:(int)arg1;
- (int)filtersRelation;
- (void)setColumnIndex:(unsigned long long)arg1;
- (unsigned long long)columnIndex;
- (void)addFilter:(id)arg1;
- (id)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (id)init;

@end

