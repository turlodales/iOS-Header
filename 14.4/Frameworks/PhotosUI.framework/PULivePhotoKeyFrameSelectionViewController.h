//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton;
@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController
{
    id <PULivePhotoKeyFrameSelectionViewControllerDelegate> _delegate;
    NSString *_selectionTitle;
    UIButton *_makeKeyPhotoBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *makeKeyPhotoBtn; // @synthesize makeKeyPhotoBtn=_makeKeyPhotoBtn;
@property(copy, nonatomic) NSString *selectionTitle; // @synthesize selectionTitle=_selectionTitle;
@property(nonatomic) __weak id <PULivePhotoKeyFrameSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateButtonTitle;
- (void)tapMakeKeyPhoto:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

