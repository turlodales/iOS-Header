//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDDrawableLayout.h>

@interface TSDStyledLayout : TSDDrawableLayout
{
    _Bool mIsUpdatingOpacity;
    double mDynamicOpacity;
}

- (void)dynamicOpacityChangeDidEnd;
- (void)dynamicOpacityUpdateToValue:(double)arg1;
- (void)dynamicOpacityChangeDidBegin;
- (_Bool)canFlip;
- (_Bool)isInvisible;
@property(readonly, nonatomic) double opacity;
- (struct CGRect)frameForCulling;
- (struct CGRect)reflectionFrameForSubRect:(struct CGRect)arg1;
- (struct CGRect)reflectionFrameInRoot;
- (struct CGRect)reflectionFrame;
- (struct CGRect)i_baseFrame;
- (struct CGRect)reflectionBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)shadowedNaturalBoundsWithoutOffset;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (id)styledInfo;

@end

