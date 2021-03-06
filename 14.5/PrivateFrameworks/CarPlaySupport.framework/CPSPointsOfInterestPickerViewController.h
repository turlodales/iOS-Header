//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSBaseEntityContentViewController.h>

#import <CarPlaySupport/CPSActionButtonLayoutDelegate-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>
#import <CarPlaySupport/CPSLinearFocusProviding-Protocol.h>
#import <CarPlaySupport/CPSPointsOfInterestPickerInfoDelegate-Protocol.h>
#import <CarPlaySupport/UITableViewDataSource-Protocol.h>
#import <CarPlaySupport/UITableViewDelegate-Protocol.h>

@class CPSActionButton, CPSPointsOfInterestPickerInfoView, CPSPointsOfInterestTableView, NSArray, NSString, UILabel, UIViewPropertyAnimator;
@protocol CPSPointsOfInterestPickerDelegate, UIFocusEnvironment;

@interface CPSPointsOfInterestPickerViewController : CPSBaseEntityContentViewController <UITableViewDataSource, UITableViewDelegate, CPSButtonDelegate, CPSPointsOfInterestPickerInfoDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding>
{
    id <CPSPointsOfInterestPickerDelegate> _delegate;
    UILabel *_titleLabel;
    CPSPointsOfInterestTableView *_tableView;
    CPSActionButton *_cancelButton;
    NSArray *_layoutConstraints;
    double _scrollHeight;
    CPSPointsOfInterestPickerInfoView *_infoView;
    unsigned long long _pickerState;
    UIViewPropertyAnimator *_animator;
    id <UIFocusEnvironment> _requestedFocusItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UIFocusEnvironment> requestedFocusItem; // @synthesize requestedFocusItem=_requestedFocusItem;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) unsigned long long pickerState; // @synthesize pickerState=_pickerState;
@property(retain, nonatomic) CPSPointsOfInterestPickerInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) double scrollHeight; // @synthesize scrollHeight=_scrollHeight;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) CPSActionButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) CPSPointsOfInterestTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CPSPointsOfInterestPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateFocusedItem:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)_linearFocusItems;
- (struct CGSize)buttonGlyphSize;
- (struct CGSize)buttonSize;
- (void)completeTransition:(_Bool)arg1;
- (void)transitionToSecondaryCard;
- (void)transitionToPrimaryCard;
- (void)modelDidDeselect:(id)arg1;
- (void)modelDidSelect:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (id)selectedItem;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelButtonPressed:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (void)actionButtonPressed:(id)arg1 forModel:(id)arg2;
- (void)setupLayoutConstraints;
- (void)updateViewConstraints;
- (void)resetLayoutConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupViews;
- (void)viewDidLoad;
- (void)loadView;
- (void)didUpdateEntity:(id)arg1;
- (id)template;
- (id)pointsOfInterest;
- (id)initWithEntity:(id)arg1 resourceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool useRightHandDriveFocusGuide;

@end

