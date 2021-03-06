//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "RAPCheckmark-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface RAPCategorySearchTableViewCell : UITableViewCell <RAPCheckmark>
{
    UIImageView *_checkmarkImageView;
    UILabel *_categoryLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    _Bool _checked;
    NSString *_displayText;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)_contentSizeDidChange;
- (void)_updateCheckmarkImageView;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

