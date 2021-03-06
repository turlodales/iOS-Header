//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ClipUIServices/PRXCardContentProviding-Protocol.h>

@class CPSPermissionItemView, NSString, UIImage, UIImageView, UIView;
@protocol CPSPermissionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CPSPermissionsViewController : UIViewController <PRXCardContentProviding>
{
    NSString *_appName;
    UIImageView *_backgroundImageView;
    UIView *_optionsContainer;
    CPSPermissionItemView *_notificationItemView;
    CPSPermissionItemView *_locationConfirmationItemView;
    _Bool _backgroundImageNeedsUpdate;
    UIImage *_backgroundImage;
    id <CPSPermissionsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CPSPermissionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) _Bool allowsPullToDismiss;
- (void)updatePreferredContentSizeForCardWidth:(double)arg1;
- (_Bool)_canShowWhileLocked;
@property(nonatomic) _Bool locationConfirmationPermissionEnabled;
@property(nonatomic) _Bool notificationPermissionEnabled;
- (void)doneTapped;
- (void)viewDidLayoutSubviews;
- (void)setUpOptionsContainer;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithAppName:(id)arg1 backgroundImage:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, nonatomic) long long cardStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

