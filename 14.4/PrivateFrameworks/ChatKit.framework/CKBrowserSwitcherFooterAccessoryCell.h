//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView
{
    double _minHeight;
    double _maxHeight;
    UIView *_seperatorView;
}

+ (id)reuseIdentifier;
+ (id)supplementryViewKind;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

