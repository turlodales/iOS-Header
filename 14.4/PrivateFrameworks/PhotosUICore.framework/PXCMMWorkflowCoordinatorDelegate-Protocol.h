//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSURL, PXCMMSession, PXCMMWorkflowCoordinator, UIViewController;

@protocol PXCMMWorkflowCoordinatorDelegate <NSObject>

@optional
- (void)workflowCoordinator:(PXCMMWorkflowCoordinator *)arg1 didPublishToURL:(NSURL *)arg2;
- (void)workflowCoordinator:(PXCMMWorkflowCoordinator *)arg1 workflowViewController:(UIViewController *)arg2 didFinishSession:(PXCMMSession *)arg3 withActivityState:(unsigned long long)arg4;
- (long long)shareOriginForSession:(PXCMMSession *)arg1 workflowCoordinator:(PXCMMWorkflowCoordinator *)arg2;
@end

