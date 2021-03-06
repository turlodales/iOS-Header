//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaCARendererDelegateInterface-Protocol.h>

@class CALayer, CCVegaAccessibilityHelper, CCVegaRenderer, JSContext, JSManagedValue, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface CCVegaCARenderer : NSObject <CCVegaCARendererDelegateInterface>
{
    CCVegaRenderer *_renderer;
    _Bool _updateFromBackground;
    NSDictionary *_marks;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
    _Bool _initialized;
    double _width;
    double _height;
    struct CGSize _containerSize;
    double _originX;
    double _originY;
    _Bool _dirty;
    _Bool _dirtyAll;
    _Bool _pendingUpdate;
    _Bool _pendingUpdateDirtyAll;
    NSMutableDictionary *_imageCache;
    CCVegaAccessibilityHelper *_accessibilityHelper;
    struct CGPoint _currentTranslate;
    JSContext *context;
    NSString *backgroundColor;
    double pixelRatio;
    double zoomFactor;
    NSArray *accessibilityElements;
    JSManagedValue *scenegraphRoot;
    struct CGSize containerSize;
}

- (void).cxx_destruct;
@property(retain) JSManagedValue *scenegraphRoot; // @synthesize scenegraphRoot;
@property(retain) NSArray *accessibilityElements; // @synthesize accessibilityElements;
@property double zoomFactor; // @synthesize zoomFactor;
@property double pixelRatio; // @synthesize pixelRatio;
@property(retain) NSString *backgroundColor; // @synthesize backgroundColor;
@property __weak JSContext *context; // @synthesize context;
- (void)dealloc;
- (void)invalidateCaches;
- (id)fontOptions;
- (struct CGImage *)newImageFromURL:(id)arg1;
- (struct CGColor *)newColorFromCSSString:(id)arg1 alpha:(double)arg2;
- (struct CGColor *)newColorFromCSSString:(id)arg1;
@property(readonly) struct CGAffineTransform _currentCombinedCTM;
- (id)drawMark:(id)arg1 parentGroup:(id)arg2 item:(id)arg3 into:(id)arg4 dirtyAll:(_Bool)arg5;
- (void)drawMark:(id)arg1 parentGroup:(id)arg2 into:(id)arg3 dirtyAll:(_Bool)arg4;
- (id)compositingFilterForItem:(id)arg1;
- (void)applyClip:(id)arg1 onLayer:(id)arg2;
- (void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4;
- (void)updateCALayers:(id)arg1 dirtyAll:(_Bool)arg2;
- (void)updateCALayers;
- (void)render:(id)arg1;
- (void)callFromJSFunction:(CDUnknownBlockType)arg1;
- (void)dirtyAll;
- (void)dirty;
- (id)marks;
@property struct CGSize containerSize; // @synthesize containerSize;
@property __weak CALayer *rootLayer;
- (id)initWithRenderer:(id)arg1 context:(id)arg2 rootLayer:(id)arg3 updateFromBackground:(_Bool)arg4;

@end

