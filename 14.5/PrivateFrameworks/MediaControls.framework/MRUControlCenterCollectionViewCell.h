//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <MediaControls/UIPointerInteractionDelegate-Protocol.h>

@class MRUNowPlayingHeaderView, MediaControlsMaterialView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface MRUControlCenterCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate>
{
    MRUNowPlayingHeaderView *_headerView;
    MediaControlsMaterialView *_materialView;
    UIView *_transformView;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *transformView; // @synthesize transformView=_transformView;
@property(retain, nonatomic) MediaControlsMaterialView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)setTransitionTransform:(struct CGAffineTransform)arg1 isVisible:(_Bool)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

