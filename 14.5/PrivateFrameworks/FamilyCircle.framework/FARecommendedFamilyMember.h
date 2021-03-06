//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding>
{
    NSString *_handle;
    NSString *_displayName;
    CNContact *_contact;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_safeClasses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRecommendation:(id)arg1;

@end

