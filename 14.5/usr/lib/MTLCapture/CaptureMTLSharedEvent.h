//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLSharedEvent-Protocol.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLSharedEvent;

@interface CaptureMTLSharedEvent : NSObject <MTLSharedEvent, CaptureMTLObject>
{
    CaptureMTLDevice *_captureDevice;
    id <MTLSharedEvent> _baseObject;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (void).cxx_destruct;
- (void)dealloc;
@property unsigned long long signaledValue;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)newSharedEventHandle;
@property(readonly) id <MTLSharedEvent> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

