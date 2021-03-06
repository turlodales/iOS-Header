//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableSet, NSString, PLLibraryServicesManager;
@protocol OS_dispatch_queue, PLUnlocker;

@interface PLMacLibraryOpenClient : NSObject
{
    PLLibraryServicesManager *_libraryServicesManager;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_permissionCheckQueue;
    NSMutableSet *_cachedReadAccessPaths;
    NSMutableSet *_cachedWriteAccessPaths;
    NSFileManager *_fileManager;
    _Bool _isCorruptDB;
    id <PLUnlocker> _bundleUnlocker;
}

- (void).cxx_destruct;
@property(readonly) id <PLUnlocker> bundleUnlocker; // @synthesize bundleUnlocker=_bundleUnlocker;
- (long long)performMigrationWithError:(id *)arg1;
- (id)initWithLibraryServiceManager:(id)arg1 clientIdentifier:(id)arg2;

@end

