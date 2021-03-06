//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

@class NSString, UIView, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface NonVisualEffectView : MapsThemeView
{
    UIView *_contentView;
    UIView *_backgroundView;
    double _cornerRadius;
    UIVisualEffect *_effect;
    NSString *__groupName;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName; // @synthesize _groupName=__groupName;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
- (void)updateTheme;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

