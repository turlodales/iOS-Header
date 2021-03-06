//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;
@protocol OS_dispatch_queue;

@interface ACXStreamingZipSocketSender : NSObject
{
    _Bool _stopWriting;
    CDUnknownBlockType _progressBlock;
    long long _bytesOutput;
    long long _totalBytes;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSURL *_url;
    NSError *_error;
    CDUnknownBlockType _writerBlock;
    long long _completedBytes;
}

+ (id)senderForURL:(id)arg1 queue:(id)arg2 writingUsingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long completedBytes; // @synthesize completedBytes=_completedBytes;
@property(readonly, nonatomic) CDUnknownBlockType writerBlock; // @synthesize writerBlock=_writerBlock;
@property _Bool stopWriting; // @synthesize stopWriting=_stopWriting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) long long bytesOutput; // @synthesize bytesOutput=_bytesOutput;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void)cancelSending;
- (void)beginSendingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 queue:(id)arg2 writerBlock:(CDUnknownBlockType)arg3;

@end

