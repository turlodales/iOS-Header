//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SBHomeScreenMaterialView;

@interface SBHomeScreenButton : UIButton
{
    SBHomeScreenMaterialView *_materialView;
}

+ (struct UIEdgeInsets)backgroundInsets;
+ (id)defaultContentImage;
@property(readonly, nonatomic) SBHomeScreenMaterialView *materialView; // @synthesize materialView=_materialView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

