//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, TwoLinesOutlineCell, TwoLinesOutlineCellActionModel, UIButton;

__attribute__((visibility("hidden")))
@interface TwoLinesOutlineCellActionView : UIView
{
    UIButton *_button1;
    UIButton *_button2;
    long long _axis;
    NSArray *_constraints;
    TwoLinesOutlineCell *_outlineCell;
    TwoLinesOutlineCellActionModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TwoLinesOutlineCellActionModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) __weak TwoLinesOutlineCell *outlineCell; // @synthesize outlineCell=_outlineCell;
- (void)_buttonTapped:(id)arg1;
- (void)_updateFromModel;
- (void)layoutSubviews;
- (void)_updateConstraintsWithAxis:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 twoLinesOutlineCell:(id)arg2;

@end

