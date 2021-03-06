//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <SearchToShareCore/STSResultDetailViewDelegate-Protocol.h>
#import <SearchToShareCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NSURL, STSAnimatedImageInfo, STSResultDetailView, UIImage;
@protocol STSResultDetailViewControllerDelegate;

@interface STSResultDetailViewController : UIViewController <STSResultDetailViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _useBackgroundBlur;
    _Bool _allowCustomContentViewInteraction;
    id <STSResultDetailViewControllerDelegate> _delegate;
    NSURL *_contentURL;
    NSURL *_providerURL;
    NSString *_queryString;
    unsigned long long _queryId;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowCustomContentViewInteraction; // @synthesize allowCustomContentViewInteraction=_allowCustomContentViewInteraction;
@property unsigned long long queryId; // @synthesize queryId=_queryId;
@property(nonatomic) _Bool useBackgroundBlur; // @synthesize useBackgroundBlur=_useBackgroundBlur;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSURL *providerURL; // @synthesize providerURL=_providerURL;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) __weak id <STSResultDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)detailViewDidTapSend:(id)arg1;
- (void)detailViewDidTapProvider:(id)arg1;
- (struct CGRect)contentFrameForBounds:(struct CGRect)arg1 traitCollection:(id)arg2;
- (void)updateCustomContentWithView:(id)arg1;
- (void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2;
@property(nonatomic) _Bool isFullscreen;
@property(copy, nonatomic) NSString *providerName;
@property(retain, nonatomic) UIImage *providerIcon;
@property(nonatomic) struct CGSize providerIconSize;
@property(readonly, nonatomic) STSAnimatedImageInfo *thumbnailInfo;
@property(readonly, nonatomic) UIImage *thumbnail;
- (id)detailView;
- (void)_handleTap:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) STSResultDetailView *view; // @dynamic view;

@end

