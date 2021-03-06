//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/NSCopying-Protocol.h>
#import <ContactsUICore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isUnreachable;
    _Bool _isProposed;
    _Bool _hasBeenPersisted;
    NSString *_contactIdentifier;
    NSString *_formattedName;
    NSData *_imageData;
    long long _contactType;
    long long _whitelistStatus;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasBeenPersisted; // @synthesize hasBeenPersisted=_hasBeenPersisted;
@property(readonly, nonatomic) long long whitelistStatus; // @synthesize whitelistStatus=_whitelistStatus;
@property(readonly, nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property(readonly, nonatomic) _Bool isProposed; // @synthesize isProposed=_isProposed;
@property(readonly, nonatomic) _Bool isUnreachable; // @synthesize isUnreachable=_isUnreachable;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *formattedName; // @synthesize formattedName=_formattedName;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 formattedName:(id)arg2 imageData:(id)arg3 isUnreachable:(_Bool)arg4 isProposed:(_Bool)arg5 contactType:(long long)arg6 whitelistStatus:(long long)arg7 hasBeenPersisted:(_Bool)arg8;
- (id)initWithContactIdentifier:(id)arg1;
- (id)init;

@end

