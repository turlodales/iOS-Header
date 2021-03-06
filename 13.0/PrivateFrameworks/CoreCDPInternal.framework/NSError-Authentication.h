//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (Authentication)
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptDueToNetworkError;
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;
- (_Bool)isRecoveryPETSoftLimitError;
- (_Bool)isRecoveryPETHardLimitError;
- (_Bool)isCoolDownError;
- (_Bool)isLoginSoftLimit;
- (_Bool)isLoginHardLimit;
- (_Bool)isICSCInvalidError;
- (_Bool)isICSCRecoveryHardLimitError;
@end

