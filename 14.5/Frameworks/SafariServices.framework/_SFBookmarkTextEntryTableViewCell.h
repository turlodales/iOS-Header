//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UITextField;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell
{
    NSLayoutConstraint *_leadingConstraint;
    UITextField *_textField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITextField *editableTextField; // @synthesize editableTextField=_textField;
- (void)safeAreaInsetsDidChange;
- (void)layoutMarginsDidChange;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;
- (void)updateConstraints;
- (id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3;

@end

