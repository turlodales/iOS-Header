//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSObject-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface HKConceptIdentifier : NSObject <NSObject, NSCopying, NSSecureCoding>
{
    long long _rawIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)systolicBloodPressure;
+ (id)diastolicBloodPressure;
+ (id)medication;
+ (id)root;
+ (id)inMemoryConceptIdentifier;
+ (id)identifierWithNumber:(id)arg1;
+ (id)identifierWithRawIdentifier:(long long)arg1;
@property(nonatomic) long long rawIdentifier; // @synthesize rawIdentifier=_rawIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *numberRepresentation;
- (id)init;
- (id)initWithRawIdentifier:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

