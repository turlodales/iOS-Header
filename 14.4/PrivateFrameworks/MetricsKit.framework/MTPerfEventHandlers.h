//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventHandlers.h>

@class MTFlexiblePerfEventHandler, MTLoadUrlEventHandler, MTPageRenderEventHandler;

@interface MTPerfEventHandlers : MTEventHandlers
{
    MTFlexiblePerfEventHandler *_flexible;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MTFlexiblePerfEventHandler *flexible; // @synthesize flexible=_flexible;
@property(readonly, nonatomic) MTLoadUrlEventHandler *loadUrl;
@property(readonly, nonatomic) MTPageRenderEventHandler *pageRender;
- (Class)baseDataProviderClass;
- (void)registerDefaultEventHandlers;

@end

