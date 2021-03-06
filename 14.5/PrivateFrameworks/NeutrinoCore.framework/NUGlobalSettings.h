//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NUGlobalSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

+ (void)setDisableMeteorGainMapGeneration:(_Bool)arg1;
+ (_Bool)disableMeteorGainMapGeneration;
+ (void)setAlwaysRequireHardwareVideoEncoder:(_Bool)arg1;
+ (_Bool)alwaysRequireHardwareVideoEncoder;
+ (void)setVideoCompositorDebugMode:(unsigned long long)arg1;
+ (unsigned long long)videoCompositorDebugMode;
+ (void)setDisablePacked10BitPixelFormats:(_Bool)arg1;
+ (_Bool)disablePacked10BitPixelFormats;
+ (double)HLGOpticalScale;
+ (void)setAllAssetsCanUseHDRPipeline:(_Bool)arg1;
+ (_Bool)allAssetsCanUseHDRPipeline;
+ (void)setEnableHDRSupport:(_Bool)arg1;
+ (_Bool)enableHDRSupport;
+ (void)setDisableIOSurfacePortaitExport:(_Bool)arg1;
+ (_Bool)disableIOSurfacePortaitExport;
+ (void)setRunNeutrinoSynchronously:(_Bool)arg1;
+ (_Bool)runNeutrinoSynchronously;
+ (void)setTileAssemblyCABased:(_Bool)arg1;
+ (_Bool)tileAssemblyCABased;
+ (void)setLogPeakRenderCIUsuage:(_Bool)arg1;
+ (_Bool)logPeakRenderCIUsuage;
+ (void)setUpCacheNodeDirectoryWithComponent:(id)arg1;
+ (void)setRenderTransparencyOpaque:(_Bool)arg1;
+ (_Bool)renderTransparencyOpaque;
+ (void)setRenderTransparencyOverBlack:(_Bool)arg1;
+ (_Bool)renderTransparencyOverBlack;
+ (void)setDisplayDisableColorMatching:(_Bool)arg1;
+ (_Bool)displayDisableColorMatching;
+ (void)setDisplayForceDeepColor:(_Bool)arg1;
+ (_Bool)displayForceDeepColor;
+ (void)setDisplayDisableDeepColor:(_Bool)arg1;
+ (_Bool)displayDisableDeepColor;
+ (void)setImageLayerDebug:(_Bool)arg1;
+ (_Bool)imageLayerDebug;
+ (void)setPipelineSourceURL:(id)arg1;
+ (id)pipelineSourceURL;
+ (void)setPlatformHasWideColor:(_Bool)arg1;
+ (_Bool)platformHasWideColor;
+ (void)setRenderVideoLive:(_Bool)arg1;
+ (_Bool)renderVideoLive;
+ (void)setCacheNodeDirectoryURL:(id)arg1;
+ (id)cacheNodeDirectoryURL;
+ (void)setViewDebugEnabled:(_Bool)arg1;
+ (_Bool)isViewDebugEnabled;
+ (void)setCacheNodeImageCompression:(double)arg1;
+ (double)cacheNodeImageCompression;
+ (void)setCacheNodeFilePermissions:(long long)arg1;
+ (long long)cacheNodeFilePermissions;
+ (void)setCacheNodeCacheSizeLimit:(long long)arg1;
+ (long long)cacheNodeCacheSizeLimit;
+ (void)setImageSourceDisableCacheImmediately:(_Bool)arg1;
+ (_Bool)imageSourceDisableCacheImmediately;
+ (void)setImageSourceDisableRAW:(_Bool)arg1;
+ (_Bool)imageSourceDisableRAW;
+ (void)setImageTileBorder:(long long)arg1;
+ (long long)imageTileBorder;
+ (void)setImageTileSize:(long long)arg1;
+ (long long)imageTileSize;
+ (void)setRendererUseP3Linear:(_Bool)arg1;
+ (_Bool)rendererUseP3Linear;
+ (void)setRendererClampToAlpha:(_Bool)arg1;
+ (_Bool)rendererClampToAlpha;
+ (void)setRendererUseHalfFloat:(_Bool)arg1;
+ (_Bool)rendererUseHalfFloat;
+ (void)setRenderJSPipelineTimeout:(double)arg1;
+ (double)renderJSPipelineTimeout;
+ (void)setImageRenderJobUseTextureRenderer:(_Bool)arg1;
+ (_Bool)imageRenderJobUseTextureRenderer;
+ (void)setImageRenderJobUseSurfaceRenderer:(_Bool)arg1;
+ (_Bool)imageRenderJobUseSurfaceRenderer;
+ (void)setBufferStorageFactoryUsePool:(_Bool)arg1;
+ (_Bool)bufferStorageFactoryUsePool;
+ (void)setSurfaceStorageFactoryUsePool:(_Bool)arg1;
+ (_Bool)surfaceStorageFactoryUsePool;
+ (void)setStoragePoolMigrationDelay:(double)arg1;
+ (double)storagePoolMigrationDelay;
+ (void)setStoragePoolPurgeableLimit:(long long)arg1;
+ (long long)storagePoolPurgeableLimit;
+ (void)setStoragePoolNonPurgeableLimit:(long long)arg1;
+ (long long)storagePoolNonPurgeableLimit;
+ (void)setDeviceDefaultSampleMode:(long long)arg1;
+ (long long)deviceDefaultSampleMode;
+ (void)setDevicePrintRenderer:(_Bool)arg1;
+ (_Bool)devicePrintRenderer;
+ (_Bool)deviceDisableOpenGL;
+ (_Bool)deviceDisableMetal;
+ (void)reset;
+ (id)globalSettings;
- (void).cxx_destruct;
- (id)urlSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)stringSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (double)doubleSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (long long)integerSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (_Bool)boolSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)_settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)init;

@end

