//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_keyHoldDelay;
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    double m_lastGlobeKeyUpTime;
    NSString *_newMode;
    _Bool _isGlobeKeyDown;
    _Bool _usingCapsLockLanguageSwitch;
    _Bool _dismissingEmojiPopover;
    NSString *_loadedIdentifier;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool dismissingEmojiPopover; // @synthesize dismissingEmojiPopover=_dismissingEmojiPopover;
@property(nonatomic) _Bool usingCapsLockLanguageSwitch; // @synthesize usingCapsLockLanguageSwitch=_usingCapsLockLanguageSwitch;
@property(nonatomic) _Bool isGlobeKeyDown; // @synthesize isGlobeKeyDown=_isGlobeKeyDown;
@property(copy, nonatomic) NSString *loadedIdentifier; // @synthesize loadedIdentifier=_loadedIdentifier;
- (_Bool)handleModifiersChangedEvent:(id)arg1;
- (_Bool)needsFullHUD;
- (_Bool)handleEmojiPicker;
- (_Bool)handleNavigationEvent:(id)arg1;
- (_Bool)handleGlobeKeyEvent:(id)arg1 switcherIsVisible:(_Bool)arg2;
- (_Bool)handleSwitchingKeyEvent:(id)arg1;
- (void)updateHardwareLayout;
- (_Bool)switchMode:(id)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;
- (_Bool)switchMode:(id)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3 fromCapsLock:(_Bool)arg4;
- (_Bool)handleSwitchCommand:(_Bool)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;
- (_Bool)handleSwitchCommand:(_Bool)arg1;
- (id)inputModeIdentifierWithNextFlag:(_Bool)arg1;
- (_Bool)isVisibleOrHiding;
- (void)hideSwitcherIfNeeded;
- (_Bool)isVisible;
- (void)clearKeyHoldTimer;
- (void)touchKeyHoldTimer;
- (void)clearShowSwitcherTimer;
- (void)cancelShowSwitcherTimer;
- (void)touchShowSwitcherTimer;
- (void)showSwitcherWithoutAutoHide;
- (void)showSwitcherWithAutoHide;
- (void)showSwitcherShouldAutoHide:(_Bool)arg1;
- (void)_showSwitcherViewAsHUD;
- (void)clearHideSwitcherTimer;
- (void)touchHideSwitcherTimer;
- (void)cancelHideSwitcherTimer;
- (void)cleanUpAfterHide;
- (void)hideSwitcher;
- (void)handleRotate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

