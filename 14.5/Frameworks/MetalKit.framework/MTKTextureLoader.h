//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLDeviceSPI, OS_dispatch_queue, OS_dispatch_semaphore, TXRBufferAllocator;

@interface MTKTextureLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSObject<OS_dispatch_semaphore> *_loadSemaphore;
    id <MTLCommandQueue> _blitQueue;
    id <TXRBufferAllocator> _bufferAllocator;
    id <MTLDeviceSPI> _device;
}

- (id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_newSyncTexturesFromTXRTextures:(id)arg1 labels:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)newTextureFromTXRTexture:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newTexturesFromTXRTextures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_newAsyncTextureWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)newUploaderForOptions:(id)arg1;
- (_Bool)validateGenerateMipmapsForPixelFormat:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_loadMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_loadCGImage:(struct CGImage *)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_loadData:(id)arg1 options:(id)arg2 uploader:(id)arg3 label:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_loadData:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)_determineFileType:(id)arg1;
- (id)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newTextureWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newTextureWithData:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
@property(readonly, nonatomic) id <MTLDevice> device;
- (id)initWithDevice:(id)arg1;

@end

