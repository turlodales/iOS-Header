//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKASMCourseCreateProperties, CRKASMCourseUpdateProperties, DMFControlGroupIdentifier, NSArray, NSSet, NSString;
@protocol CRKASMRoster, CRKASMUserDirectory, CRKASMUserFetching;

@protocol CRKASMRosterProviding <NSObject>
@property(readonly, copy, nonatomic) NSArray *locationsWithManagePermissions;
@property(readonly, nonatomic) id <CRKASMUserFetching> userFetcher;
@property(readonly, nonatomic, getter=isPopulated) _Bool populated;
@property(readonly, nonatomic) id <CRKASMRoster> roster;
- (void)updateCourseWithIdentifier:(DMFControlGroupIdentifier *)arg1 properties:(CRKASMCourseUpdateProperties *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeCourseWithIdentifier:(DMFControlGroupIdentifier *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createCourseWithProperties:(CRKASMCourseCreateProperties *)arg1 completion:(void (^)(NSError *))arg2;
- (_Bool)ingestCertificates:(NSSet *)arg1 forTrustedUserIdentifier:(NSString *)arg2 error:(id *)arg3;
- (void)refresh;
- (id <CRKASMUserDirectory>)instructorDirectoryForLocationIDs:(NSArray *)arg1;
- (id <CRKASMUserDirectory>)studentDirectoryForLocationIDs:(NSArray *)arg1;
@end

