//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFShortcutsAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;
- (void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)workflowLevelPromptTemplate;
- (id)attemptRecoveryFromGlobalLevelErrorMessage;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)protectedResourceDescription;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;

@end

