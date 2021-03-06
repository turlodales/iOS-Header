//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <ContactsUI/CNPhotoPickerVariantListControllerDelegate-Protocol.h>

@class CNPhotoPickerProviderItem, CNPhotoPickerVariantListController, CNPhotoPickerVariantsManager, NSLayoutConstraint, NSString, OBBoldTrayButton, OBLinkTrayButton;
@protocol CNSharingProfileOnboardingVariantViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingVariantViewController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate>
{
    _Bool _shouldShowPoseButton;
    id <CNSharingProfileOnboardingVariantViewControllerDelegate> _onboardingDelegate;
    CNPhotoPickerProviderItem *_selectedItem;
    CNPhotoPickerVariantsManager *_variantsManager;
    CNPhotoPickerProviderItem *_item;
    NSString *_variantName;
    CNPhotoPickerVariantListController *_variantListController;
    OBLinkTrayButton *_setupLaterButton;
    OBBoldTrayButton *_backButton;
    OBBoldTrayButton *_continueButton;
    OBLinkTrayButton *_poseButton;
    NSLayoutConstraint *_heightLayoutConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *heightLayoutConstraint; // @synthesize heightLayoutConstraint=_heightLayoutConstraint;
@property(retain, nonatomic) OBLinkTrayButton *poseButton; // @synthesize poseButton=_poseButton;
@property(retain, nonatomic) OBBoldTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) OBBoldTrayButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) OBLinkTrayButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;
@property(retain, nonatomic) CNPhotoPickerVariantListController *variantListController; // @synthesize variantListController=_variantListController;
@property(retain, nonatomic) NSString *variantName; // @synthesize variantName=_variantName;
@property(retain, nonatomic) CNPhotoPickerProviderItem *item; // @synthesize item=_item;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) CNPhotoPickerProviderItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) _Bool shouldShowPoseButton; // @synthesize shouldShowPoseButton=_shouldShowPoseButton;
@property(nonatomic) __weak id <CNSharingProfileOnboardingVariantViewControllerDelegate> onboardingDelegate; // @synthesize onboardingDelegate=_onboardingDelegate;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)didTapBack:(id)arg1;
- (void)didTapPose:(id)arg1;
- (void)didTapContinue:(id)arg1;
- (void)didTapSetupLater:(id)arg1;
- (void)updateOriginalItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithVariantsManager:(id)arg1 originalItem:(id)arg2 selectedVariantIdentifier:(id)arg3;

@end

