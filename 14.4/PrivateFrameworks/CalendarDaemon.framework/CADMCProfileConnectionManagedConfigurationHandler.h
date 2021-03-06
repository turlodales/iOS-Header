//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADManagedConfigurationHandler-Protocol.h>

@class MCProfileConnection;

__attribute__((visibility("hidden")))
@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject <CADManagedConfigurationHandler>
{
    MCProfileConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MCProfileConnection *connection; // @synthesize connection=_connection;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
- (_Bool)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2;
- (_Bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (_Bool)isOpenInRestrictionInEffect;
- (id)initWithMCProfileConnection:(id)arg1;

@end

