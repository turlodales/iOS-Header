//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UIRecentsAccessoryDefaultView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subheadLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subheadLabel; // @synthesize subheadLabel=_subheadLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateLabelTextColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

