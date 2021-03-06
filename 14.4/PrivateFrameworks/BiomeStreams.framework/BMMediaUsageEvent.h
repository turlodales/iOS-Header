//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiomeStreams/BMEventBase.h>

#import <BiomeStreams/BMEventAppAssociating-Protocol.h>
#import <BiomeStreams/BMEventBinaryStepping-Protocol.h>
#import <BiomeStreams/BMEventTimeElapsing-Protocol.h>

@class NSDateInterval, NSString, NSURL;

@interface BMMediaUsageEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating>
{
    _Bool _usageTrusted;
    NSURL *_URL;
    NSURL *_mediaURL;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isUsageTrusted) _Bool usageTrusted; // @synthesize usageTrusted=_usageTrusted;
@property(copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy) NSString *description;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;
- (id)initWithBegin:(_Bool)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 usageTrusted:(_Bool)arg5 timestamp:(id)arg6;
- (id)initWithBegin:(_Bool)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 timestamp:(id)arg5;
- (id)init;

// Remaining properties
@property(nonatomic) double absoluteTimestamp;
@property(copy, nonatomic) NSString *bundleID;
@property(copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) double duration;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isStarting) _Bool starting;
@property(readonly) Class superclass;

@end

