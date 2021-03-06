//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUIUtilities/NSObject-Protocol.h>

@class NSString, PSSpecifier;

@protocol AXUISettingsEditableTableCellWithStepperDelegate <NSObject>
- (NSString *)stringValueForSpecifier:(PSSpecifier *)arg1;
- (double)maximumValueForSpecifier:(PSSpecifier *)arg1;
- (double)minimumValueForSpecifier:(PSSpecifier *)arg1;
- (double)stepValueForSpecifier:(PSSpecifier *)arg1;
- (void)specifier:(PSSpecifier *)arg1 setValue:(double)arg2;
- (double)valueForSpecifier:(PSSpecifier *)arg1;

@optional
- (long long)keyboardTypeForSpecifier:(PSSpecifier *)arg1;
- (NSString *)unitsStringForSpecifier:(PSSpecifier *)arg1;
@end

