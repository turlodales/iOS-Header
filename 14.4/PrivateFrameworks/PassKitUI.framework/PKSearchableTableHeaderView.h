//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableHeaderView.h>

@class UILabel, UITextField;

@interface PKSearchableTableHeaderView : PKTableHeaderView
{
    UITextField *_searchField;
    UILabel *_searchFieldLabel;
    _Bool _showsSearchField;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsSearchField; // @synthesize showsSearchField=_showsSearchField;
@property(readonly, nonatomic) double searchFieldOffset;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *searchFieldLabel;
@property(readonly, nonatomic) UITextField *searchField;

@end

