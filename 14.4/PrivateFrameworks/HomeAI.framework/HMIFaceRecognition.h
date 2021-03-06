//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMIFaceCrop, HMIFaceprint, NSSet, NSString;

@interface HMIFaceRecognition : HMFObject <HMFLogging, NSSecureCoding>
{
    HMIFaceCrop *_faceCrop;
    HMIFaceprint *_faceprint;
    NSSet *_classifications;
    double _faceQualityScore;
    NSSet *_predictedLinkedEntityUUIDs;
    long long _sessionEntityAssignment;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) long long sessionEntityAssignment; // @synthesize sessionEntityAssignment=_sessionEntityAssignment;
@property(readonly) NSSet *predictedLinkedEntityUUIDs; // @synthesize predictedLinkedEntityUUIDs=_predictedLinkedEntityUUIDs;
@property(readonly) double faceQualityScore; // @synthesize faceQualityScore=_faceQualityScore;
@property(readonly) NSSet *classifications; // @synthesize classifications=_classifications;
@property(readonly) HMIFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property(readonly) HMIFaceCrop *faceCrop; // @synthesize faceCrop=_faceCrop;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
@property(readonly, copy) NSString *description;
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 faceQualityScore:(double)arg5 sessionEntityAssignment:(long long)arg6;
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4;
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

