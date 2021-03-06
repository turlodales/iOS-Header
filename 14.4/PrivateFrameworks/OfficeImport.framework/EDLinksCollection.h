//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDLinksCollection : NSObject
{
    NSMutableArray *mLinks;
    NSMutableArray *mReferences;
}

- (void).cxx_destruct;
- (id)description;
- (void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long *)arg2 nameIndex:(unsigned long long *)arg3;
- (unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2;
- (_Bool)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long *)arg2 lastSheetIndex:(unsigned long long *)arg3;
- (unsigned long long)addReference:(id)arg1;
- (unsigned long long)indexOfReference:(id)arg1;
- (id)referenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencesCount;
- (unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1;
- (unsigned long long)addLink:(id)arg1;
- (unsigned long long)indexOfFirstLinkWithType:(int)arg1;
- (id)linkAtIndex:(unsigned long long)arg1;
- (unsigned long long)linksCount;
- (id)init;

@end

