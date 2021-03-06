//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaCGContextInterface-Protocol.h>

@class CCVegaJSFont, CCVegaRenderer, JSValue, NSString;

@interface CCVegaCGContext : NSObject <CCVegaCGContextInterface>
{
    JSValue *_fillStyle;
    double _globalAlpha;
    NSString *_lineCap;
    NSString *_lineJoin;
    double _lineWidth;
    double _miterLimit;
    NSString *_strokeStyle;
    NSString *_textAlign;
    struct CGAffineTransform _currentTransform;
    double _lineDashOffset;
    NSString *_font;
    NSString *_globalCompositeOperation;
    struct CGContext *_bitmapContext;
    double _width;
    double _height;
    CCVegaJSFont *_internalFont;
    CCVegaRenderer *renderer;
    double pixelRatio;
}

+ (struct CGAffineTransform)flipYAxisWithHeight:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) double pixelRatio; // @synthesize pixelRatio;
@property(nonatomic) __weak CCVegaRenderer *renderer; // @synthesize renderer;
- (id)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (void)fill;
- (void)clip;
- (void)setLineDashWithSegments:(id)arg1;
@property double lineDashOffset;
- (void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)textWithString:(id)arg1 x:(double)arg2 y:(double)arg3 drawingMode:(int)arg4;
- (void)fillTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)strokeTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)stroke;
- (void)lineToX:(double)arg1 y:(double)arg2;
- (void)moveToX:(double)arg1 y:(double)arg2;
- (void)quadraticCurveToCP1x:(double)arg1 cp1y:(double)arg2 x:(double)arg3 y:(double)arg4;
- (void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
- (void)closePath;
- (void)beginPath;
- (void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(_Bool)arg6;
- (void)translateWithX:(double)arg1 y:(double)arg2;
- (void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4;
- (void)save;
- (void)restore;
- (void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
- (void)rotateWithAngle:(double)arg1;
- (id)measureText:(id)arg1;
@property(retain) NSString *textAlign;
@property(retain) NSString *strokeStyle;
- (struct CGColor *)newColorFromString:(id)arg1;
- (_Bool)isPointInPathWithX:(double)arg1 y:(double)arg2;
@property double miterLimit;
@property double lineWidth;
@property(retain) NSString *lineJoin;
@property(retain) NSString *lineCap;
@property(retain) NSString *globalCompositeOperation;
@property double globalAlpha;
@property(retain) NSString *font;
@property(retain) JSValue *fillStyle;
- (void)dealloc;
- (id)init;
@property double height;
@property double width;
- (void)resizeBitmapContext;
- (void)invalidateBitmapContext;
@property(readonly) struct CGContext *context;

@end

