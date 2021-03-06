//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface PKSharedAccountCloudStoreZone : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_zoneName;
    NSString *_accountIdentifier;
    unsigned long long _accountType;
    unsigned long long _access;
    unsigned long long _mode;
    NSString *_originatorAltDSID;
    NSSet *_sharedUsersAltDSIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *sharedUsersAltDSIDs; // @synthesize sharedUsersAltDSIDs=_sharedUsersAltDSIDs;
@property(copy, nonatomic) NSString *originatorAltDSID; // @synthesize originatorAltDSID=_originatorAltDSID;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long access; // @synthesize access=_access;
@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToSharedAccountCloudStoreZone:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)zoneType;
- (id)initWithDictionary:(id)arg1;

@end

