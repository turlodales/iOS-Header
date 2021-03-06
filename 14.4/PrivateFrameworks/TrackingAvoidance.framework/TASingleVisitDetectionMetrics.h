//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class TAInterVisitMetricPerDevice;

@interface TASingleVisitDetectionMetrics : NSObject <NSSecureCoding>
{
    TAInterVisitMetricPerDevice *_interVisitMetrics;
    unsigned long long _loiType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long loiType; // @synthesize loiType=_loiType;
@property(readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics; // @synthesize interVisitMetrics=_interVisitMetrics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2;

@end

