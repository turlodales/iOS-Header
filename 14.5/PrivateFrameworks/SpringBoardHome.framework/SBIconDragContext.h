//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSArray, NSCountedSet, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer, SBIconView, SBPlaceholderIcon;
@protocol OS_os_activity;

@interface SBIconDragContext : NSObject <BSDescriptionProviding>
{
    NSMutableSet *_sourceIconViews;
    NSMapTable *_iconToExpandAfterDropAnimation;
    NSMutableSet *_destinationIconViews;
    NSCountedSet *_messageExpectations;
    NSMutableSet *_enteredIconListViews;
    NSMapTable *_targetsForCancellingIconViews;
    NSMapTable *_dragPreviewForIconViews;
    NSMutableSet *_appLocalContexts;
    NSMutableDictionary *_destinationFolderIconViews;
    NSMutableDictionary *_destinationStackIconViews;
    NSMutableSet *_dropAnimatingDragItems;
    NSMutableDictionary *_initialIconPaths;
    NSMapTable *_bouncedIcons;
    NSMutableSet *_allBouncedIcons;
    NSMapTable *_appDragLocalContexts;
    NSMapTable *_iconViewPrepareForDropAssertions;
    NSMapTable *_iconViewDroppingAssertions;
    struct os_activity_scope_state_s _activityState;
    _Bool _performedIconDrop;
    _Bool _cancelled;
    _Bool _notifiedDelegateForDropSession;
    long long _state;
    NSObject<OS_os_activity> *_activity;
    SBPlaceholderIcon *_iconPlaceholder;
    NSArray *_grabbedIconViews;
    NSSet *_itemIdentifiers;
    NSSet *_sourceIcons;
    SBIconView *_primaryIconView;
    SBIconView *_recipientIconView;
    NSDate *_lastUserInteractionDate;
    NSTimer *_watchdogTimer;
    struct CGPoint _initialTouchOffsetFromIconImageCenter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool notifiedDelegateForDropSession; // @synthesize notifiedDelegateForDropSession=_notifiedDelegateForDropSession;
@property(nonatomic) struct CGPoint initialTouchOffsetFromIconImageCenter; // @synthesize initialTouchOffsetFromIconImageCenter=_initialTouchOffsetFromIconImageCenter;
@property(retain, nonatomic) NSTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(copy, nonatomic) NSDate *lastUserInteractionDate; // @synthesize lastUserInteractionDate=_lastUserInteractionDate;
@property(retain, nonatomic) SBIconView *recipientIconView; // @synthesize recipientIconView=_recipientIconView;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool performedIconDrop; // @synthesize performedIconDrop=_performedIconDrop;
@property(retain, nonatomic) SBIconView *primaryIconView; // @synthesize primaryIconView=_primaryIconView;
@property(copy, nonatomic) NSSet *sourceIcons; // @synthesize sourceIcons=_sourceIcons;
@property(copy, nonatomic) NSSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(copy, nonatomic) NSArray *grabbedIconViews; // @synthesize grabbedIconViews=_grabbedIconViews;
@property(retain, nonatomic) SBPlaceholderIcon *iconPlaceholder; // @synthesize iconPlaceholder=_iconPlaceholder;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)appDragLocalContextForDragItem:(id)arg1;
- (void)setAppDragLocalContext:(id)arg1 forDragItem:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *allIconsEverBounced;
- (id)listModelEnumeratorForBouncedIcons;
- (id)bouncedIconsForListModel:(id)arg1;
- (void)setBouncedIcons:(id)arg1 forListModel:(id)arg2;
- (void)setInitialIndexPath:(id)arg1 forIcon:(id)arg2;
- (id)initialIndexPathForIconWithIdentifier:(id)arg1;
- (id)initialIndexPathForIcon:(id)arg1;
- (_Bool)isAnimatingDropForDragItem:(id)arg1;
- (void)addDropAnimatingDragItem:(id)arg1;
- (void)clearAllDropAssertions;
- (void)clearDropAssertionsForIconView:(id)arg1;
- (void)_addPrepareForDropAssertionForIconView:(id)arg1;
- (id)destinationStackIconViewForIconWithIdentifier:(id)arg1;
- (void)setDestinationStackIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (id)destinationFolderIconViewForIconWithIdentifier:(id)arg1;
- (void)setDestinationFolderIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (void)resetLastUserInteractionDate;
@property(readonly, copy, nonatomic) NSSet *appLocalContexts;
- (void)addAppLocalContext:(id)arg1;
- (void)enumerateDragPreviewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setDragPreview:(id)arg1 forIconView:(id)arg2;
- (id)dragPreviewForIconView:(id)arg1;
- (id)targetIconViewForCancellingIconView:(id)arg1;
- (void)setTargetIconView:(id)arg1 forCancellingIconView:(id)arg2;
- (void)addEnteredIconListView:(id)arg1;
- (_Bool)hasEnteredIconListView:(id)arg1;
- (void)addIconViewDroppingAssertion:(id)arg1 forIconView:(id)arg2;
- (void)enumerateDestinationIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasDestinationIconView:(id)arg1;
- (void)addDestinationIconView:(id)arg1;
- (id)iconToExpandAfterDropAnimationForDragItem:(id)arg1;
- (void)setIcon:(id)arg1 shouldExpandAfterDropAnimationForDragItems:(id)arg2;
@property(readonly, nonatomic, getter=isWaitingForMessage) _Bool waitingForMessage;
@property(readonly, copy, nonatomic) NSSet *expectedMessages;
- (void)removeAllMessageExpectations;
- (_Bool)hasMessageExpectationNamed:(id)arg1;
- (void)removeMessageExpectationNamed:(id)arg1;
- (void)addMessageExpectationNamed:(id)arg1;
- (_Bool)hasDragItem:(id)arg1;
- (void)enumerateSourceIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addSourceIconView:(id)arg1;
- (_Bool)hasSourceIconView:(id)arg1;
@property(readonly, nonatomic) _Bool hasNonDefaultSizedSourceIcons;
- (void)swapSourceIconWithIdentifier:(id)arg1 withIcon:(id)arg2;
- (void)addSourceIcons:(id)arg1;
- (void)addSourceIcon:(id)arg1;
- (void)addGrabbedIconView:(id)arg1;
- (_Bool)hasItemIdentifier:(id)arg1;
- (void)addItemIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool hasUserDragged;
@property(readonly, nonatomic, getter=isUserActive) _Bool userActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

