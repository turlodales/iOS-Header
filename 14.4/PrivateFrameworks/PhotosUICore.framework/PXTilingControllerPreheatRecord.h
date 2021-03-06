//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;
@protocol PXTilingControllerPreheatHandler;

@interface PXTilingControllerPreheatRecord : NSObject
{
    id <PXTilingControllerPreheatHandler> _preheatHandler;
    void *_context;
    unsigned long long _tileGroup;
    NSIndexSet *_preheatedTileIndexes;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *preheatedTileIndexes; // @synthesize preheatedTileIndexes=_preheatedTileIndexes;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long tileGroup; // @synthesize tileGroup=_tileGroup;
@property(readonly, nonatomic) void *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <PXTilingControllerPreheatHandler> preheatHandler; // @synthesize preheatHandler=_preheatHandler;
- (id)initWithPreheatHandler:(id)arg1 context:(void *)arg2;

@end

