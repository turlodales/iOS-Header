//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol GGLLayerDelegate
- (void)didUpdateFrameTexture;
- (void)willUpdateFrameTexture;
- (void)didPresent;
- (void)willPresent;
- (void)drawToTexture:(struct Texture *)arg1 withRenderQueue:(struct RenderQueue *)arg2;
- (struct RenderQueue *)renderQueueForTimestamp:(double)arg1;
- (void)prepareTexture:(const shared_ptr_857963ed *)arg1;
- (_Bool)isDelayedRenderQueueConsumptionSupported;
@end

