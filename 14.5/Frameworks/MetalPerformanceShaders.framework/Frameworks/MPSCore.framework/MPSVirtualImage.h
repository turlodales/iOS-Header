//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSImage.h>

@protocol MTLTexture;

@interface MPSVirtualImage : MPSImage
{
}

- (void)synchronizeOnCommandBuffer:(id)arg1;
@property(readonly, nonatomic) id <MTLTexture> texture;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_328d5c87)arg5 imageIndex:(unsigned long long)arg6;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_328d5c87)arg5 imageIndex:(unsigned long long)arg6;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2;

@end

