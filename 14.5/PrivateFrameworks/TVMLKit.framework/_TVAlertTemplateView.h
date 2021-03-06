//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateView : UIView
{
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    NSArray *_viewsAbove;
    UICollectionView *_collectionView;
    NSArray *_viewsBelow;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *viewsBelow; // @synthesize viewsBelow=_viewsBelow;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *viewsAbove; // @synthesize viewsAbove=_viewsAbove;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)layoutSubviews;
- (void)setBgImage:(id)arg1;

@end

