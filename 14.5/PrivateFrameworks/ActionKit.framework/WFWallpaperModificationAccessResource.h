//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFWallpaperModificationAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedAccessResourceErrorString;
- (unsigned long long)workflowLevelStatus;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)name;

@end

