//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSArray, NSNumber, VNRecognizedPointsSpecifier;

@interface VNRecognizedPointsObservation : VNObservation
{
    VNRecognizedPointsSpecifier *_specifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keypointsMultiArrayAndReturnError:(id *)arg1;
- (id)recognizedPointForKey:(id)arg1 error:(id *)arg2;
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id *)arg2;
@property(readonly) NSNumber *groupIdentifier;
@property(readonly, copy) NSArray *availableGroupKeys;
@property(readonly, copy) NSArray *availableKeys;
- (id)initWithRequestRevision:(unsigned long long)arg1 keypointReturningObservation:(id)arg2;

@end

