//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface WBSCloudHistoryFetchResult : NSObject
{
    NSMutableArray *_mutableCloudHistoryVisits;
    NSMutableArray *_mutableHistoryTombstones;
    NSMutableDictionary *_mutableClientVersions;
    NSData *_serverChangeTokenData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
- (id)description;
- (void)_setServerChangeTokenData:(id)arg1;
- (void)_addHistoryTombstone:(id)arg1;
@property(readonly, nonatomic) NSArray *historyTombstones;
- (void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2;
@property(readonly, nonatomic) NSDictionary *clientVersions;
- (void)_addCloudHistoryVisit:(id)arg1;
@property(readonly, nonatomic) NSArray *cloudHistoryVisits;
- (id)init;

@end

