//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SKUIDownloadsCellView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell
{
    SKUIDownloadsCellView *_cellView;
    UIImageView *_editIndicator;
    long long _cellState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIDownloadsCellView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
- (void)_reloadEditState;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

