//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol VNDocumentCameraViewControllerDelegate;

@interface VNDocumentCameraViewController : UIViewController
{
    id <VNDocumentCameraViewControllerDelegate> _delegate;
    UIViewController *_childViewController;
}

+ (_Bool)isSupported;
+ (id)newInProcessViewController;
+ (id)newViewServiceViewController;
+ (id)newDefaultViewController;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) __weak id <VNDocumentCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;
- (_Bool)prefersStatusBarHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithChildViewController:(id)arg1;
- (id)init;

@end

