//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UISpecializedInputMode.h>

@class UIKeyboardInputMode, UITouch;

@interface UIDictationInputMode : UISpecializedInputMode
{
    UITouch *_triggeringTouch;
    UIKeyboardInputMode *_currentInputModeForDictation;
}

+ (_Bool)currentInputModeSupportsDictation;
@property(retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // @synthesize currentInputModeForDictation=_currentInputModeForDictation;
@property(retain, nonatomic) UITouch *triggeringTouch; // @synthesize triggeringTouch=_triggeringTouch;
- (_Bool)includeBarHeight;
- (Class)viewControllerClass;
- (void)dealloc;

@end

