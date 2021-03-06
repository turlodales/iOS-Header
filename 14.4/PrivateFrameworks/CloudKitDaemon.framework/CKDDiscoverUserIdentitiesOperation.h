//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation
{
    CDUnknownBlockType _discoverUserIdentitiesProgressBlock;
    NSArray *_userIdentityLookupInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
@property(copy, nonatomic) CDUnknownBlockType discoverUserIdentitiesProgressBlock; // @synthesize discoverUserIdentitiesProgressBlock=_discoverUserIdentitiesProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

