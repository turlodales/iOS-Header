//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDLayout.h>

#import <TSDrawables/TSDWrappable-Protocol.h>

@class NSString, TSDLayoutGeometry, TSDWrapSegments, TSUBezierPath;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable>
{
    TSUBezierPath *mCachedWrapPath;
    TSDWrapSegments *mCachedWrapSegments;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    TSUBezierPath *mCachedExteriorWrapPath;
}

- (_Bool)supportsInspectorPositioning;
- (void)invalidateParentForWrap;
- (void)i_invalidateWrap;
- (_Bool)allowsConnections;
- (void)parentDidChange;
- (void)processChangedProperty:(int)arg1;
@property(copy, nonatomic) TSDLayoutGeometry *geometry;
- (void)dragBy:(struct CGPoint)arg1;
- (void)inRootGeometryChangedBy:(struct CGAffineTransform)arg1;
- (void)invalidateInRootGeometry;
- (void)invalidateExteriorWrap;
- (void)invalidate;
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (id)wrapSegments;
- (id)wrapPath;
- (id)p_exteriorTextWrapPath;
- (id)pathForClippingConnectionLines;
- (id)i_wrapPath;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

