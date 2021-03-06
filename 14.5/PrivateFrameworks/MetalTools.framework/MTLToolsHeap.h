//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsResource.h>

#import <MetalTools/MTLHeapSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsHeap : MTLToolsResource <MTLHeapSPI>
{
}

- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)_newToolsTexture:(id)arg1;
- (id)_newToolsBuffer:(id)arg1;
@property(readonly) long long type;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) unsigned long long currentAllocatedSize;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
@property(readonly) unsigned long long usedSize;
- (id)formattedDescription:(unsigned long long)arg1;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(copy) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

