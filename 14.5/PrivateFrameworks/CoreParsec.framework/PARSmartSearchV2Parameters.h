//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@interface PARSmartSearchV2Parameters : NSObject <NSSecureCoding>
{
    _Bool _enabled;
    _Bool _enableCount;
    double _paramA;
    double _paramB;
    double _paramC;
    double _paramK;
    double _paramM;
    double _paramQ;
    double _paramV;
    double _windowBucket;
    long long _minCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long minCount; // @synthesize minCount=_minCount;
@property(readonly, nonatomic) double windowBucket; // @synthesize windowBucket=_windowBucket;
@property(readonly, nonatomic) double paramV; // @synthesize paramV=_paramV;
@property(readonly, nonatomic) double paramQ; // @synthesize paramQ=_paramQ;
@property(readonly, nonatomic) double paramM; // @synthesize paramM=_paramM;
@property(readonly, nonatomic) double paramK; // @synthesize paramK=_paramK;
@property(readonly, nonatomic) double paramC; // @synthesize paramC=_paramC;
@property(readonly, nonatomic) double paramB; // @synthesize paramB=_paramB;
@property(readonly, nonatomic) double paramA; // @synthesize paramA=_paramA;
@property(readonly, nonatomic) _Bool enableCount; // @synthesize enableCount=_enableCount;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromBag:(id)arg1;
- (id)init;
- (id)initFromEnabled:(_Bool)arg1 enableCount:(_Bool)arg2 minCount:(long long)arg3;

@end

