//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSString, PKAccessPassProvisioningConfiguration, PKAddSecureElementPassConfiguration, PKPass;

@protocol PKPassLibraryDataProvider <NSObject>
@property(readonly, nonatomic) _Bool canAddPaymentPass;
- (_Bool)canProvisionAccessPassWithConfiguration:(PKAccessPassProvisioningConfiguration *)arg1;
- (_Bool)canAddSecureElementPassWithConfiguration:(PKAddSecureElementPassConfiguration *)arg1;
- (NSString *)peerPaymentPassUniqueID;
- (PKPass *)passWithPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (PKPass *)passWithUniqueID:(NSString *)arg1;
- (NSArray *)paymentPasses;
- (void)removePass:(PKPass *)arg1;
@end

