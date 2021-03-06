//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBLocalDatabase, NSDictionary;
@protocol HMBLocalZoneID;

@protocol HMBLocalDatabaseDelegate <NSObject>

@optional
- (void)localDatabase:(HMBLocalDatabase *)arg1 willRemoveZoneWithID:(id <HMBLocalZoneID>)arg2;
- (void)localDatabase:(HMBLocalDatabase *)arg1 detectedLocalCorruptionWithInfo:(NSDictionary *)arg2;
- (_Bool)localDatabaseShouldLogPrivateInformation:(HMBLocalDatabase *)arg1;
@end

