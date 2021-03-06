//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SHLouvainClusterDataStore;

__attribute__((visibility("hidden")))
@interface SHLouvainClusterImport : NSObject
{
    SHLouvainClusterDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SHLouvainClusterDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)importClustersToModelObjects:(id)arg1 cluster:(id)arg2 importClusters:(id)arg3;
- (_Bool)loadClustersLineByLineFromDataURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadClustersFromDataURL:(id)arg1 error:(id *)arg2;
- (id)initWithDataStore:(id)arg1;

@end

