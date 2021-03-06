//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class NSString, NSTimer, _UIExpandingGlyphsView, _UIStatusBarLockView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItem : _UIStatusBarItem <_UIBasicAnimationFactory>
{
    _Bool _showsLock;
    _UIStatusBarLockView *_lockView;
    _UIExpandingGlyphsView *_stringView;
    NSTimer *_lockDisappearanceTimer;
    long long _unlockFailureCount;
}

+ (id)textDisplayIdentifier;
- (void).cxx_destruct;
@property(nonatomic) long long unlockFailureCount; // @synthesize unlockFailureCount=_unlockFailureCount;
@property(nonatomic) _Bool showsLock; // @synthesize showsLock=_showsLock;
@property(retain, nonatomic) NSTimer *lockDisappearanceTimer; // @synthesize lockDisappearanceTimer=_lockDisappearanceTimer;
@property(retain, nonatomic) _UIExpandingGlyphsView *stringView; // @synthesize stringView=_stringView;
@property(retain, nonatomic) _UIStatusBarLockView *lockView; // @synthesize lockView=_lockView;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_stringView;
- (void)_create_lockView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

