//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/CALayerDelegate-Protocol.h>
#import <PhotosUICore/PXMutableCALayerPromise-Protocol.h>

@class CALayer, NSString;

@interface PXCALayerPromise : PXObservable <PXMutableCALayerPromise, CALayerDelegate>
{
    _Bool _startedLayerRealization;
    _Bool _rendersAsynchronously;
    _Bool _shouldCancel;
    double _contentsScale;
    CALayer *_layer;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic, setter=_setLayer:) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) _Bool rendersAsynchronously; // @synthesize rendersAsynchronously=_rendersAsynchronously;
@property(readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)invalidateLayer;
- (void)setRendersAsynchronously:(_Bool)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)drawLayerContentInContext:(struct CGContext *)arg1;
- (id)createCustomLayer;
- (void)cancelLayerRealization;
- (void)_handlePreparedLayer:(id)arg1;
- (void)_realizeLayer;
- (void)startLayerRealization;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

