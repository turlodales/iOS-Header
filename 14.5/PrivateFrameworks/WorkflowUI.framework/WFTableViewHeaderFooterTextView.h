//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSArray, NSString, UILabel;

@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView
{
    double _horizontalPadding;
    UILabel *_label;
    NSArray *_horizontalConstraints;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(copy, nonatomic) NSString *text;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)init;

@end

