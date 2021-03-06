//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob
{
    NSArray *_albumCloudGUIDsToDelete;
    NSString *_inviterAddress;
}

+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2;
+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *inviterAddress; // @synthesize inviterAddress=_inviterAddress;
@property(retain, nonatomic) NSArray *albumCloudGUIDsToDelete; // @synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

