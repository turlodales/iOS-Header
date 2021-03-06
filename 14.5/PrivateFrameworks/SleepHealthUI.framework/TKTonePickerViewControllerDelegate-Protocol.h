//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepHealthUI/NSObject-Protocol.h>

@class NSNumber, NSString, TKTonePickerViewController, TKVibrationPickerViewController;

@protocol TKTonePickerViewControllerDelegate <NSObject>

@optional
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 didChangeIgnoreMute:(_Bool)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 didDismissVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 willPresentVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
@end

