//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPhotoBigAttributionView.h>

#import <MapKit/MKPhotoBigAttributionViewSubclass-Protocol.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MKFirstPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass>
{
    UIImageView *_glyphView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)didEndAnimatingActivityIndicatorView;
- (void)willStartAnimatingActivityIndicatorView;
- (void)didUpdateMapItem;
- (void)didUpdateAttributionViewType;
@property(readonly, nonatomic) UIImage *glyphImage;
@property(readonly, nonatomic) NSString *titleText;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithContext:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

