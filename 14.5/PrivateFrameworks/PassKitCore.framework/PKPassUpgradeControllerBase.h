//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PKPaymentWebService;

@interface PKPassUpgradeControllerBase : NSObject
{
    CDUnknownBlockType _addPaymentPassToLibrary;
    struct os_unfair_lock_s _pass_upgrade_lock;
    NSMutableDictionary *_pendingPassUpgrades;
    PKPaymentWebService *_paymentWebService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
- (void)appletsDidUpdate;
- (void)completePassUpgradeForPassUniqueID:(id)arg1 withError:(id)arg2;
- (void)downloadUpgradedPassForPassUniqueID:(id)arg1 atURL:(id)arg2;
- (void)requestPassUpgrade:(id)arg1 pass:(id)arg2 diagnosticReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithWebService:(id)arg1 addPaymentPassToLibrary:(CDUnknownBlockType)arg2;
- (id)init;

@end

