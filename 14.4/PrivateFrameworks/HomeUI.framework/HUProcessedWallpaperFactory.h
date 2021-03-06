//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFProcessedWallpaperSource-Protocol.h>

@class NSArray, NSString;

@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>
{
}

+ (id)_defaultBackdropSettings;
- (id)_imageByApplyingLayerEffects:(id)arg1 toImage:(id)arg2;
- (id)_layerWithCompositingFilterType:(id)arg1 color:(id)arg2;
- (id)_lightContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentDarkModeBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_processedImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_croppedImageFromWallpaper:(id)arg1 image:(id)arg2;
- (struct CGRect)_scaledCropRectForBounds:(struct CGRect)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
@property(readonly, nonatomic) unsigned long long processVersionNumber;
@property(readonly, copy, nonatomic) NSArray *supportedVariants;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

