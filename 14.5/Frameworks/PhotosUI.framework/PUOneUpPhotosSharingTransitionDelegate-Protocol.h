//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PUAssetReference, PUOneUpPhotosSharingTransition, UICollectionViewLayout, UIView;

@protocol PUOneUpPhotosSharingTransitionDelegate
- (void)photosSharingTransitionWillAnimateDismissal:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransitionWillAnimatePresentation:(PUOneUpPhotosSharingTransition *)arg1;
- (UIView *)photosSharingTransitionTransitioningView:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 setVisibility:(_Bool)arg2 forAssetReference:(PUAssetReference *)arg3;
- (struct CGPoint)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 contentOffsetForAssetReference:(PUAssetReference *)arg2;
- (UICollectionViewLayout *)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 layoutForAssetReference:(PUAssetReference *)arg2;
@end

