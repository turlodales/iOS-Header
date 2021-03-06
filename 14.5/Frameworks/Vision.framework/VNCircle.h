//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class VNPoint;

@interface VNCircle : NSObject <NSCopying, NSSecureCoding>
{
    VNPoint *_center;
    double _radius;
}

+ (id)zeroCircle;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) double radius; // @synthesize radius=_radius;
@property(readonly) VNPoint *center; // @synthesize center=_center;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)containsPoint:(id)arg1 inCircumferentialRingOfWidth:(double)arg2;
- (_Bool)containsPoint:(id)arg1;
@property(readonly) double diameter;
- (id)initWithCenter:(id)arg1 diameter:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCenter:(id)arg1 radius:(double)arg2;
- (id)init;

@end

