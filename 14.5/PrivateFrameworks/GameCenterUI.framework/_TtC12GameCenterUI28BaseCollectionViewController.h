//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class MISSING_TYPE, UICollectionView;

@interface _TtC12GameCenterUI28BaseCollectionViewController : UICollectionViewController
{
    MISSING_TYPE *overlayView;
    MISSING_TYPE *wantsHiddenNavigationBar;
    MISSING_TYPE *wantsHiddenTitle;
    MISSING_TYPE *manualScrollEdgeAppearanceProgress;
    MISSING_TYPE *scrollObserver;
    MISSING_TYPE *navbarScrollObserver;
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;
@property(nonatomic, retain) UICollectionView *collectionView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

