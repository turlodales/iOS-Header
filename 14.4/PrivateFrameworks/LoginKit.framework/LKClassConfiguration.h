//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/LKClassConfigurationProviding-Protocol.h>
#import <LoginKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface LKClassConfiguration : NSObject <LKClassConfigurationProviding, NSSecureCoding>
{
    NSString *_schoolName;
    NSArray *_classes;
    NSArray *_students;
    NSData *_payloadCertificatePersistentID;
    NSArray *_classGroups;
    NSArray *_instructors;
    NSMutableDictionary *_classesByClassID;
    NSMutableDictionary *_usersWithAppleIDByIdentifier;
    NSMutableDictionary *_usersByUsername;
    NSMutableDictionary *_classesByClassGroupName;
    NSDictionary *_classRosterInformationDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDictionary *classRosterInformationDictionary; // @synthesize classRosterInformationDictionary=_classRosterInformationDictionary;
@property(retain) NSMutableDictionary *classesByClassGroupName; // @synthesize classesByClassGroupName=_classesByClassGroupName;
@property(retain) NSMutableDictionary *usersByUsername; // @synthesize usersByUsername=_usersByUsername;
@property(retain) NSMutableDictionary *usersWithAppleIDByIdentifier; // @synthesize usersWithAppleIDByIdentifier=_usersWithAppleIDByIdentifier;
@property(retain) NSMutableDictionary *classesByClassID; // @synthesize classesByClassID=_classesByClassID;
@property(readonly, nonatomic) NSArray *instructors; // @synthesize instructors=_instructors;
@property(retain, nonatomic) NSArray *classGroups; // @synthesize classGroups=_classGroups;
@property(readonly, nonatomic) NSData *payloadCertificatePersistentID; // @synthesize payloadCertificatePersistentID=_payloadCertificatePersistentID;
@property(copy, nonatomic) NSArray *students; // @synthesize students=_students;
@property(readonly, copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
@property(readonly, copy, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
- (id)classesByClassGroupNameDictionary;
- (id)studentForUsername:(id)arg1;
- (id)studentForUsername:(id)arg1 inClass:(id)arg2;
- (id)studentForStudentIdentifier:(id)arg1;
- (id)studentForStudentIdentifier:(id)arg1 inClass:(id)arg2;
- (id)classInfoForClassID:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

