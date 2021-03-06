//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLParallelRenderCommandEncoder.h>

#import <MTLSimDriver/MTLParallelRenderCommandEncoderSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSerializerParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI>
{
    unsigned long long _encodersSize;
    unsigned long long _encodersCount;
    id *_encoders;
    _Bool separateCommits;
}

@property _Bool separateCommits; // @synthesize separateCommits;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)endEncoding;
- (void)dealloc;
- (id)renderCommandEncoder;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

