//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString, NSUUID;

@interface HMPerson : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSString *_name;
    NSSet *_personLinks;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSSet *personLinks; // @synthesize personLinks=_personLinks;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

