//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface CarNavigationSearchViewLayout : UICollectionViewLayout
{
    NSMapTable *_layoutAttributes;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
- (void)getNumberOfRows:(unsigned long long *)arg1 itemSize:(struct CGSize *)arg2 forItemCount:(unsigned long long)arg3 availableSize:(struct CGSize)arg4;
- (double)preferredHeightForItemCount:(unsigned long long)arg1 availableSize:(struct CGSize)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)init;

@end

