//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDetectorsNaturalLanguage/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;

@interface IPCircularBufferArray : NSObject <NSFastEnumeration>
{
    NSMutableArray *_backingStore;
    unsigned long long _currentIndex;
    unsigned long long _capacity;
    unsigned long long _mutationDetector;
    id _lastObject;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long count;
- (void)removeAllObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) id lastObject;
- (void)addObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

