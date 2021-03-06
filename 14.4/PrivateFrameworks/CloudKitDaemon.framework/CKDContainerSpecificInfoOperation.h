//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKDContainerInfo, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoOperation : CKDOperation
{
    _Bool _requireUserIDs;
    CKDContainerInfo *_containerInfo;
    NSObject<OS_dispatch_group> *_infoFetchedGroup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup; // @synthesize infoFetchedGroup=_infoFetchedGroup;
@property(copy, nonatomic) CKDContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(nonatomic) _Bool requireUserIDs; // @synthesize requireUserIDs=_requireUserIDs;
- (void)main;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldCheckAppVersion;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

