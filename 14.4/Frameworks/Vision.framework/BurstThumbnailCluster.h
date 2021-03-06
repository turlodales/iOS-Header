//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BurstThumbnailCluster : NSObject
{
    struct __CVBuffer *_imagePixelBuffer;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_burstImages;
    NSMutableDictionary *_imageProps;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *imageProps; // @synthesize imageProps=_imageProps;
@property(retain) NSMutableArray *burstImages; // @synthesize burstImages=_burstImages;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property struct __CVBuffer *imagePixelBuffer; // @synthesize imagePixelBuffer=_imagePixelBuffer;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;
- (void)addItemsFromCluster:(id)arg1;
- (void)dealloc;
- (id)initWithImageData:(struct __CVBuffer *)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

