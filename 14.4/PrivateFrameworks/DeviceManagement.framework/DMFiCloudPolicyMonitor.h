//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject
{
    NSArray *_policyTypes;
    NSUUID *_identifier;
    long long _iCloudLogoutPolicy;
}

+ (id)new;
+ (id)iCloudLogoutPolicyForPoliciesByType:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long iCloudLogoutPolicy; // @synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *policyTypes; // @synthesize policyTypes=_policyTypes;
- (id)init;
- (void)requestiCloudLogoutPolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)requestiCloudLogoutPolicyWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;

@end

