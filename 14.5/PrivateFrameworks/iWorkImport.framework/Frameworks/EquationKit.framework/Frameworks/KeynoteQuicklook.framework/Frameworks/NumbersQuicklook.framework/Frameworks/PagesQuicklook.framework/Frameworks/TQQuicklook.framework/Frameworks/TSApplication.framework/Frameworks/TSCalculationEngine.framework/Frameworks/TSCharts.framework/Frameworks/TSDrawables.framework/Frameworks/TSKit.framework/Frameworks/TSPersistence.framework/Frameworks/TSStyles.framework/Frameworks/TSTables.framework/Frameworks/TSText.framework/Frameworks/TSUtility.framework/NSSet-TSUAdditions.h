//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

@interface NSSet (TSUAdditions)
+ (id)tsu_intersectionOfSets:(id)arg1;
+ (_Bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;
- (id)tsu_setBySubtractingSet:(id)arg1;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_onlyObject;
- (_Bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_sortedArray;
- (_Bool)tsu_containsKindOfClass:(Class)arg1;
- (_Bool)tsu_containsObjectIdenticalTo:(id)arg1;
@end

