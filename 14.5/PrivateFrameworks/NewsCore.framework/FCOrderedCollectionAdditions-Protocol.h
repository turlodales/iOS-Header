//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;
@protocol FCOrderedCollection;

@protocol FCOrderedCollectionAdditions
- (NSDictionary *)fc_diffAgainstSortedOrderedCollection:(id <FCOrderedCollection>)arg1 usingComparator:(long long (^)(id, id))arg2;
- (_Bool)fc_isSortedUsingComparator:(long long (^)(id, id))arg1;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(void (^)(id, id, unsigned long long, _Bool *))arg1;
@end

