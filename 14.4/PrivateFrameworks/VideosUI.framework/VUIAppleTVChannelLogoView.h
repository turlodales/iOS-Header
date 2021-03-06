//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class VUIAppleTVChannelLogoLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIAppleTVChannelLogoView : UIView
{
    _TVImageView *_channelLogoView;
    VUIAppleTVChannelLogoLayout *_layout;
    _TVImageView *_appleTVImageView;
    VUILabel *_channelsLabel;
}

+ (id)logoViewWithChannelImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) VUILabel *channelsLabel; // @synthesize channelsLabel=_channelsLabel;
@property(retain, nonatomic) _TVImageView *appleTVImageView; // @synthesize appleTVImageView=_appleTVImageView;
@property(retain, nonatomic) VUIAppleTVChannelLogoLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) _TVImageView *channelLogoView; // @synthesize channelLogoView=_channelLogoView;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

