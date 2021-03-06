//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (EKAdditions)
+ (_Bool)_cal_serializedEntryForKey:(id)arg1 value:(id)arg2 outKey:(id *)arg3 outValue:(id *)arg4;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1;
+ (id)errorWithCADResult:(int)arg1 action:(id)arg2;
+ (id)errorWithCADResult:(int)arg1;
+ (id)_defaultDescriptionForCode:(long long)arg1;
- (id)cal_serializableError;
- (id)cal_serializableUserInfo;
- (struct __SecTrust *)cal_trustInfoCopy;
- (_Bool)cal_isCertificateError;
@end

