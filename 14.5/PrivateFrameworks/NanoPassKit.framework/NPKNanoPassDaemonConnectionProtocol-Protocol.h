//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/PDXPCServiceExportedInterface-Protocol.h>

@class NSSet, PKAppletSubcredentialSharingInvitation, PKBarcodeEventMetadataRequest, PKPaymentPass, PKPaymentTransaction;

@protocol NPKNanoPassDaemonConnectionProtocol <PDXPCServiceExportedInterface>
- (void)noteWillDeleteAccountsWithCompletion:(void (^)(void))arg1;
- (void)statusForReceivedInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)statusForSentInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 shouldFetchAnonymizationSaltFromRemoteDevice:(_Bool)arg2 completion:(void (^)(PKPaymentPass *, NSError *))arg3;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(PKAppletSubcredentialSharingInvitation *)arg1;
- (void)handleApplicationRedirectRequestOnPairedDeviceForPaymentPass:(PKPaymentPass *)arg1 transaction:(PKPaymentTransaction *)arg2;
- (void)handleMetadataRequestOnPairedDevice:(PKBarcodeEventMetadataRequest *)arg1 withAssociatedApplicationIdentifiers:(NSSet *)arg2 completion:(void (^)(PKBarcodeEventMetadataResponse *, NSError *))arg3;
@end

