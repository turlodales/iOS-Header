//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError, NSString;

@protocol CDPRemoteDeviceSecretValidatorProtocol
@property(nonatomic) unsigned long long supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(void (^)(unsigned long long))arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)cancelValidationWithError:(NSError *)arg1;
- (void)validateRecoveryKey:(NSString *)arg1 withCompletion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)validateSecret:(NSString *)arg1 devices:(NSArray *)arg2 type:(unsigned long long)arg3 withCompletion:(void (^)(_Bool, _Bool, NSError *))arg4;
@end

