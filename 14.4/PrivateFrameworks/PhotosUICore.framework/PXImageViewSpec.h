//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class NSArray;

@interface PXImageViewSpec : PXViewSpec
{
    _Bool _shouldEnableFocus;
    NSArray *_overlaySpecs;
    long long _roundedCornersMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long roundedCornersMode; // @synthesize roundedCornersMode=_roundedCornersMode;
@property(nonatomic) _Bool shouldEnableFocus; // @synthesize shouldEnableFocus=_shouldEnableFocus;
@property(copy, nonatomic) NSArray *overlaySpecs; // @synthesize overlaySpecs=_overlaySpecs;
@property(readonly, nonatomic) double focusedSizeIncrease;
@property(readonly, nonatomic) struct CGSize floatingUnfocusedShadowExpansion;
@property(readonly, nonatomic) double floatingUnfocusedShadowVerticalOffset;
@property(readonly, nonatomic) double floatingShadowRadius;
@property(readonly, nonatomic) double floatingUnfocusedShadowRadius;
@property(readonly, nonatomic) double floatingShadowOpacity;
@property(readonly, nonatomic) double floatingUnfocusedShadowOpacity;
@property(readonly, nonatomic) struct CGPoint floatingContentMotionTranslation;
@property(readonly, nonatomic) struct CGPoint floatingContentMotionRotation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

