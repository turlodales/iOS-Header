//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteButtonIntrinsicContentSizeObserver-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>

@class NSArray, NSHashTable, NSString, PKPaletteButton, PKPaletteButtonGroupView, PKPaletteKeyboardButton, UIStackView;

@interface PKDrawingPaletteInputAssistantView : UIView <PKPaletteButtonIntrinsicContentSizeObserver, PKEdgeLocatable, PKPaletteViewSizeScaling>
{
    _Bool _useCompactLayout;
    _Bool _shouldShowKeyboardButton;
    _Bool _shouldShowReturnKeyButton;
    _Bool _enableKeyboardButtons;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    NSArray *_buttons;
    PKPaletteKeyboardButton *_keyboardButton;
    PKPaletteButton *_returnKeyButton;
    UIStackView *_contentStackView;
    PKPaletteButtonGroupView *_topOrTrailingGroupView;
    PKPaletteButtonGroupView *_bottomOrLeadingGroupView;
    NSHashTable *_viewStateObservers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *viewStateObservers; // @synthesize viewStateObservers=_viewStateObservers;
@property(retain, nonatomic) PKPaletteButtonGroupView *bottomOrLeadingGroupView; // @synthesize bottomOrLeadingGroupView=_bottomOrLeadingGroupView;
@property(retain, nonatomic) PKPaletteButtonGroupView *topOrTrailingGroupView; // @synthesize topOrTrailingGroupView=_topOrTrailingGroupView;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) PKPaletteButton *returnKeyButton; // @synthesize returnKeyButton=_returnKeyButton;
@property(retain, nonatomic) PKPaletteKeyboardButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(nonatomic) _Bool enableKeyboardButtons; // @synthesize enableKeyboardButtons=_enableKeyboardButtons;
@property(nonatomic) _Bool shouldShowReturnKeyButton; // @synthesize shouldShowReturnKeyButton=_shouldShowReturnKeyButton;
@property(nonatomic) _Bool shouldShowKeyboardButton; // @synthesize shouldShowKeyboardButton=_shouldShowKeyboardButton;
@property(nonatomic) _Bool useCompactLayout; // @synthesize useCompactLayout=_useCompactLayout;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
- (void)buttonDidChangeIntrinsicContentSize:(id)arg1;
- (double)_contentStackViewSpacing;
- (long long)_contentStackViewAlignment;
- (void)_updateContentViewSpacing;
- (void)_updateContentScalingFactor;
- (void)_updateContentOrientation;
- (id)_topOrTrailingGroupViewButtons;
- (void)_updateGroupViewContents;
- (void)_updateUI;
@property(readonly, nonatomic) _Bool hasInputAssistantItems;
- (void)_notifyViewStateDidChange;
- (void)removeViewStateObserver:(id)arg1;
- (void)addViewStateObserver:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

