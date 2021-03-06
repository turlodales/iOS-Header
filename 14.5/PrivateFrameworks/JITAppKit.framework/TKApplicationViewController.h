//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL;
@protocol TKApplicationViewControllerDelegate;

@interface TKApplicationViewController : UIViewController
{
    NSURL *_bundleURL;
    NSString *_viewName;
    UIViewController *_childViewController;
    UIViewController *_loadingViewController;
    id <TKApplicationViewControllerDelegate> _delegate;
}

+ (id)applicationViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TKApplicationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
- (void)dismissApplicationControllerAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didLoadViewController:(id)arg1;
- (_Bool)handleApplicationControllerError;
- (id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(CDUnknownBlockType)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2;

@end

