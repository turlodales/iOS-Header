//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryCollectionViewCell : UICollectionViewCell
{
    UIViewController *_viewController;
    VUISeparatorView *_topSeparatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

