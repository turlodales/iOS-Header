//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject
{
    NSMutableArray *_prototypes;
    NSMutableArray *_entries;
    struct {
        _Bool areEntriesDirty;
    } _flags;
}

- (void).cxx_destruct;
- (void)addPrototype:(id)arg1 forIndexes:(id)arg2;
- (id)allPrototypes;
- (id)prototypeForItemAtIndex:(unsigned long long)arg1;
- (id)init;

@end

