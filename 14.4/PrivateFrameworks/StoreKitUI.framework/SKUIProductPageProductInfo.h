//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIProductPageProductInfo : NSObject
{
    NSMutableArray *_labels;
    NSMutableArray *_values;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfEntries;
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithInfoSectionDictionaries:(id)arg1;

@end

