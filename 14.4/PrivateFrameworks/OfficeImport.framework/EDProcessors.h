//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject
{
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

- (void).cxx_destruct;
- (void)applyProcessorsWithSheet:(id)arg1;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (void)removeAllObjects;
- (void)removeProcessorClass:(Class)arg1;
- (_Bool)hasProcessors;
- (void)addProcessorClass:(Class)arg1;
- (id)initWithWorkbook:(id)arg1;

@end

