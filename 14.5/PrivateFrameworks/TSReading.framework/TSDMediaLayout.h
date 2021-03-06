//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout
{
    struct CGRect mCachedAlignmentFrame;
    struct {
        unsigned int alignmentFrame:1;
    } mMediaInvalidFlags;
    TSDMutableStroke *mDynamicStroke;
    _Bool mShouldRenderFrameStroke;
    struct CGRect mBoundsForStandardKnobs;
}

- (void)invalidateAlignmentFrame;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)alignmentFrame;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (void)setGeometry:(id)arg1;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
- (id)stroke;
- (_Bool)isStrokeBeingManipulated;
- (id)mediaInfo;
- (id)initWithInfo:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (_Bool)supportsRotation;
@property(nonatomic) _Bool shouldRenderFrameStroke;
@property(nonatomic) struct CGRect boundsForStandardKnobs;

@end

