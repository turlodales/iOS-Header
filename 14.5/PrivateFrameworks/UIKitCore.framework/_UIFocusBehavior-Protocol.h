//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIControl, UIFocusUpdateContext, UIResponder, UITraitCollection;

@protocol _UIFocusBehavior <NSObject>
+ (id)sharedInstance;
- (_Bool)supportsLinearMovementDebugOverlay;
- (_Bool)shouldForwardKeyCode:(long long)arg1 toFocusEngineWithFirstResponder:(UIResponder *)arg2;
- (_Bool)shouldSupressIndirectMovementOnSelect;
- (_Bool)shouldEnableFocusOnSelect;
- (long long)indirectMovementPriority;
- (_Bool)supportsTabKey;
- (_Bool)supportsArrowKeys;
- (_Bool)supportsGameControllers;
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;
- (_Bool)supportsIndirectPanningMovement;
- (_Bool)supportViewTransparencyAndMultipleWindows;
- (_Bool)treatFocusableItemAsLeaf;
- (_Bool)treatFirstAndLastHeadingsAsGlobal;
- (_Bool)inferCellFocusability;
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;
- (long long)focusRingForContext:(UIFocusUpdateContext *)arg1;
- (_Bool)supportsFocusGroups;
- (_Bool)searchBarTextFieldCanBecomeFocused;
- (_Bool)tabBarButtonCanBecomeFocused;
- (_Bool)tabBarCanBecomeFocused;
- (_Bool)controlCanBecomeFocused:(UIControl *)arg1;
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (long long)focusDeferral;
- (_Bool)syncsFocusAndResponder;
- (_Bool)wantsFocusForTraitCollection:(UITraitCollection *)arg1;
@end

