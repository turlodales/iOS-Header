//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <NSCopying>
{
    NSArray *_textLineRects;
    _Bool _appliesShadow;
    _Bool _hidesSourceViewDuringDropAnimation;
    UIBezierPath *_visiblePath;
    UIBezierPath *_shadowPath;
    UIColor *_backgroundColor;
    long long _previewMode;
    double _textPathCornerRadius;
    struct UIEdgeInsets _textPathInsets;
}

- (void).cxx_destruct;
@property(nonatomic, getter=_textPathCornerRadius, setter=_setTextPathCornerRadius:) double textPathCornerRadius; // @synthesize textPathCornerRadius=_textPathCornerRadius;
@property(nonatomic, getter=_textPathInsets, setter=_setTextPathInsets:) struct UIEdgeInsets textPathInsets; // @synthesize textPathInsets=_textPathInsets;
@property(nonatomic) _Bool hidesSourceViewDuringDropAnimation; // @synthesize hidesSourceViewDuringDropAnimation=_hidesSourceViewDuringDropAnimation;
@property(nonatomic) _Bool appliesShadow; // @synthesize appliesShadow=_appliesShadow;
@property(nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode; // @synthesize previewMode=_previewMode;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIBezierPath *shadowPath; // @synthesize shadowPath=_shadowPath;
@property(copy, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property(readonly, nonatomic, getter=_isSingleLineText) _Bool singleLineText;
- (id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;
- (id)initWithTextLineRects:(id)arg1;
- (id)init;

@end

