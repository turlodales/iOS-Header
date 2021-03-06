//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBIndirectTouchLifecycleMonitor, UIGestureRecognizer;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding>
{
    FBSDisplayIdentity *_displayIdentity;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_gestureToType;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSMutableSet *_gesturesDisabledAssertions;
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;
    NSSet *_gesturesPreventedByStylus;
    UIGestureRecognizer *_stylusPriorityRecognizer;
    _Bool _systemGesturesDisabledForAccessibility;
    SBIndirectTouchLifecycleMonitor *_indirectTouchLifecycleMonitor;
}

+ (id)mainDisplayManager;
- (void).cxx_destruct;
@property(retain, nonatomic) SBIndirectTouchLifecycleMonitor *indirectTouchLifecycleMonitor; // @synthesize indirectTouchLifecycleMonitor=_indirectTouchLifecycleMonitor;
@property(retain, nonatomic) NSSet *gesturesPreventedByStylus; // @synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus;
@property(nonatomic, getter=areSystemGesturesDisabledForAccessibility) _Bool systemGesturesDisabledForAccessibility; // @synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility;
- (id)acquireSystemGestureDisableAssertionForReason:(id)arg1 exceptSystemGestureTypes:(id)arg2;
- (void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)arg1;
- (void)_systemGestureChanged:(id)arg1;
- (void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (_Bool)_isTouchGestureWithType:(unsigned long long)arg1;
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (long long)_recognitionEventForTouchGestureType:(unsigned long long)arg1;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)_evaluateEnablement;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)windowForSystemGestures;
- (_Bool)isGestureWithTypeAllowed:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isAnyTouchGestureRunning) _Bool anyTouchGestureRunning;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)gestureRecognizerOfType:(unsigned long long)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)_initWithDisplayIdentity:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

