//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVMLCollectionViewController.h>

__attribute__((visibility("hidden")))
@interface _TVGridViewController : _TVMLCollectionViewController
{
    _Bool _configureForListTemplate;
}

- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)shouldHeaderFloatByDefault;
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;
- (_Bool)contentFlowsVertically;
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;

@end

