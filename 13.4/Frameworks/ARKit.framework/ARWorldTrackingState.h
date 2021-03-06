//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ARWorldTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _majorRelocalization;
    _Bool _minorRelocalization;
    _Bool _poseGraphUpdated;
    long long _state;
    long long _reason;
    long long _vioTrackingState;
    double _lastMajorRelocalizationTimestamp;
    double _originTimestamp;
    double _poseTimestamp;
    unsigned long long _currentVIOMapSize;
    unsigned long long _numberOfCameraSwitches;
    unsigned long long _reinitializationAttempts;
    NSArray *_mergedSessionIdentifiers;
    NSArray *_collaborationStats;
    // Error parsing type: {?="columns"[4]}, name: _majorRelocalizationCameraTransform
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *collaborationStats; // @synthesize collaborationStats=_collaborationStats;
@property(retain, nonatomic) NSArray *mergedSessionIdentifiers; // @synthesize mergedSessionIdentifiers=_mergedSessionIdentifiers;
@property(nonatomic) unsigned long long reinitializationAttempts; // @synthesize reinitializationAttempts=_reinitializationAttempts;
@property(nonatomic) unsigned long long numberOfCameraSwitches; // @synthesize numberOfCameraSwitches=_numberOfCameraSwitches;
@property(nonatomic) unsigned long long currentVIOMapSize; // @synthesize currentVIOMapSize=_currentVIOMapSize;
@property(nonatomic) double poseTimestamp; // @synthesize poseTimestamp=_poseTimestamp;
@property(nonatomic) double originTimestamp; // @synthesize originTimestamp=_originTimestamp;
@property(nonatomic) double lastMajorRelocalizationTimestamp; // @synthesize lastMajorRelocalizationTimestamp=_lastMajorRelocalizationTimestamp;
@property(nonatomic) long long vioTrackingState; // @synthesize vioTrackingState=_vioTrackingState;
// Error parsing type for property majorRelocalizationCameraTransform:
// Property attributes: T{?=[4]},N,V_majorRelocalizationCameraTransform

@property(nonatomic) _Bool poseGraphUpdated; // @synthesize poseGraphUpdated=_poseGraphUpdated;
@property(nonatomic) _Bool minorRelocalization; // @synthesize minorRelocalization=_minorRelocalization;
@property(nonatomic) _Bool majorRelocalization; // @synthesize majorRelocalization=_majorRelocalization;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) long long state; // @synthesize state=_state;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

