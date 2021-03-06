//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPSpotlightCollectorDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FPSpotlightCollectorManager : NSObject <FPSpotlightCollectorDelegate>
{
    _Bool _areMountQueriesEnabled;
    id _providerDomainChangesToken;
    NSSet *_currentMountPoints;
    NSMutableDictionary *_collectorByDescriptor;
}

+ (id)_mountPointsFromProviderDomains:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property _Bool areMountQueriesEnabled; // @synthesize areMountQueriesEnabled=_areMountQueriesEnabled;
@property(retain) NSMutableDictionary *collectorByDescriptor; // @synthesize collectorByDescriptor=_collectorByDescriptor;
@property(retain) NSSet *currentMountPoints; // @synthesize currentMountPoints=_currentMountPoints;
@property(retain) id providerDomainChangesToken; // @synthesize providerDomainChangesToken=_providerDomainChangesToken;
- (id)_recursiveDescription;
- (void)_observeFileProviderDomains;
- (void)collectorDidFinish:(id)arg1;
- (id)mountPointsForCollector:(id)arg1;
- (void)disableMountPointQueries;
- (void)enableMountPointQueries;
- (void)resumeCollectors;
- (void)suspendCollectors;
- (void)unregisterDataSource:(id)arg1;
- (void)registerDataSource:(id)arg1;
- (void)dealloc;
@property(readonly) NSSet *effectiveCurrentMountPoints;
@property(readonly, nonatomic) NSArray *collectors;
- (id)init;

@end

