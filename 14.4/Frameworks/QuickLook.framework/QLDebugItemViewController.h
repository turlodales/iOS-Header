//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class NSLayoutConstraint, NSMutableDictionary, UITextView;

__attribute__((visibility("hidden")))
@interface QLDebugItemViewController : QLItemViewController
{
    _Bool _constraintsSetUp;
    UITextView *_logTextView;
    NSMutableDictionary *_selectorToCount;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

- (void).cxx_destruct;
- (id)_attributesForLogLevel:(unsigned long long)arg1;
- (void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2;
- (void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2;
- (void)_encounterMethodCall:(SEL)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillFinishAppearing;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (_Bool)canEnterFullScreen;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

