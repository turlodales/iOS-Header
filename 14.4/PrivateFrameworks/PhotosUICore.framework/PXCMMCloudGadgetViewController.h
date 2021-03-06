//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXCMMCloudViewViewDelegate-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMCloudView, PXGadgetSpec;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget>
{
    _Bool _isCPLOn;
    long long _priority;
    id <PXCMMCloudGadgetViewControllerDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    NSString *_gadgetTitle;
    PXCMMCloudView *_cloudView;
}

+ (id)_userDefaults;
+ (void)setDidDismissCloudGadget:(_Bool)arg1;
+ (_Bool)didDismissCloudGadget;
- (void).cxx_destruct;
@property(retain, nonatomic) PXCMMCloudView *cloudView; // @synthesize cloudView=_cloudView;
@property(copy, nonatomic) NSString *gadgetTitle; // @synthesize gadgetTitle=_gadgetTitle;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void)_updateContentInsets;
- (id)contentViewController;
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)completeMyMomentCloudPhotoViewSizeThatFitsDidChange:(id)arg1;
- (void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1;
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateCPLStatus;
@property(nonatomic) _Bool disableDismissAction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLoad;
- (id)initWithSourceType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end

