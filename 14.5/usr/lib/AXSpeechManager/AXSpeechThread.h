//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSPort, NSRunLoop;

@interface AXSpeechThread : NSThread
{
    NSPort *_machPort;
    NSRunLoop *_threadRunLoop;
}

- (void).cxx_destruct;
- (void)stop;
- (void)cancel;
- (void)main;
- (id)init;

@end

