//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (Entitlements)
- (id)_dnds_safeStringArrayEntitlementForKey:(id)arg1;
- (_Bool)dnds_hasSettingsUpdatesEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasSettingsModificationEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasSettingsRequestEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasStateUpdatesEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasStateRequestEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasUserRequestedModeAssertionEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasModeAssertionEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasEntitlementsToRequestAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2;
- (_Bool)dnds_hasBehaviorResolutionEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasAnyValidEntitlement;
@end

