//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel, UIColor, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver>
{
    _Bool _shouldDisplayEmptyPlaceholder;
    _Bool __needsUpdateColor;
    UIColor *_backgroundColorOverride;
    PUBrowsingViewModel *_viewModel;
    CDUnknownBlockType __nextColorUpdateAnimatorBlock;
    _UIContentUnavailableView *__emptyPlaceholderView;
    struct CGRect __emptyPlaceholderFrame;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setEmptyPlaceholderFrame:) struct CGRect _emptyPlaceholderFrame; // @synthesize _emptyPlaceholderFrame=__emptyPlaceholderFrame;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(copy, nonatomic, setter=_setNextColorUpdateAnimatorBlock:) CDUnknownBlockType _nextColorUpdateAnimatorBlock; // @synthesize _nextColorUpdateAnimatorBlock=__nextColorUpdateAnimatorBlock;
@property(nonatomic, setter=_setNeedsUpdateColor:) _Bool _needsUpdateColor; // @synthesize _needsUpdateColor=__needsUpdateColor;
@property(retain, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool shouldDisplayEmptyPlaceholder; // @synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder;
@property(retain, nonatomic) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (struct CGRect)_emptyPlaceholderFrameForLayoutInfo:(id)arg1;
- (void)_updateColorIfNeeded;
- (void)_invalidateColorWithAnimatorBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateColor;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewDidLoad;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

