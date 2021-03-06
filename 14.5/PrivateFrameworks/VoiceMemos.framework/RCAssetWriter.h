//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetWriter.h>

@class AVAssetWriterInput, AVAudioFormat, NSDictionary, NSError, NSMutableArray, NSObject, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface RCAssetWriter : AVAssetWriter
{
    NSDictionary *_settings;
    id _formatDescription;
    AVAssetWriterInput *_input;
    long long _frameCount;
    int _sampleRate;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    NSObject<OS_dispatch_group> *_bufferGroup;
    NSMutableArray *_buffers;
    NSError *_appendError;
    AVAudioFormat *_fileFormat;
    AVAudioFormat *_processingFormat;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) AVAudioFormat *processingFormat; // @synthesize processingFormat=_processingFormat;
@property(readonly, nonatomic) AVAudioFormat *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(readonly, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
- (_Bool)writeFromBuffer:(id)arg1 error:(id *)arg2;
- (void)finishWritingAudioFile:(CDUnknownBlockType)arg1;
- (_Bool)_appendBufferOnQueue:(id)arg1 error:(id *)arg2;
- (_Bool)startWritingAudioFile:(id *)arg1;
- (id)initForWriting:(id)arg1 settings:(id)arg2 error:(id *)arg3;

@end

