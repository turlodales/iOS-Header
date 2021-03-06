//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__DialerControllerAccessibility_super.h"

@interface DialerControllerAccessibility : __DialerControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (void)_accessibilityInsertText:(id)arg1;
- (_Bool)_accessibilityHasDeletableText;
- (_Bool)_accessibilitySupportsTextInsertionAndDeletion;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSet;
- (_Bool)_accessibilitySupportsHandwriting;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_voiceOverStatusChange:(id)arg1;
- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)phonePad:(id)arg1 appendString:(id)arg2;
- (void)phonePadDeleteLastDigit:(id)arg1;
- (void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;

@end

