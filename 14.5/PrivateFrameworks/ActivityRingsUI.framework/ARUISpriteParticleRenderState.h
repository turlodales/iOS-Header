//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIPrecompiledRendering-Protocol.h>
#import <ActivityRingsUI/ARUIRendering-Protocol.h>

@class NSString;
@protocol MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface ARUISpriteParticleRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering>
{
    id <MTLRenderPipelineState> _renderPipelineState;
}

- (void).cxx_destruct;
- (id)name;
- (id)initWithPipelineLibrary:(id)arg1;
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

