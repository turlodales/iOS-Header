//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TabThumbnailView.h"

@class GradientView, TabSnapshotImageView, TiltedTabItemLayoutInfo, TiltedTabView;

@interface TiltedTabThumbnailView : TabThumbnailView
{
    TabSnapshotImageView *_snapshotView;
    TiltedTabView *_tiltedTabView;
    GradientView *_contentShadowView;
    TiltedTabItemLayoutInfo *_layoutInfo;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TiltedTabView *tiltedTabView; // @synthesize tiltedTabView=_tiltedTabView;
@property(readonly, nonatomic) TabSnapshotImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (struct CGRect)headerBackgroundViewFrame;
- (_Bool)titleIsHorizontallyCentered;
- (_Bool)headerHasFinishedAnimating;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

