//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIVisualEffectView;

@interface STSRootView : UIView
{
    UIVisualEffectView *_visualEffectView;
    UIView *_contentView;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_setupView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

