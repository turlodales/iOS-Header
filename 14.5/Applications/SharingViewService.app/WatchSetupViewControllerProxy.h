//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseMainController.h"

@class SVSCommonNavController, UIStoryboard, WatchSetupViewController;

@interface WatchSetupViewControllerProxy : SVSBaseMainController
{
    _Bool _dismissed;
    SVSCommonNavController *_navController;
    WatchSetupViewController *_setupViewController;
    UIStoryboard *_storyboard;
}

- (void).cxx_destruct;
- (void)handleButtonActions:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

