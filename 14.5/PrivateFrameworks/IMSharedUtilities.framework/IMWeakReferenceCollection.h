//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject
{
    NSMutableArray *_list;
}

- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end

