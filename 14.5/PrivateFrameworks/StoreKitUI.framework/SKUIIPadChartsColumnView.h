//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIIPadChartsColumnView : UIView
{
    struct UIEdgeInsets _contentInset;
    NSArray *_contentViewControllers;
    long long _selectedViewControllerIndex;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_addSelectedViewController;
- (void)layoutSubviews;
- (void)setSelectedViewControllerIndex:(long long)arg1;
@property(readonly, nonatomic) UIViewController *selectedViewController;

@end

