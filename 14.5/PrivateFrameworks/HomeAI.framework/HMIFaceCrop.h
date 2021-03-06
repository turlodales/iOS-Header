//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSUUID;

@interface HMIFaceCrop : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSData *_dataRepresentation;
    NSDate *_dateCreated;
    struct CGRect _faceBoundingBox;
}

+ (_Bool)supportsSecureCoding;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;
+ (struct CGRect)faceBoxFromPhotosFaceCropImageData:(id)arg1;
+ (id)faceCropFromPhotosFaceCropImageData:(id)arg1;
- (void).cxx_destruct;
@property(readonly) struct CGRect faceBoundingBox; // @synthesize faceBoundingBox=_faceBoundingBox;
@property(readonly, copy) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(struct CGRect)arg4;

@end

