//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SVXSession;

__attribute__((visibility("hidden")))
@interface SVXSessionIdleAssertion : NSObject
{
    unsigned long long _timestamp;
    SVXSession *_session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SVXSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (id)initWithTimestamp:(unsigned long long)arg1 session:(id)arg2;

@end

