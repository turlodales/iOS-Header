//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDCKSyncTokenStore-Protocol.h>

@class NSString;

@interface IMDCKSyncTokenStore : NSObject <IMDCKSyncTokenStore>
{
}

+ (void)persistToken:(id)arg1 forKey:(id)arg2;
+ (id)tokenForKey:(id)arg1;
+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
- (void)persistToken:(id)arg1 forKey:(id)arg2;
- (id)tokenForKey:(id)arg1;
- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

