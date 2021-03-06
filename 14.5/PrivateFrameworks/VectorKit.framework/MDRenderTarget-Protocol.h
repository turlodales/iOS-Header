//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class CALayer;
@protocol GGLRenderQueueSource;

@protocol MDRenderTarget <NSObject>
@property(readonly, nonatomic) struct RenderTarget *linearRenderTarget;
@property(readonly, nonatomic) const struct RenderTargetFormat *linearFormat;
@property(readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) _Bool shouldRasterize;
@property(readonly, nonatomic) struct Renderer *renderer;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
@property(readonly, nonatomic) _Bool supportsFramebufferFetch;
@property(readonly, nonatomic) _Bool multiSample;
@property(nonatomic) id <GGLRenderQueueSource> renderSource;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) double contentScale;
@property(nonatomic) struct CGSize size;
- (shared_ptr_fa6aa836)bitmapData;
- (void)renderWithTimestamp:(double)arg1 completion:(function_d3afe2e2)arg2;
- (_Bool)hasRenderTarget;
- (void)destroyRenderTarget;
- (void)createRenderTarget;

@optional
@property(readonly, nonatomic) float averageFPS;
- (struct DebugConsole *)debugConsoleForId:(int)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(CALayer *)arg2;
- (void)didDrawView;
- (void)willDrawView;
@end

