//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AttentionAwareness/AWAttentionEvent.h>

#import <AttentionAwareness/NSSecureCoding-Protocol.h>

@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding>
{
    long long _usagePage;
    long long _usage;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) long long usagePage; // @synthesize usagePage=_usagePage;
- (id)description;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(struct AWRemoteMetadata *)arg3;
- (void)validateMask;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

