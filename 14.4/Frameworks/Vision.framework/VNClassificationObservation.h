//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSString;
@protocol VNOperationPointsProviding;

@interface VNClassificationObservation : VNObservation
{
    NSString *_identifier;
    id <VNOperationPointsProviding> _operationPointsProvider;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)operationPointsAndReturnError:(id *)arg1;
- (_Bool)hasMinimumPrecision:(float)arg1 forRecall:(float)arg2;
- (_Bool)hasMinimumRecall:(float)arg1 forPrecision:(float)arg2;
- (_Bool)hasPrecisionRecallCurve;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 operationPointsProvider:(id)arg4;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3;

@end

