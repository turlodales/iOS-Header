//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, PXGImageTexture, PXGPayloadTexture;
@protocol NSCopying, OS_dispatch_queue, PXGTextureAtlasManager;

@protocol PXGTextureConverter <NSObject>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property(readonly, nonatomic) _Bool supportsTextureAtlas;
@property(readonly, nonatomic) PXGImageTexture *transparentTexture;
@property(nonatomic) _Bool lowMemoryMode;
@property(readonly, nonatomic) int presentationType;
- (PXGImageTexture *)createAtlasForTextureAtlasManager:(id <PXGTextureAtlasManager>)arg1;
- (id <PXGTextureAtlasManager>)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
- (PXGPayloadTexture *)createPayloadTextureFromPayload:(id <NSCopying>)arg1;
- (PXGImageTexture *)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (PXGImageTexture *)createTextureFromCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
@end

