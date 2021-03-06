//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>

@class MPAVRoute, MPRouteLabel, MPUMarqueeView, MRUVisualStylingProvider, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MRUNowPlayingLabelView : UIView <MRUVisualStylingProviderObserver>
{
    _Bool _showPlaceholderText;
    _Bool _marqueeEnabled;
    MPAVRoute *_route;
    NSString *_title;
    NSString *_subtitle;
    NSString *_placeholderText;
    MRUVisualStylingProvider *_stylingProvider;
    long long _layout;
    long long _context;
    MPRouteLabel *_routeLabel;
    MPUMarqueeView *_titleMarqueeView;
    MPUMarqueeView *_subtitleMarqueeView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_placeholderLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MPUMarqueeView *subtitleMarqueeView; // @synthesize subtitleMarqueeView=_subtitleMarqueeView;
@property(retain, nonatomic) MPUMarqueeView *titleMarqueeView; // @synthesize titleMarqueeView=_titleMarqueeView;
@property(retain, nonatomic) MPRouteLabel *routeLabel; // @synthesize routeLabel=_routeLabel;
@property(nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property(nonatomic) _Bool showPlaceholderText; // @synthesize showPlaceholderText=_showPlaceholderText;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
- (void)updateVisibility;
- (void)updateMarquee;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

