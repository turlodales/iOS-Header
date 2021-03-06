//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface AppInstallInstallResponse : NSObject
{
    long long _installID;
    NSError *_error;
    long long _result;
}

+ (id)terminateInstallID:(long long)arg1;
+ (id)finishInstallID:(long long)arg1;
+ (id)failInstallID:(long long)arg1 withError:(id)arg2;
+ (id)continueInstallID:(long long)arg1;
+ (id)approveInstallID:(long long)arg1;
- (void).cxx_destruct;
@property(readonly) long long result; // @synthesize result=_result;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long installID; // @synthesize installID=_installID;
- (id)_initWithInstallID:(long long)arg1 result:(long long)arg2 error:(id)arg3;

@end

