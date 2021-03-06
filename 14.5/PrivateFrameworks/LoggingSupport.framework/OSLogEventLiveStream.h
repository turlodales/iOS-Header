//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSLogEventStreamBase.h>

@class NSObject, OSLogEventLiveSource, _OSLogStreamFilter;
@protocol OS_xpc_object;

@interface OSLogEventLiveStream : OSLogEventStreamBase
{
    _OSLogStreamFilter *_streamFilter;
    unsigned long long _reason;
    NSObject<OS_xpc_object> *_diagdconn;
    OSLogEventLiveSource *_source;
    CDUnknownBlockType _dropnoteHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dropnoteHandler; // @synthesize dropnoteHandler=_dropnoteHandler;
@property(readonly, nonatomic) OSLogEventLiveSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSObject<OS_xpc_object> *diagdconn; // @synthesize diagdconn=_diagdconn;
- (void)invalidate;
- (void)activate;
- (void)_activateLiveStream;
- (void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2;
- (void)setFilterPredicate:(id)arg1;
- (void)setDroppedEventHandler:(CDUnknownBlockType)arg1;
- (id)initWithLiveSource:(id)arg1;

@end

