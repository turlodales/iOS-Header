//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIButton, UILabel, UISearchBar, UIStackView;
@protocol LUILogViewerViewDelegate;

@interface LUILogViewerView : UIView
{
    id <LUILogViewerViewDelegate> _delegate;
    UIView *_contentHolderView;
    UIButton *_filterButton;
    UISearchBar *_searchBar;
    UIButton *_closeButton;
    UIView *_filterView;
    UIButton *_logButton;
    UIButton *_clearButton;
    UIStackView *_buttonStack;
    UILabel *_searchResultLabel;
    UIButton *_leftCaretButton;
    UIButton *_rightCaretButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rightCaretButton; // @synthesize rightCaretButton=_rightCaretButton;
@property(retain, nonatomic) UIButton *leftCaretButton; // @synthesize leftCaretButton=_leftCaretButton;
@property(retain, nonatomic) UILabel *searchResultLabel; // @synthesize searchResultLabel=_searchResultLabel;
@property(retain, nonatomic) UIStackView *buttonStack; // @synthesize buttonStack=_buttonStack;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UIButton *logButton; // @synthesize logButton=_logButton;
@property(retain, nonatomic) UIView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) UIView *contentHolderView; // @synthesize contentHolderView=_contentHolderView;
@property(nonatomic) __weak id <LUILogViewerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rightCaretButtonTapped:(id)arg1;
- (void)leftCaretButtonTapped:(id)arg1;
- (void)filterButtonTapped:(id)arg1;
- (void)clearButtonTapped:(id)arg1;
- (void)logButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (id)_createSearchResultLabel;
- (id)_createSearchBar;
- (id)_createButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (id)_createRightCaretButton;
- (id)_createLeftCaretButton;
- (id)_createFilterButton;
- (id)_createClearButton;
- (id)_createLogButton;
- (id)_createCloseButton;
- (void)updateSearchResultLabelWithTotalResult:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2;
- (void)resetSearchResultLabel;
- (void)_highlightButton:(id)arg1 highlight:(_Bool)arg2;
- (void)highlightLogButton:(_Bool)arg1;
- (void)highlightFilterButton:(_Bool)arg1;
- (void)switchClearButtonTitle:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

