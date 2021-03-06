//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UIScrollView, UIView;

@interface COSHeadphoneNotificationsController : UIViewController <UITextViewDelegate>
{
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UIView *_descriptionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)createDescriptionTextView;
- (id)createTitleLabel;
- (id)createScrollView;
- (id)descriptionText;
- (void)removeUnderlineStyle:(id)arg1 toRange:(struct _NSRange)arg2;
- (void)applyBoldStyle:(id)arg1 toTextMatching:(id)arg2;
- (void)applyBodyStyle:(id)arg1 toRange:(struct _NSRange)arg2;
- (id)healthLinkText;
- (id)bluetoothSettingsLinkText;
- (id)linkText:(id)arg1 withLink:(id)arg2;
- (id)titleText;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

