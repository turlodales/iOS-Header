//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CARSettingsCellSpecifier, CARSettingsCellViewSpecifier, UIView;

@interface CARSettingsCollectionViewCell : UICollectionViewCell
{
    CARSettingsCellSpecifier *_specifier;
    UIView *_viewHolder;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *viewHolder; // @synthesize viewHolder=_viewHolder;
@property(retain, nonatomic) CARSettingsCellSpecifier *specifier; // @synthesize specifier=_specifier;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
@property(readonly, nonatomic) CARSettingsCellViewSpecifier *cellViewSpecifier;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

