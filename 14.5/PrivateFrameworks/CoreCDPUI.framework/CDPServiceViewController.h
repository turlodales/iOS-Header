//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CoreCDPUI/CDPServiceInterface-Protocol.h>

@interface CDPServiceViewController : UIViewController <CDPServiceInterface>
{
    _Bool _inlineMode;
    UIViewController *_contentViewController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)offsetForCurrentKeyboard:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

