//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <ProactiveSupport/NSFastEnumeration-Protocol.h>

@interface _PASLazyArrayBase : NSArray <NSFastEnumeration>
{
}

- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByAddingObject:(id)arg1;
- (_Bool)isEqualToArray:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)objectsAtIndexes:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end

