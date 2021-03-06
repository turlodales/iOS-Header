//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CloudTabItemViewDelegate-Protocol.h"
#import "ViewReuseManagerDelegate-Protocol.h"

@class CloudTabHeaderView, NSArray, NSString, ViewReuseManager, WBSCloudTab, WBSCloudTabDevice;
@protocol CloudTabTableDelegate;

@interface CloudTabTable : UIView <CloudTabItemViewDelegate, ViewReuseManagerDelegate>
{
    long long _style;
    WBSCloudTabDevice *_device;
    CloudTabHeaderView *_headerView;
    unsigned long long _indexOfFocusedTab;
    ViewReuseManager *_itemViewReuseManager;
    struct _NSRange _trackedItemViewRange;
    id <CloudTabTableDelegate> _delegate;
    WBSCloudTab *_focusedTab;
    double _offsetAboveFocusedTab;
    double _offsetBelowFocusedTab;
    CDUnknownBlockType _layoutAnimator;
    NSArray *_displayedTabs;
    struct CGRect _visibleRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *displayedTabs; // @synthesize displayedTabs=_displayedTabs;
@property(copy, nonatomic) CDUnknownBlockType layoutAnimator; // @synthesize layoutAnimator=_layoutAnimator;
@property(nonatomic) double offsetBelowFocusedTab; // @synthesize offsetBelowFocusedTab=_offsetBelowFocusedTab;
@property(nonatomic) double offsetAboveFocusedTab; // @synthesize offsetAboveFocusedTab=_offsetAboveFocusedTab;
@property(retain, nonatomic) WBSCloudTab *focusedTab; // @synthesize focusedTab=_focusedTab;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) __weak id <CloudTabTableDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldShowSeparatorForItemViewAtIndex:(unsigned long long)arg1;
- (void)cloudTabItemViewHighlightStateDidChange:(id)arg1;
- (void)cloudTabItemViewDeleteButtonWasTapped:(id)arg1;
- (void)cloudTabItemViewDidFinishEditing:(id)arg1;
- (void)cloudTabItemViewDidStartEditing:(id)arg1;
- (void)viewReuseManager:(id)arg1 prepareView:(id)arg2 toRepresentObjectAtIndex:(unsigned long long)arg3;
- (void)viewReuseManager:(id)arg1 willRecycleView:(id)arg2;
- (_Bool)updateDisplayedTabs;
- (void)layoutSubviews;
- (void)_layoutItemView:(id)arg1 representingItemAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) double contentMinimumY;
- (struct CGRect)rectForTab:(id)arg1;
- (struct CGRect)_rectForItemAtIndex:(unsigned long long)arg1;
- (void)_didSelectItemView:(id)arg1;
- (struct _NSRange)_visibleItemRange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDevice:(id)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

