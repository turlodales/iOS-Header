//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UISearchBar;

@interface STSSearchBrowserHeaderView : UIView
{
    NSLayoutConstraint *_searchBarHeight;
    UISearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (id)init;

@end

