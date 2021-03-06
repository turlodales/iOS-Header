//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

@class NSString, UIImageView, UILabel, UIVisualEffectView;
@protocol CKTitledImageBalloonViewDelegate;

@interface CKTitledImageBalloonView : CKImageBalloonView
{
    UIImageView *_chevron;
    UILabel *_titleLabel;
    UIVisualEffectView *_effectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(copy, nonatomic) NSString *title;
- (void)setOrientation:(BOOL)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)prepareForReuse;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(_Bool)arg4;
- (void)configureForLocatingChatItem:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <CKTitledImageBalloonViewDelegate> delegate; // @dynamic delegate;

@end

