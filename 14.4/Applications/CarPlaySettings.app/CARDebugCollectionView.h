//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CARSettingsCellViewProtocol-Protocol.h"

@class CARDebugCollectionConfig, NSString, UIImageView;

@interface CARDebugCollectionView : UIView <CARSettingsCellViewProtocol>
{
    _Bool _cellFocused;
    _Bool _actioned;
    CARDebugCollectionConfig *_config;
    UIImageView *_selectedImageView;
    UIImageView *_actionedImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *actionedImageView; // @synthesize actionedImageView=_actionedImageView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) _Bool actioned; // @synthesize actioned=_actioned;
@property(retain, nonatomic) CARDebugCollectionConfig *config; // @synthesize config=_config;
@property(nonatomic, getter=isCellFocused) _Bool cellFocused; // @synthesize cellFocused=_cellFocused;
@property(nonatomic, getter=isCellHighlighted) _Bool cellHighlighted;
@property(nonatomic, getter=isCellSelected) _Bool cellSelected;
- (void)_updateColors;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)canBecomeFocused;
- (void)action;
- (id)initWithConfig:(id)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

