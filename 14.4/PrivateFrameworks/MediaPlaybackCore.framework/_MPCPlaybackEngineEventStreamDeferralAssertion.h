//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventStreamDeferralAssertion-Protocol.h>

@class MPCPlaybackEngineEventStream, NSString;

@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject <MPCPlaybackEngineEventStreamDeferralAssertion>
{
    MPCPlaybackEngineEventStream *_eventStream;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) __weak MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithEventStream:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

