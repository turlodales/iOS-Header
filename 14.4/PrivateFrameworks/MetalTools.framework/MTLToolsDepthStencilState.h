//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLDepthStencilStateSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>
{
}

@property(readonly) _Bool writesStencil;
@property(readonly) _Bool readsStencil;
@property(readonly) _Bool writesDepth;
@property(readonly) _Bool readsDepth;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

