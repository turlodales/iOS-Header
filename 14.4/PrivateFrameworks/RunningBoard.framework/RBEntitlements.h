//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBEntitlementPossessing-Protocol.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <RBEntitlementPossessing>
{
    NSSet *_entitlements;
}

- (void).cxx_destruct;
- (id)_initWithEntitlements:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

