//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosFormats/NSObject-Protocol.h>

@class PFRWSampleBufferChannel;

@protocol PFRWSampleBufferChannelDelegate <NSObject>

@optional
- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer *)arg3;
- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@end

