//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILabel.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel
{
    _Bool _reverseShadow;
    UIButton *_button;
    _Bool _externallySetNumberOfLines;
    _Bool _fontIsDefaultForIdiom;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool _fontIsDefaultForIdiom; // @synthesize _fontIsDefaultForIdiom;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (_Bool)_textColorFollowsTintColor;
- (void)_contentDidChange:(long long)arg1 fromContent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setReverseShadow:(_Bool)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setFont:(id)arg1;
- (void)_setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;
- (void)_setWantsAutolayout;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (void)_internallySetNumberOfLines:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;

@end

