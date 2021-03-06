//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SettingsCellularUI/PSHeaderFooterView-Protocol.h>
#import <SettingsCellularUI/UITextViewDelegate-Protocol.h>

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UILayoutGuide, UITextView;

__attribute__((visibility("hidden")))
@interface PSUICarrierItemsNotLoadedView : UIView <UITextViewDelegate, PSHeaderFooterView>
{
    UIActivityIndicatorView *_spinner;
    UILabel *_titleLabel;
    UITextView *_linkTextView;
    UIButton *_retryButton;
    UILayoutGuide *_layoutGuide;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UITextView *linkTextView; // @synthesize linkTextView=_linkTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)setLinkText:(id)arg1 url:(id)arg2;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

