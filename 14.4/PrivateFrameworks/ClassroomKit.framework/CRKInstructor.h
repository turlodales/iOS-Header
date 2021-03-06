//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class DMFControlSessionIdentifier, NSData, NSString;

@interface CRKInstructor : NSObject <NSSecureCoding>
{
    DMFControlSessionIdentifier *_sessionIdentifier;
    NSString *_userIdentifier;
    NSString *_displayName;
    NSString *_courseName;
    NSData *_imageData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToInstructor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

