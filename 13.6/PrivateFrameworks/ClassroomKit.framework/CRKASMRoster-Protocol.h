//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSArray, NSSet;
@protocol CRKASMOrganization, CRKASMUser;

@protocol CRKASMRoster <NSObject>
@property(readonly, copy, nonatomic) NSSet *allTrustedUserCertificates;
@property(readonly, copy, nonatomic) NSArray *courses;
@property(readonly, nonatomic) id <CRKASMUser> user;
@property(readonly, nonatomic) id <CRKASMOrganization> organization;
@end

