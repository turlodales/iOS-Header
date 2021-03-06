//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAppInstalledResource.h>

@class INIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource
{
    _Bool _intentIsSynced;
    _Bool _actionRequiresRemoteExecution;
    INIntentExecutionInfo *_executionInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool actionRequiresRemoteExecution; // @synthesize actionRequiresRemoteExecution=_actionRequiresRemoteExecution;
@property(readonly, nonatomic) _Bool intentIsSynced; // @synthesize intentIsSynced=_intentIsSynced;
@property(readonly, nonatomic) INIntentExecutionInfo *executionInfo; // @synthesize executionInfo=_executionInfo;
- (void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1;
- (void)refreshAvailability;
- (_Bool)intentIsLocallyAvailable;
- (_Bool)intentIsEligibleForRemoteExecution;
- (id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isSyncedFromOtherDevice:(_Bool)arg3;
- (id)initWithDefinition:(id)arg1;

@end

