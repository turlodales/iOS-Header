//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, SSEnvironmentDescription;

@interface SSSScreenshotModificationInfo : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    SSEnvironmentDescription *_environmentDescription;
    struct SSSCropInfo _cropInfo;
    NSArray *_annotationNSDatas;
    double _vellumOpacity;
    NSArray *_originalAnnotations;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *originalAnnotations; // @synthesize originalAnnotations=_originalAnnotations;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) double vellumOpacity;
- (id)annotationNSDatas;
@property(readonly, nonatomic) NSArray *annotations;
@property(readonly, nonatomic) struct SSSCropInfo cropInfo;
- (id)initForScreenshotWithEnvironmentDescription:(id)arg1;

@end

