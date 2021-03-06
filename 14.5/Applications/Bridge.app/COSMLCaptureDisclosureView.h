//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UISwitch, UITapGestureRecognizer, UIViewController;

@interface COSMLCaptureDisclosureView : UIView
{
    UIViewController *_parentController;
    UISwitch *_disclosureToggle;
    UILabel *_descriptionText;
    UITapGestureRecognizer *_tapRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UILabel *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) UISwitch *disclosureToggle; // @synthesize disclosureToggle=_disclosureToggle;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
- (void)tappedLearnMore:(id)arg1;
- (void)layoutSubviews;
- (void)userToggledSwitch:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

