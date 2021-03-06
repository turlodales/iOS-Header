//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <MediaControls/MRURoutingSubtitleControllerDelegate-Protocol.h>
#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>
#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>
#import <MediaControls/UIPointerInteractionDelegate-Protocol.h>

@class MRURoutingAccessoryView, MRURoutingSubtitleController, MRURoutingSubtitleView, MRUVisualStylingProvider, MRUVolumeSlider, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol MRURoutingTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface MRURoutingTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, UIGestureRecognizerDelegate, UIPointerInteractionDelegate>
{
    _Bool _showOutline;
    _Bool _showVolumeSlider;
    id <MRURoutingTableViewCellDelegate> _delegate;
    UIImage *_iconImage;
    NSString *_title;
    MRURoutingSubtitleController *_subtitleStateController;
    MRURoutingAccessoryView *_routingAccessoryView;
    MRUVolumeSlider *_volumeSlider;
    MRUVisualStylingProvider *_stylingProvider;
    UIImageView *_iconImageView;
    UIImageView *_outlineImageView;
    UILabel *_titleLabel;
    MRURoutingSubtitleView *_subtitleView;
    UIView *_separatorView;
    UITapGestureRecognizer *_expandGestureRecognizer;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer; // @synthesize expandGestureRecognizer=_expandGestureRecognizer;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MRURoutingSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *outlineImageView; // @synthesize outlineImageView=_outlineImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool showVolumeSlider; // @synthesize showVolumeSlider=_showVolumeSlider;
@property(nonatomic) _Bool showOutline; // @synthesize showOutline=_showOutline;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MRUVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // @synthesize routingAccessoryView=_routingAccessoryView;
@property(readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // @synthesize subtitleStateController=_subtitleStateController;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak id <MRURoutingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)expandRect;
- (void)updateVisibility;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)routingSubtitleStateController:(id)arg1 didUpdateText:(id)arg2 accessory:(long long)arg3;
- (void)transitionToNextVisibleStateWithDuration:(double)arg1;
- (void)didTapToExpand;
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;
- (void)setSubtitleAccessory:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

