//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSArray, UILabel;

@interface FLHeaderCell : PSTableCell
{
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}

+ (long long)cellStyle;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

