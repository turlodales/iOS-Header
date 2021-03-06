//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class NSArray, NSString, QLDetailItemViewControllerState, QLFileIconImageView, UIButton, UIStackView, UIView;

@interface QLDetailItemViewController : QLItemViewController
{
    QLFileIconImageView *_filePreviewImageView;
    UIStackView *_informationStackView;
    UIButton *_actionIconButton;
    UIButton *_actionButton;
    _Bool _isSettingStateAnimated;
    UIView *_currentActionButtonView;
    NSString *_previewTitle;
    QLDetailItemViewControllerState *_state;
    NSArray *_information;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *information; // @synthesize information=_information;
@property(retain, nonatomic) QLDetailItemViewControllerState *state; // @synthesize state=_state;
- (id)_scalableSystemFontOfSize:(double)arg1;
- (void)_setActionButtonView:(id)arg1 animated:(_Bool)arg2 actionButtonLabel:(id)arg3 informationVisible:(_Bool)arg4;
- (void)performAction;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateInformation;
- (void)setState:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

