//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject
{
    NSMutableDictionary *_fetchOperationsByIdentifier;
    NSMutableDictionary *_fetchOperationsByUUID;
    NSMutableDictionary *_retryCountByIdentifier;
}

- (void).cxx_destruct;
- (void)resetRetryCountForIdentifier:(id)arg1;
- (void)incrementRetryCountForIdentifier:(id)arg1;
- (long long)retryCountForIdentifier:(id)arg1;
- (id)allPendingIdentifiers;
- (id)fetchOperationForIdentifier:(id)arg1;
- (void)removeFetchOperation:(id)arg1;
- (void)addFetchOperation:(id)arg1;
- (id)init;

@end

