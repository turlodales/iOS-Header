//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface AITransactionLog : NSObject
{
    NSObject<OS_os_log> *_log;
}

+ (id)_defaultLog;
+ (void)logStep:(unsigned long long)arg1 byParty:(unsigned long long)arg2 phase:(unsigned long long)arg3 success:(_Bool)arg4 forBundleID:(id)arg5 description:(id)arg6;
+ (void)logScenario:(id)arg1 step:(unsigned long long)arg2 success:(_Bool)arg3 forBundleID:(id)arg4 description:(id)arg5;
+ (void)initializeWithLog:(id)arg1;
- (void).cxx_destruct;
- (void)_logScenario:(id)arg1 step:(unsigned long long)arg2 success:(_Bool)arg3 forBundleID:(id)arg4 description:(id)arg5;
- (id)_initWithLog:(id)arg1;

@end

