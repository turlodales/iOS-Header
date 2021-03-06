//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableDictionary;

@interface HFTransformItemProvider : HFItemProvider
{
    HFItemProvider *_sourceProvider;
    CDUnknownBlockType _transformationBlock;
    NSMutableDictionary *_transformedItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *transformedItems; // @synthesize transformedItems=_transformedItems;
@property(copy, nonatomic) CDUnknownBlockType transformationBlock; // @synthesize transformationBlock=_transformationBlock;
@property(retain, nonatomic) HFItemProvider *sourceProvider; // @synthesize sourceProvider=_sourceProvider;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceProvider:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

