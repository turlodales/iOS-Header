//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLSimpleTaskSyncStep.h>

@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep
{
    _Bool _highPriority;
}

@property(readonly, nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
- (id)newTask;
- (void)cancelAllTasks:(_Bool)arg1;
- (id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 highPriority:(_Bool)arg3;

@end

